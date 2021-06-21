
[tocstart]: # (toc start)

  * [Rebuild Fonts](#rebuild-fonts)
  * [LCD and ePaper](#lcd-and-epaper)
    * [Powersave Mode](#powersave-mode)
    * [Refresh](#refresh)
  * [New Displays](#new-displays)
    * [Display Procedure](#display-procedure)
    * [Update u8x8.h](#update-u8x8h)
    * [Rebuild Code](#rebuild-code)
  * [Release](#release)
    * [PDF Generation](#pdf-generation)
  * [Arduino IDE](#arduino-ide)
    * [Library ](#library-)
  * [Test Devices](#test-devices)
    * [Digispark ATTiny Model A (LED at Pin 1)](#digispark-attiny-model-a-led-at-pin-1)
  * [Images](#images)
  * [Defines](#defines)
    * [GCC](#gcc)
    * [`F_CPU`](#`f_cpu`)
    * [Identify Environment](#identify-environment)
  * [Upload to Arduino Due on Linux](#upload-to-arduino-due-on-linux)
  * [reset arduino board](#reset-arduino-board)
  * [wait for it...](#wait-for-it)
  * [https://stackoverflow.com/questions/43016993/how-can-i-force-a-leonardo-to-reset-with-avrdude](#httpsstackoverflowcomquestions43016993howcaniforcealeonardotoresetwithavrdude)
  * [TTF to BDF](#ttf-to-bdf)
  * [External Lib Refs](#external-lib-refs)

[tocend]: # (toc end)

# Rebuild Fonts

Rebuilding a all font c code, font pictures and all font related md (Github markdown) files:
```
tools/font/build$ make clean
tools/font/build$ make build1
tools/font/build$ ./build1
tools/font/build$ make clean
tools/font/build$ make build2
tools/font/build$ ./build2
```

The font pictures must be copied manually to the wiki:
```
tools/font/build$ cp *.png ~/git/u8g2.wiki/fntpic/.
```

Some pictures are too large for the build processor. These pictures have to be generated with bdfconv. 
After this, overwrite the incomplete pictures.
```
tools/font/bdfconv$ make chinese
tools/font/bdfconv$ cp u8g2_font_*.png ~/git/u8g2.wiki/fntpic/.
```


The updated font md files will clear the TOC. This has to be rebuild also:
```
tools/mdtoc$ make wiki
```
The makefile target "wiki" will update all markdown files in the wiki. All modified markdown files will get a generated table of content. Labels are inserted before and after the TOC. Do not delete these labels.

To update the examples, call the .ino updater:
```
tools/inoupdate$ make ino
```
This will the constructor list for the examples.

# LCD and ePaper

## Powersave Mode

LCD: Powersave mode will make the content of the display invisible.

e-Paper: Powersave mode will try to lower the power consumption, however the display content will not be affected.

In both cases the RAM content is not affected and can still be written. This means, that the RAM can be written during 
power down mode. After enabling power up, the new display content will be visible (for e-Paper devices an additional
refresh is required).

## Refresh

E-Paper devices have to handle the `U8X8_MSG_DISPLAY_REFRESH` message. 
LCDs must ignore this message.
`U8X8_MSG_DISPLAY_REFRESH` is sent to the device via call to [refreshDisplay](u8x8reference#refreshdisplay).
For the u8x8-API this call must be done by the user. For the u8g2-API this call
is automatically performed by the [sendBuffer](u8g2reference#sendbuffer)
and [nextPage](u8g2reference#nextPage) calls.

The refresh message **must** be sent only during power up mode of the e-Paper/e-Ink
device. This leads to the following problem: The C++ begin() sequence looks like this:
1. [initDisplay](u8g2reference#initdisplay)
2. [clearDisplay](u8g2reference#cleardisplay)
3. [setPowerSave(0)](u8g2reference#setpowersave)

While this is fine for LCDs, the problem for e-Paper/e-Ink is, that a refresh message
is sent during step 2, but the power save might still be enabled. To solve this,
the procedures above behave differently for LCDs and e-Paper/e-Ink devices:

| Procedure | Result for LCD | Result for e-Paper/e-Ink |
|----------|-------|------------|
| initDisplay | Power Save enabled, display RAM undefined, empty display screen | Power Save disabled, display RAM cleared, empty display screen |
| clearDisplay | Display RAM cleared | Display RAM cleared (redundant, because it is already empty) |
| setPowerSave(0) | Display RAM is visible on the screen |  Disable Power Save (redundant, because it is already disabled) |

# New Displays

## Display Procedure

Every display has its own display procedure. All display specific communication happens through this procedure. The procedure should be located in a c file with the prefix `u8x8_d_` and the function name *must* have the following form: `u8x8_d_<controller>_<display>()`

Example:
```
uint8_t u8x8_d_<controller>_<display>(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr)
{
  uint8_t x, c;
  uint8_t *ptr;
  switch(msg)
  {
    case U8X8_MSG_DISPLAY_SETUP_MEMORY:
      // make a call to u8x8_d_helper_display_setup_memory 
      // do NOT communicate with the display 
      u8x8_d_helper_display_setup_memory(u8x8, <adr of display info struct>);
      break;
    case U8X8_MSG_DISPLAY_INIT:
      // setup the communication interface
      // init the display by sending an init sequence
      u8x8_d_helper_display_init(u8x8);  
      u8x8_cad_SendSequence(u8x8, <adr of the init sequence>);
      // LCD: Put controller in power safe mode and do not clear  
      //     the controller RAM (will be done later)
      // e-paper/e-Ink: Leave the controller in normal mode (activated charge pump, etc)
      //     ensure, that the controller RAM and the display content are cleared
      break;
    case U8X8_MSG_DISPLAY_SET_POWER_SAVE:
      // arg_int == 0: wakeup, normal mode
      // arg_int == 1: power safe 
      // Power save mode means, that power is reduced, but still the controller RAM
      // is valid. Sometimes a controller might have several power modes (normal,
      // sleep, deep sleep, etc). As long as the RAM can be written, any power down 
      // mode is fine. Do not switch to a power down mode, where the controller RAM
      // gets invalid.
      ...
      break;
#ifdef U8X8_WITH_SET_FLIP_MODE
    case U8X8_MSG_DISPLAY_SET_FLIP_MODE:
      // This case should be compiled only with U8X8_WITH_SET_FLIP_MODE
      // arg_int == 0: normal, native orientation
      // arg_int == 1: 180 degree rotation
      ...
      break;
#endif
#ifdef U8X8_WITH_SET_CONTRAST
    case U8X8_MSG_DISPLAY_SET_CONTRAST:
      // This case should be compiled only with U8X8_WITH_SET_CONTRAST
      // arg_int: 0 (no contrast/brightness) to 255 (max contrast/brightness)
      ...
      break;
#endif
    case U8X8_MSG_DISPLAY_DRAW_TILE:
      /* arg_ptr: (u8x8_tile_t *) */
      /* arg_int: How often u8x8_tile_t should be repeated */
      ...
      break;
    case U8X8_MSG_DISPLAY_REFRESH:
      // LCD: Do nothing
      // e-Paper/e-Ink: Make controller RAM visible on the display.
      //    It can be assumed, that the controler is NOT in power save mode.
      break;
    default:
      return 0;
  }
  return 1;
}
```

## Update u8x8.h

The prototype of the display procedure
```
uint8_t u8x8_d_<controller>_<display>(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr)
```
has to be added to u8x8.h



## Rebuild Code

Locate
```
tools/codebuild$ 
```

Update the C file with the new controller/display. Then rebuild the code with
```
tools/codebuild$ make build
```


# Release

## PDF Generation

```
pandoc -f gfm fntlistall.md -t latex -o /data/kraus/git/u8g2/doc/u8g2fntlistall.pdf
```

# Arduino IDE

## Library 

A library, which has been installed via local zip file, is located in the
"Arduino/libraries" folder. 


# Test Devices

## Digispark ATTiny Model A (LED at Pin 1)
 * Github: https://github.com/digistump/DigistumpArduino
 * Boards Manager URL: http://digistump.com/package_digistump_index.json
 * Board: Digispark Default 16.5 MHz
 * Product Specification: https://digistump.com/wiki/digispark/tutorials/digispark
 * Defines: `__AVR_ATtiny85__`
 * Test Environment: Arduino 1.6.5 on Linux Desktop
 * Display: SSD1306 I2C OLED, Pin 0: Data, Pin 2: Clock

# Images
 * LED light, white background
 * ISO 200, Cloud, 1/60 (A), +3/10 EV, S-Prog

# Defines

## GCC
  * Show gcc buildin macros: `gcc -dM -E - < /dev/null`

## `F_CPU`

  * F\_CPU must be defined and must expand to the CPU frequency in hertz (e.g. -DF\_CPU=16000000L)

## Identify Environment

  * `ARDUINO`: Version number of the Arduino Environment. 100 for 1.00, 10600 for 1.6.0, 10800 for 1.8.0
  * `__AVR__`: Atmel AVR
  * `__18CXX`: MPLAB C18 (PIC)
  * `__PIC32MX`: PIC32
  * `__XC8` MPLAB XC8 Compiler (Microchip)
  * `__PIC18` MPLAB XC8 Compiler with selected PIC18 device
  * `__arm__`: GCC ARM (Arduino Due)
  * `__SAM3X8E__`: Arduino Due 
  * `__AVR_ARCH__`: Values 2 and 25 are ATTiny
  * `__XTENSA__`, `__xtensa__`: gcc predefined for xtensa architecture (ESP8266)
  * `XTENSA_EL`, `XTENSA`, `xtensa`: gcc predefined for ESP32
  * `ARDUINO_ARCH_ESP8266`, `ESP8266`: Defined by the esp8266 Arduino board file
  * `ARDUINO_ARCH_ESP32`, `ESP_PLATFORM`: Defined by Arduino IDE for ESP32 boards
  * `__AVR_ARCH__`: Build-in macro that resolves to a decimal number that identifies the architecture. Possible values are:
    * 2: avr2, ATTiny
    * 25: avr25, ATTiny with MOVW instruction
    * 3: avr3 
    * 31: avr31
    * 35: avr35 (ata5505, ata6617c, ata664251, atmega16u2, atmega32u2, atmega8u2, attiny1634, attiny167, at90usb162, at90usb82)
    * 4: avr4 (ATMega with 8KB)
    * 5: avr5 (ATMega with 16KB to 64KB)
    * 51: avr51 (ATMega with 128KB)
    * 6: avr6 (ATMega with > 128KB)

    for mcu=avr2, avr25, avr3, avr31, avr35, avr4, avr5, avr51, avr6, 

# Upload to Arduino Due on Linux
Often the following code seems to be required (enter on terminal):
```
stty -F /dev/ttyACM0 speed 1200 cs8 -cstopb -parenb
```

The following code will reset and wait for the board:
```
# reset arduino board
stty -F /dev/ttyACM0 speed 1200 cs8 

# wait for it...
# https://stackoverflow.com/questions/43016993/how-can-i-force-a-leonardo-to-reset-with-avrdude
while :; do
  sleep 0.5
  [ -c /dev/ttyACM0 ] && break
done
```


# TTF to BDF
Usually, the following options should be used

8x8 Fonts:
```
otf2bdf -r 72 -p 8 <ttf-file> -o <bdf-file>
```

16x16 Fonts:
```
otf2bdf -r 72 -p 16 <ttf-file> -o <bdf-file>
```
# External Lib Refs
 * http://platformio.org/lib/show/942/U8g2/
 * http://www.arduinolibraries.info/libraries/u8g2

