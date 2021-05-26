
[tocstart]: # (toc start)

  * [Introduction](#introduction)
    * [Using dynamically allocated page buffers](#using-dynamically-allocated-page-buffers)
    * [Constructor Name](#constructor-name)
    * [Buffer Size](#buffer-size)
    * [Communication](#communication)
    * [Rotation](#rotation)
    * [Wiring](#wiring)
    * [16 Bit Mode](#16-bit-mode)
  * [Constructor Reference](#constructor-reference)
    * [SSD1305 128X32_NONAME](#ssd1305-128x32_noname)
    * [SSD1305 128X32_ADAFRUIT](#ssd1305-128x32_adafruit)
    * [SSD1305 128X32_NONAME](#ssd1305-128x32_noname)
    * [SSD1305 128X32_ADAFRUIT](#ssd1305-128x32_adafruit)
    * [SSD1305 128X64_ADAFRUIT](#ssd1305-128x64_adafruit)
    * [SSD1305 128X64_RAYSTAR](#ssd1305-128x64_raystar)
    * [SSD1305 128X64_ADAFRUIT](#ssd1305-128x64_adafruit)
    * [SSD1305 128X64_RAYSTAR](#ssd1305-128x64_raystar)
    * [SSD1306 2040X16](#ssd1306-2040x16)
    * [SSD1306 128X64_NONAME](#ssd1306-128x64_noname)
    * [SSD1306 128X64_VCOMH0](#ssd1306-128x64_vcomh0)
    * [SSD1306 128X64_ALT0](#ssd1306-128x64_alt0)
    * [SSD1306 128X64_NONAME](#ssd1306-128x64_noname)
    * [SSD1306 128X64_VCOMH0](#ssd1306-128x64_vcomh0)
    * [SSD1306 128X64_ALT0](#ssd1306-128x64_alt0)
    * [SSD1306 72X40_ER](#ssd1306-72x40_er)
    * [SSD1306 72X40_ER](#ssd1306-72x40_er)
    * [SH1106 128X64_NONAME](#sh1106-128x64_noname)
    * [SH1106 128X64_VCOMH0](#sh1106-128x64_vcomh0)
    * [SH1106 128X64_WINSTAR](#sh1106-128x64_winstar)
    * [SH1106 128X64_NONAME](#sh1106-128x64_noname)
    * [SH1106 128X64_VCOMH0](#sh1106-128x64_vcomh0)
    * [SH1106 128X64_WINSTAR](#sh1106-128x64_winstar)
    * [SH1106 72X40_WISE](#sh1106-72x40_wise)
    * [SH1106 72X40_WISE](#sh1106-72x40_wise)
    * [SH1106 64X32](#sh1106-64x32)
    * [SH1106 64X32](#sh1106-64x32)
    * [SH1107 64X128](#sh1107-64x128)
    * [SH1107 64X128](#sh1107-64x128)
    * [SH1107 SEEED_96X96](#sh1107-seeed_96x96)
    * [SH1107 SEEED_96X96](#sh1107-seeed_96x96)
    * [SH1107 128X128](#sh1107-128x128)
    * [SH1107 PIMORONI_128X128](#sh1107-pimoroni_128x128)
    * [SH1107 SEEED_128X128](#sh1107-seeed_128x128)
    * [SH1107 128X128](#sh1107-128x128)
    * [SH1107 PIMORONI_128X128](#sh1107-pimoroni_128x128)
    * [SH1107 SEEED_128X128](#sh1107-seeed_128x128)
    * [SH1108 160X160](#sh1108-160x160)
    * [SH1108 160X160](#sh1108-160x160)
    * [SH1122 256X64](#sh1122-256x64)
    * [SH1122 256X64](#sh1122-256x64)
    * [SSD1306 128X32_UNIVISION](#ssd1306-128x32_univision)
    * [SSD1306 128X32_WINSTAR](#ssd1306-128x32_winstar)
    * [SSD1306 128X32_UNIVISION](#ssd1306-128x32_univision)
    * [SSD1306 128X32_WINSTAR](#ssd1306-128x32_winstar)
    * [SH1106 128X32_VISIONOX](#sh1106-128x32_visionox)
    * [SH1106 128X32_VISIONOX](#sh1106-128x32_visionox)
    * [SSD1306 64X48_ER](#ssd1306-64x48_er)
    * [SSD1306 64X48_ER](#ssd1306-64x48_er)
    * [SSD1306 48X64_WINSTAR](#ssd1306-48x64_winstar)
    * [SSD1306 48X64_WINSTAR](#ssd1306-48x64_winstar)
    * [SSD1306 64X32_NONAME](#ssd1306-64x32_noname)
    * [SSD1306 64X32_1F](#ssd1306-64x32_1f)
    * [SSD1306 64X32_NONAME](#ssd1306-64x32_noname)
    * [SSD1306 64X32_1F](#ssd1306-64x32_1f)
    * [SSD1306 96X16_ER](#ssd1306-96x16_er)
    * [SSD1306 96X16_ER](#ssd1306-96x16_er)
    * [SSD1309 128X64_NONAME2](#ssd1309-128x64_noname2)
    * [SSD1309 128X64_NONAME2](#ssd1309-128x64_noname2)
    * [SSD1309 128X64_NONAME0](#ssd1309-128x64_noname0)
    * [SSD1309 128X64_NONAME0](#ssd1309-128x64_noname0)
    * [SSD1316 128X32](#ssd1316-128x32)
    * [SSD1316 128X32](#ssd1316-128x32)
    * [SSD1317 96X96](#ssd1317-96x96)
    * [SSD1317 96X96](#ssd1317-96x96)
    * [SSD1318 128X96](#ssd1318-128x96)
    * [SSD1318 128X96_XCP](#ssd1318-128x96_xcp)
    * [SSD1318 128X96](#ssd1318-128x96)
    * [SSD1318 128X96_XCP](#ssd1318-128x96_xcp)
    * [SSD1325 NHD_128X64](#ssd1325-nhd_128x64)
    * [SSD1325 NHD_128X64](#ssd1325-nhd_128x64)
    * [SSD0323 OS128064](#ssd0323-os128064)
    * [SSD0323 OS128064](#ssd0323-os128064)
    * [SSD1326 ER_256X32](#ssd1326-er_256x32)
    * [SSD1326 ER_256X32](#ssd1326-er_256x32)
    * [SSD1327 WS_96X64](#ssd1327-ws_96x64)
    * [SSD1327 WS_96X64](#ssd1327-ws_96x64)
    * [SSD1327 SEEED_96X96](#ssd1327-seeed_96x96)
    * [SSD1327 SEEED_96X96](#ssd1327-seeed_96x96)
    * [SSD1327 EA_W128128](#ssd1327-ea_w128128)
    * [SSD1327 MIDAS_128X128](#ssd1327-midas_128x128)
    * [SSD1327 WS_128X128](#ssd1327-ws_128x128)
    * [SSD1327 EA_W128128](#ssd1327-ea_w128128)
    * [SSD1327 MIDAS_128X128](#ssd1327-midas_128x128)
    * [SSD1327 WS_128X128](#ssd1327-ws_128x128)
    * [SSD1327 VISIONOX_128X96](#ssd1327-visionox_128x96)
    * [SSD1327 VISIONOX_128X96](#ssd1327-visionox_128x96)
    * [SSD1329 128X96_NONAME](#ssd1329-128x96_noname)
    * [LD7032 60X32](#ld7032-60x32)
    * [LD7032 60X32_ALT](#ld7032-60x32_alt)
    * [LD7032 60X32](#ld7032-60x32)
    * [LD7032 60X32_ALT](#ld7032-60x32_alt)
    * [ST7920 192X32](#st7920-192x32)
    * [ST7920 192X32](#st7920-192x32)
    * [ST7920 192X32](#st7920-192x32)
    * [ST7920 128X64](#st7920-128x64)
    * [ST7920 128X64](#st7920-128x64)
    * [ST7920 128X64](#st7920-128x64)
    * [LS013B7DH03 128X128](#ls013b7dh03-128x128)
    * [LS027B7DH01 400X240](#ls027b7dh01-400x240)
    * [LS027B7DH01 M0_400X240](#ls027b7dh01-m0_400x240)
    * [LS013B7DH05 144X168](#ls013b7dh05-144x168)
    * [UC1701 EA_DOGS102](#uc1701-ea_dogs102)
    * [UC1701 MINI12864](#uc1701-mini12864)
    * [PCD8544 84X48](#pcd8544-84x48)
    * [PCF8812 96X65](#pcf8812-96x65)
    * [HX1230 96X68](#hx1230-96x68)
    * [UC1604 JLX19264](#uc1604-jlx19264)
    * [UC1604 JLX19264](#uc1604-jlx19264)
    * [UC1608 ERC24064](#uc1608-erc24064)
    * [UC1608 DEM240064](#uc1608-dem240064)
    * [UC1608 ERC24064](#uc1608-erc24064)
    * [UC1608 DEM240064](#uc1608-dem240064)
    * [UC1608 ERC240120](#uc1608-erc240120)
    * [UC1608 ERC240120](#uc1608-erc240120)
    * [UC1608 240X128](#uc1608-240x128)
    * [UC1608 240X128](#uc1608-240x128)
    * [UC1638 160X128](#uc1638-160x128)
    * [UC1610 EA_DOGXL160](#uc1610-ea_dogxl160)
    * [UC1610 EA_DOGXL160](#uc1610-ea_dogxl160)
    * [UC1611 EA_DOGM240](#uc1611-ea_dogm240)
    * [UC1611 EA_DOGM240](#uc1611-ea_dogm240)
    * [UC1611 EA_DOGXL240](#uc1611-ea_dogxl240)
    * [UC1611 EA_DOGXL240](#uc1611-ea_dogxl240)
    * [UC1611 EW50850](#uc1611-ew50850)
    * [UC1611 EW50850](#uc1611-ew50850)
    * [UC1611 CG160160](#uc1611-cg160160)
    * [UC1611 CG160160](#uc1611-cg160160)
    * [UC1611 IDS4073](#uc1611-ids4073)
    * [UC1611 IDS4073](#uc1611-ids4073)
    * [ST7511 AVD_320X240](#st7511-avd_320x240)
    * [ST7528 NHD_C160100](#st7528-nhd_c160100)
    * [ST7528 NHD_C160100](#st7528-nhd_c160100)
    * [ST7528 ERC16064](#st7528-erc16064)
    * [ST7528 ERC16064](#st7528-erc16064)
    * [UC1617 JLX128128](#uc1617-jlx128128)
    * [UC1617 JLX128128](#uc1617-jlx128128)
    * [ST7565 EA_DOGM128](#st7565-ea_dogm128)
    * [ST7565 LM6063](#st7565-lm6063)
    * [ST7565 64128N](#st7565-64128n)
    * [ST7565 ZOLEN_128X64](#st7565-zolen_128x64)
    * [ST7565 LM6059](#st7565-lm6059)
    * [ST7565 KS0713](#st7565-ks0713)
    * [ST7565 LX12864](#st7565-lx12864)
    * [ST7565 ERC12864](#st7565-erc12864)
    * [ST7565 ERC12864_ALT](#st7565-erc12864_alt)
    * [ST7565 NHD_C12864](#st7565-nhd_c12864)
    * [ST7565 JLX12864](#st7565-jlx12864)
    * [ST7565 NHD_C12832](#st7565-nhd_c12832)
    * [UC1601 128X32](#uc1601-128x32)
    * [UC1601 128X32](#uc1601-128x32)
    * [ST7565 EA_DOGM132](#st7565-ea_dogm132)
    * [ST7567 PI_132X64](#st7567-pi_132x64)
    * [ST7567 JLX12864](#st7567-jlx12864)
    * [ST7567 ENH_DG128064](#st7567-enh_dg128064)
    * [ST7567 ENH_DG128064I](#st7567-enh_dg128064i)
    * [ST7567 OS12864](#st7567-os12864)
    * [ST7567 64X32](#st7567-64x32)
    * [ST7567 HEM6432](#st7567-hem6432)
    * [ST7567 64X32](#st7567-64x32)
    * [ST7567 HEM6432](#st7567-hem6432)
    * [ST7571 128X128](#st7571-128x128)
    * [ST7571 128X128](#st7571-128x128)
    * [ST7586S S028HN118A](#st7586s-s028hn118a)
    * [ST7586S ERC240160](#st7586s-erc240160)
    * [ST7586S YMC240160](#st7586s-ymc240160)
    * [ST7588 JLX12864](#st7588-jlx12864)
    * [ST7588 JLX12864](#st7588-jlx12864)
    * [ST75256 JLX256128](#st75256-jlx256128)
    * [ST75256 WO256X128](#st75256-wo256x128)
    * [ST75256 JLX256128](#st75256-jlx256128)
    * [ST75256 WO256X128](#st75256-wo256x128)
    * [ST75256 JLX256160](#st75256-jlx256160)
    * [ST75256 JLX256160M](#st75256-jlx256160m)
    * [ST75256 JLX256160_ALT](#st75256-jlx256160_alt)
    * [ST75256 JLX256160](#st75256-jlx256160)
    * [ST75256 JLX256160M](#st75256-jlx256160m)
    * [ST75256 JLX256160_ALT](#st75256-jlx256160_alt)
    * [ST75256 JLX240160](#st75256-jlx240160)
    * [ST75256 JLX240160](#st75256-jlx240160)
    * [ST75256 JLX25664](#st75256-jlx25664)
    * [ST75256 JLX25664](#st75256-jlx25664)
    * [ST75256 JLX172104](#st75256-jlx172104)
    * [ST75256 JLX172104](#st75256-jlx172104)
    * [ST75256 JLX19296](#st75256-jlx19296)
    * [ST75256 JLX19296](#st75256-jlx19296)
    * [ST75320 JLX320240](#st75320-jlx320240)
    * [ST75320 JLX320240](#st75320-jlx320240)
    * [NT7534 TG12864R](#nt7534-tg12864r)
    * [IST3020 ERC19264](#ist3020-erc19264)
    * [IST7920 128X128](#ist7920-128x128)
    * [SBN1661 122X32](#sbn1661-122x32)
    * [SED1520 122X32](#sed1520-122x32)
    * [KS0108 128X64](#ks0108-128x64)
    * [KS0108 ERM19264](#ks0108-erm19264)
    * [LC7981 160X80](#lc7981-160x80)
    * [LC7981 160X160](#lc7981-160x160)
    * [LC7981 240X128](#lc7981-240x128)
    * [LC7981 240X64](#lc7981-240x64)
    * [T6963 240X128](#t6963-240x128)
    * [T6963 240X64](#t6963-240x64)
    * [T6963 256X64](#t6963-256x64)
    * [T6963 128X64](#t6963-128x64)
    * [T6963 128X64_ALT](#t6963-128x64_alt)
    * [T6963 160X80](#t6963-160x80)
    * [SSD1322 NHD_256X64](#ssd1322-nhd_256x64)
    * [SSD1322 NHD_128X64](#ssd1322-nhd_128x64)
    * [SSD1606 172X72](#ssd1606-172x72)
    * [SSD1607 200X200](#ssd1607-200x200)
    * [SSD1607 GD_200X200](#ssd1607-gd_200x200)
    * [SSD1607 WS_200X200](#ssd1607-ws_200x200)
    * [IL3820 296X128](#il3820-296x128)
    * [IL3820 V2_296X128](#il3820-v2_296x128)
    * [SED1330 240X128](#sed1330-240x128)
    * [RA8835 NHD_240X128](#ra8835-nhd_240x128)
    * [RA8835 320X240](#ra8835-320x240)
    * [MAX7219 64X8](#max7219-64x8)
    * [MAX7219 32X8](#max7219-32x8)
    * [MAX7219 8X8](#max7219-8x8)
    * [S1D15E06 160100](#s1d15e06-160100)
    * [A2PRINTER 384X240](#a2printer-384x240)
  * [Links](#links)

[tocend]: # (toc end)

# Introduction

To setup u8g2, use the correct constructor for your display.
The constructor name defines display type, controller, RAM buffer size and communication protocol.
If your display is not exactly available, try a constructor with the same display controller name.

The arguments of the constructor define the rotation of the display and how the display is connected to the Arduino board.
This is the "Hello World" example for the Arduino C++ interface:

```
#include <Arduino.h>
#include <SPI.h>
#include <U8g2lib.h>

/* Constructor */
U8G2_UC1701_DOGS102_1_4W_SW_SPI u8g2(U8G2_R0, /* clock=*/ 13, /* data=*/ 11, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);

/* u8g2.begin() is required and will sent the setup/init sequence to the display */
void setup(void) {
  u8g2.begin();
}

/* draw something on the display with the `firstPage()`/`nextPage()` loop*/
void loop(void) {
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_ncenB14_tr);
    u8g2.drawStr(0,20,"Hello World!");
  } while ( u8g2.nextPage() );
  delay(1000);
}
```

## Using dynamically allocated page buffers

When using dynamic memory allocation, the function *U8G2::begin() will be disabled.

For this reason, the `setup()` function must have the following in place of the *U8G2::begin() function:

```
uint8_t *buf;

void setup(void) {
  buf = (uint8_t *)malloc(u8g2.getBufferSize());
  u8g2.setBufferPtr(buf);
  u8g2.initDisplay();
  u8g2.clearDisplay();
  u8g2.setPowerSave(0);
}
```

Refer to the C setup documentation for further information.

## Constructor Name

The name of the Arduino C++ constructor has the following parts:

| No | Description | Example |
|---|---|---|
| 1 | Prefix | `U8G2` |
| 2 | Display Controller | `UC1701` |
| 3 | Display Name | `DOGS102` |
| 4 | Buffer Size | `1`, `2` or `F` (full frame buffer) |
| 5 | Communication | `4W_SW_SPI` |

These parts are connect with `_`. The full constructor name for the example will be `U8G2_UC1701_DOGS102_1_4W_SW_SPI`.
All available constructor names are listed in the [reference](#reference) section below.

## Buffer Size

| Communication | Description |
|---|---|
| Buffer | Description |
| `1` | Only one page of the display memory is stored in the microcontroller RAM. Use a [firstPage()](u8g2reference#firstpage)/[nextPage()](u8g2reference#nextpage) loop for drawing on the display. |
| `2` | Same as `1`, but maintains two pages in the microcontroller RAM. This will be up to two times faster than `1`. |
| `F` | Keep a copy of the full display frame buffer in the microcontroller RAM. Use  [clearBuffer()](u8g2reference#clearbuffer) to clear the RAM and [sendBuffer()](u8g2reference#sendbuffer) to transfer the microcontroller RAM to the display.  |

The full buffer `F` option can be used only, if there is sufficient RAM available in the microcontroller. Use option `1` or `2` on a microcontroller with a small amount of RAM. 
The [u8x8 API](u8x8setupcpp) can be used if there is not even RAM for one page.

## Communication

The communication protocol is part of the constructor name (see above).
The following communication protocols are supported:

| Communication | Description |
|---|---|
| `4W_SW_SPI` | 4-wire (clock, data, cs and dc) software emulated SPI |
| `4W_HW_SPI` | 4-wire (clock, data, cs and dc) hardware SPI (based on Arduino SPI library) |
| `2ND_4W_HW_SPI` | If supported, second 4-wire hardware SPI (based on Arduino SPI library) |
| `3W_SW_SPI` | 3-wire (clock, data and cs) software emulated SPI |
| `SW_I2C` | Software emulated I2C/TWI  |
| `HW_I2C` | Hardware I2C based on the Arduino Wire library |
| `2ND_HW_I2C` | If supported, use second hardware I2C (Arduino Wire lib)  |
| `6800` | 8-bit parallel interface, 6800 protocol |
| `8080` | 8-bit parallel interface, 8080 protocol |

The hardware I2C  allows pin remapping for some controller types. The optional
pin numbers are listed after the reset pin:
`..._HW_I2C([reset [, clock, data]])`.
Use `U8X8_PIN_NONE` if the reset input of the display is not connected.

This might be confusing, because the software emulated I2C constructor lists 
the required clock and data line before the reset pin:
`..._SW_I2C(clock,  data [,  reset])`


## Rotation

The software emulated display rotation is the first argument of the constructor.

| Rotation/Mirror | Description  |
|---|---|
| `U8G2_R0` | No rotation, landscape |
| `U8G2_R1` | 90 degree clockwise rotation |
| `U8G2_R2` | 180 degree clockwise rotation |
| `U8G2_R3` | 270 degree clockwise rotation |
| `U8G2_MIRROR` | No rotation, landscape, display content is mirrored (v2.6.x) |

If supported `U8G2_R2` is identical to `u8g2::setFlipMode(1)`.

## Wiring

| Pin Argument | Description | Datasheet Names |
|---|---|---|
| clock | SPI or I2C clock line | SCL, SCLK, ... |
| data | SPI or I2C data line | SDA, MOSI, SDIN, ... |
| d0 ... d7 | Data lines of the parallel interface | D0 ... D7 |
| cs | Chip select line | CS | 
| dc | Data/command selection line (register select) | D/C, A0, RS, ... |
| enable | "Write" for the 8080 interface, "enable" for the 6800 interface | 8080: WR, 6800: E |
| reset | Reset line | |

In some cases a pin is not required, although it is mentioned in the constructor. In this case, use `U8X8_PIN_NONE` instead of the Arduino pin number. Example: `cs` pin for the ST7920 8080 interface.

In the reference section below, optional pins are enclosed in "[" and "]". The "[" and "]" never appear in the constructor.
Example: The "reset" pin number can be skipped if the display has its own reset circuit.


## 16 Bit Mode

U8g2 is configured for 8 Bit mode by default. For any device with a pixel width
of 256 or higher, you must uncomment (remove the `//`) from the following line in `u8g2.h`:

```
//#define U8G2_16BIT
```

# Constructor Reference

## SSD1305 128X32_NONAME
Controller "ssd1305", Display "128x32_noname"  [Description]
 * U8G2_SSD1305_128X32_NONAME_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_NONAME_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_NONAME_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_NONAME_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_NONAME_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_NONAME_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_NONAME_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_NONAME_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_NONAME_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_NONAME_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_NONAME_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_NONAME_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_NONAME_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_NONAME_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_NONAME_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]

## SSD1305 128X32_ADAFRUIT
Controller "ssd1305", Display "128x32_adafruit"  [Description]
 * U8G2_SSD1305_128X32_ADAFRUIT_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]

## SSD1305 128X32_NONAME
Controller "ssd1305", Display "128x32_noname"  [Description]
 * U8G2_SSD1305_128X32_NONAME_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_NONAME_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_NONAME_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_NONAME_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_NONAME_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_NONAME_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_NONAME_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_NONAME_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_NONAME_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 512 bytes]

## SSD1305 128X32_ADAFRUIT
Controller "ssd1305", Display "128x32_adafruit"  [Description]
 * U8G2_SSD1305_128X32_ADAFRUIT_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X32_ADAFRUIT_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 512 bytes]

## SSD1305 128X64_ADAFRUIT
Controller "ssd1305", Display "128x64_adafruit"  [Description]
 * U8G2_SSD1305_128X64_ADAFRUIT_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1305 128X64_RAYSTAR
Controller "ssd1305", Display "128x64_raystar"  [Description]
 * U8G2_SSD1305_128X64_RAYSTAR_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1305 128X64_ADAFRUIT
Controller "ssd1305", Display "128x64_adafruit"  [Description]
 * U8G2_SSD1305_128X64_ADAFRUIT_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_ADAFRUIT_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD1305 128X64_RAYSTAR
Controller "ssd1305", Display "128x64_raystar"  [Description]
 * U8G2_SSD1305_128X64_RAYSTAR_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1305_128X64_RAYSTAR_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD1306 2040X16
Controller "ssd1306", Display "2040x16"  [Description]
 * U8G2_SSD1306_2040X16_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 2040 bytes]
 * U8G2_SSD1306_2040X16_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 2040 bytes]
 * U8G2_SSD1306_2040X16_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 2040 bytes]
 * U8G2_SSD1306_2040X16_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 2040 bytes]
 * U8G2_SSD1306_2040X16_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 2040 bytes]
 * U8G2_SSD1306_2040X16_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 2040 bytes]
 * U8G2_SSD1306_2040X16_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 2040 bytes]
 * U8G2_SSD1306_2040X16_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 4080 bytes]
 * U8G2_SSD1306_2040X16_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4080 bytes]

## SSD1306 128X64_NONAME
Controller "ssd1306", Display "128x64_noname"  [Description]
 * U8G2_SSD1306_128X64_NONAME_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_NONAME_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_NONAME_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_NONAME_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_NONAME_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_NONAME_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_VCOMH0
Controller "ssd1306", Display "128x64_vcomh0"  [Description]
 * U8G2_SSD1306_128X64_VCOMH0_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_ALT0
Controller "ssd1306", Display "128x64_alt0"  [Description]
 * U8G2_SSD1306_128X64_ALT0_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_ALT0_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_ALT0_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_ALT0_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_ALT0_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_ALT0_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_ALT0_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_NONAME
Controller "ssd1306", Display "128x64_noname"  [Description]
 * U8G2_SSD1306_128X64_NONAME_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_NONAME_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_NONAME_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_NONAME_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_NONAME_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_VCOMH0
Controller "ssd1306", Display "128x64_vcomh0"  [Description]
 * U8G2_SSD1306_128X64_VCOMH0_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_VCOMH0_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_ALT0
Controller "ssd1306", Display "128x64_alt0"  [Description]
 * U8G2_SSD1306_128X64_ALT0_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_ALT0_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1306_128X64_ALT0_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X64_ALT0_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X64_ALT0_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD1306 72X40_ER
Controller "ssd1306", Display "72x40_er"  [Description]
 * U8G2_SSD1306_72X40_ER_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SSD1306_72X40_ER_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SSD1306_72X40_ER_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SSD1306_72X40_ER_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SSD1306_72X40_ER_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SSD1306_72X40_ER_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SSD1306_72X40_ER_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 360 bytes]

## SSD1306 72X40_ER
Controller "ssd1306", Display "72x40_er"  [Description]
 * U8G2_SSD1306_72X40_ER_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SSD1306_72X40_ER_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 360 bytes]
 * U8G2_SSD1306_72X40_ER_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 72 bytes]
 * U8G2_SSD1306_72X40_ER_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 144 bytes]
 * U8G2_SSD1306_72X40_ER_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 360 bytes]

## SH1106 128X64_NONAME
Controller "sh1106", Display "128x64_noname"  [Description]
 * U8G2_SH1106_128X64_NONAME_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_NONAME_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_NONAME_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_NONAME_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_NONAME_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_NONAME_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_NONAME_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_VCOMH0
Controller "sh1106", Display "128x64_vcomh0"  [Description]
 * U8G2_SH1106_128X64_VCOMH0_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_VCOMH0_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_VCOMH0_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_VCOMH0_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_VCOMH0_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_VCOMH0_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_VCOMH0_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_WINSTAR
Controller "sh1106", Display "128x64_winstar"  [Description]
 * U8G2_SH1106_128X64_WINSTAR_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_WINSTAR_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_WINSTAR_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_WINSTAR_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_WINSTAR_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_WINSTAR_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_WINSTAR_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_NONAME
Controller "sh1106", Display "128x64_noname"  [Description]
 * U8G2_SH1106_128X64_NONAME_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_NONAME_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_NONAME_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_NONAME_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_NONAME_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_VCOMH0
Controller "sh1106", Display "128x64_vcomh0"  [Description]
 * U8G2_SH1106_128X64_VCOMH0_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_VCOMH0_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_VCOMH0_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_VCOMH0_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_VCOMH0_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_WINSTAR
Controller "sh1106", Display "128x64_winstar"  [Description]
 * U8G2_SH1106_128X64_WINSTAR_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_WINSTAR_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1106_128X64_WINSTAR_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X64_WINSTAR_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X64_WINSTAR_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SH1106 72X40_WISE
Controller "sh1106", Display "72x40_wise"  [Description]
 * U8G2_SH1106_72X40_WISE_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SH1106_72X40_WISE_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SH1106_72X40_WISE_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SH1106_72X40_WISE_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SH1106_72X40_WISE_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SH1106_72X40_WISE_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SH1106_72X40_WISE_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 360 bytes]

## SH1106 72X40_WISE
Controller "sh1106", Display "72x40_wise"  [Description]
 * U8G2_SH1106_72X40_WISE_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 360 bytes]
 * U8G2_SH1106_72X40_WISE_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 360 bytes]
 * U8G2_SH1106_72X40_WISE_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 72 bytes]
 * U8G2_SH1106_72X40_WISE_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 144 bytes]
 * U8G2_SH1106_72X40_WISE_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 360 bytes]

## SH1106 64X32
Controller "sh1106", Display "64x32"  [Description]
 * U8G2_SH1106_64X32_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SH1106_64X32_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SH1106_64X32_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SH1106_64X32_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SH1106_64X32_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SH1106_64X32_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SH1106_64X32_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]

## SH1106 64X32
Controller "sh1106", Display "64x32"  [Description]
 * U8G2_SH1106_64X32_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SH1106_64X32_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 256 bytes]
 * U8G2_SH1106_64X32_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1106_64X32_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_64X32_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 256 bytes]

## SH1107 64X128
Controller "sh1107", Display "64x128"  [Description]
 * U8G2_SH1107_64X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1107_64X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1107_64X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1107_64X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1107_64X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1107_64X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1107_64X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SH1107 64X128
Controller "sh1107", Display "64x128"  [Description]
 * U8G2_SH1107_64X128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1107_64X128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SH1107_64X128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 64 bytes]
 * U8G2_SH1107_64X128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_64X128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SH1107 SEEED_96X96
Controller "sh1107", Display "seeed_96x96"  [Description]
 * U8G2_SH1107_SEEED_96X96_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SH1107_SEEED_96X96_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SH1107_SEEED_96X96_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SH1107_SEEED_96X96_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SH1107_SEEED_96X96_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SH1107_SEEED_96X96_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SH1107_SEEED_96X96_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]

## SH1107 SEEED_96X96
Controller "sh1107", Display "seeed_96x96"  [Description]
 * U8G2_SH1107_SEEED_96X96_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SH1107_SEEED_96X96_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1152 bytes]
 * U8G2_SH1107_SEEED_96X96_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 96 bytes]
 * U8G2_SH1107_SEEED_96X96_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 192 bytes]
 * U8G2_SH1107_SEEED_96X96_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1152 bytes]

## SH1107 128X128
Controller "sh1107", Display "128x128"  [Description]
 * U8G2_SH1107_128X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_128X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_128X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_128X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_128X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_128X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_128X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## SH1107 PIMORONI_128X128
Controller "sh1107", Display "pimoroni_128x128"  [Description]
 * U8G2_SH1107_PIMORONI_128X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_PIMORONI_128X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_PIMORONI_128X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_PIMORONI_128X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_PIMORONI_128X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_PIMORONI_128X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_PIMORONI_128X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## SH1107 SEEED_128X128
Controller "sh1107", Display "seeed_128x128"  [Description]
 * U8G2_SH1107_SEEED_128X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_SEEED_128X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_SEEED_128X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_SEEED_128X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_SEEED_128X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_SEEED_128X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_SEEED_128X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## SH1107 128X128
Controller "sh1107", Display "128x128"  [Description]
 * U8G2_SH1107_128X128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_128X128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_128X128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_128X128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_128X128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## SH1107 PIMORONI_128X128
Controller "sh1107", Display "pimoroni_128x128"  [Description]
 * U8G2_SH1107_PIMORONI_128X128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_PIMORONI_128X128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_PIMORONI_128X128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_PIMORONI_128X128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_PIMORONI_128X128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## SH1107 SEEED_128X128
Controller "sh1107", Display "seeed_128x128"  [Description]
 * U8G2_SH1107_SEEED_128X128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_SEEED_128X128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1107_SEEED_128X128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1107_SEEED_128X128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1107_SEEED_128X128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## SH1108 160X160
Controller "sh1108", Display "160x160"  [Description]
 * U8G2_SH1108_160X160_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_SH1108_160X160_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_SH1108_160X160_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_SH1108_160X160_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_SH1108_160X160_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_SH1108_160X160_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_SH1108_160X160_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]

## SH1108 160X160
Controller "sh1108", Display "160x160"  [Description]
 * U8G2_SH1108_160X160_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_SH1108_160X160_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 3200 bytes]
 * U8G2_SH1108_160X160_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 160 bytes]
 * U8G2_SH1108_160X160_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 320 bytes]
 * U8G2_SH1108_160X160_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 3200 bytes]

## SH1122 256X64
Controller "sh1122", Display "256x64"  [Description]
 * U8G2_SH1122_256X64_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1122_256X64_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1122_256X64_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1122_256X64_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1122_256X64_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1122_256X64_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1122_256X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## SH1122 256X64
Controller "sh1122", Display "256x64"  [Description]
 * U8G2_SH1122_256X64_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1122_256X64_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_SH1122_256X64_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1122_256X64_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 512 bytes]
 * U8G2_SH1122_256X64_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## SSD1306 128X32_UNIVISION
Controller "ssd1306", Display "128x32_univision"  [Description]
 * U8G2_SSD1306_128X32_UNIVISION_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]

## SSD1306 128X32_WINSTAR
Controller "ssd1306", Display "128x32_winstar"  [Description]
 * U8G2_SSD1306_128X32_WINSTAR_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]

## SSD1306 128X32_UNIVISION
Controller "ssd1306", Display "128x32_univision"  [Description]
 * U8G2_SSD1306_128X32_UNIVISION_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_UNIVISION_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 512 bytes]

## SSD1306 128X32_WINSTAR
Controller "ssd1306", Display "128x32_winstar"  [Description]
 * U8G2_SSD1306_128X32_WINSTAR_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1306_128X32_WINSTAR_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 512 bytes]

## SH1106 128X32_VISIONOX
Controller "sh1106", Display "128x32_visionox"  [Description]
 * U8G2_SH1106_128X32_VISIONOX_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SH1106_128X32_VISIONOX_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SH1106_128X32_VISIONOX_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SH1106_128X32_VISIONOX_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SH1106_128X32_VISIONOX_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SH1106_128X32_VISIONOX_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SH1106_128X32_VISIONOX_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]

## SH1106 128X32_VISIONOX
Controller "sh1106", Display "128x32_visionox"  [Description]
 * U8G2_SH1106_128X32_VISIONOX_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SH1106_128X32_VISIONOX_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 512 bytes]
 * U8G2_SH1106_128X32_VISIONOX_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SH1106_128X32_VISIONOX_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SH1106_128X32_VISIONOX_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 512 bytes]

## SSD1306 64X48_ER
Controller "ssd1306", Display "64x48_er"  [Description]
 * U8G2_SSD1306_64X48_ER_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_64X48_ER_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_64X48_ER_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_64X48_ER_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_64X48_ER_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_64X48_ER_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_64X48_ER_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 384 bytes]

## SSD1306 64X48_ER
Controller "ssd1306", Display "64x48_er"  [Description]
 * U8G2_SSD1306_64X48_ER_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_64X48_ER_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_64X48_ER_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X48_ER_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X48_ER_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 384 bytes]

## SSD1306 48X64_WINSTAR
Controller "ssd1306", Display "48x64_winstar"  [Description]
 * U8G2_SSD1306_48X64_WINSTAR_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 384 bytes]

## SSD1306 48X64_WINSTAR
Controller "ssd1306", Display "48x64_winstar"  [Description]
 * U8G2_SSD1306_48X64_WINSTAR_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 384 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 48 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_48X64_WINSTAR_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 384 bytes]

## SSD1306 64X32_NONAME
Controller "ssd1306", Display "64x32_noname"  [Description]
 * U8G2_SSD1306_64X32_NONAME_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_NONAME_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_NONAME_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_NONAME_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_NONAME_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_NONAME_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_NONAME_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]

## SSD1306 64X32_1F
Controller "ssd1306", Display "64x32_1f"  [Description]
 * U8G2_SSD1306_64X32_1F_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_1F_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_1F_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_1F_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_1F_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_1F_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_1F_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]

## SSD1306 64X32_NONAME
Controller "ssd1306", Display "64x32_noname"  [Description]
 * U8G2_SSD1306_64X32_NONAME_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_NONAME_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_NONAME_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_NONAME_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_NONAME_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 256 bytes]

## SSD1306 64X32_1F
Controller "ssd1306", Display "64x32_1f"  [Description]
 * U8G2_SSD1306_64X32_1F_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_1F_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 256 bytes]
 * U8G2_SSD1306_64X32_1F_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 64 bytes]
 * U8G2_SSD1306_64X32_1F_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1306_64X32_1F_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 256 bytes]

## SSD1306 96X16_ER
Controller "ssd1306", Display "96x16_er"  [Description]
 * U8G2_SSD1306_96X16_ER_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 192 bytes]

## SSD1306 96X16_ER
Controller "ssd1306", Display "96x16_er"  [Description]
 * U8G2_SSD1306_96X16_ER_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1306_96X16_ER_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1306_96X16_ER_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 192 bytes]

## SSD1309 128X64_NONAME2
Controller "ssd1309", Display "128x64_noname2"  [Description]
 * U8G2_SSD1309_128X64_NONAME2_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME2_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME2_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME2_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME2_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME2_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME2_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME2_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME2_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME2_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME2_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME2_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME2_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME2_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME2_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1309 128X64_NONAME2
Controller "ssd1309", Display "128x64_noname2"  [Description]
 * U8G2_SSD1309_128X64_NONAME2_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME2_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME2_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME2_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME2_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME2_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME2_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME2_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME2_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD1309 128X64_NONAME0
Controller "ssd1309", Display "128x64_noname0"  [Description]
 * U8G2_SSD1309_128X64_NONAME0_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME0_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME0_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME0_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME0_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME0_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME0_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME0_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME0_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME0_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME0_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME0_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME0_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME0_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME0_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1309 128X64_NONAME0
Controller "ssd1309", Display "128x64_noname0"  [Description]
 * U8G2_SSD1309_128X64_NONAME0_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME0_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME0_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME0_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME0_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME0_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1309_128X64_NONAME0_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1309_128X64_NONAME0_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1309_128X64_NONAME0_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD1316 128X32
Controller "ssd1316", Display "128x32"  [Description]
 * U8G2_SSD1316_128X32_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1316_128X32_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1316_128X32_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1316_128X32_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1316_128X32_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1316_128X32_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1316_128X32_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1316_128X32_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1316_128X32_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1316_128X32_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1316_128X32_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1316_128X32_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1316_128X32_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1316_128X32_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1316_128X32_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]

## SSD1316 128X32
Controller "ssd1316", Display "128x32"  [Description]
 * U8G2_SSD1316_128X32_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1316_128X32_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1316_128X32_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1316_128X32_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1316_128X32_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1316_128X32_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 512 bytes]
 * U8G2_SSD1316_128X32_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1316_128X32_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1316_128X32_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 512 bytes]

## SSD1317 96X96
Controller "ssd1317", Display "96x96"  [Description]
 * U8G2_SSD1317_96X96_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1317_96X96_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1317_96X96_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1317_96X96_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1317_96X96_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1317_96X96_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1317_96X96_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1317_96X96_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1317_96X96_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1317_96X96_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1317_96X96_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1317_96X96_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1317_96X96_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1317_96X96_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1317_96X96_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]

## SSD1317 96X96
Controller "ssd1317", Display "96x96"  [Description]
 * U8G2_SSD1317_96X96_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1317_96X96_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1317_96X96_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1317_96X96_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 96 bytes]
 * U8G2_SSD1317_96X96_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 192 bytes]
 * U8G2_SSD1317_96X96_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1317_96X96_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1317_96X96_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1317_96X96_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1152 bytes]

## SSD1318 128X96
Controller "ssd1318", Display "128x96"  [Description]
 * U8G2_SSD1318_128X96_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]

## SSD1318 128X96_XCP
Controller "ssd1318", Display "128x96_xcp"  [Description]
 * U8G2_SSD1318_128X96_XCP_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_XCP_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_XCP_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_XCP_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_XCP_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_XCP_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_XCP_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]

## SSD1318 128X96
Controller "ssd1318", Display "128x96"  [Description]
 * U8G2_SSD1318_128X96_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1536 bytes]

## SSD1318 128X96_XCP
Controller "ssd1318", Display "128x96_xcp"  [Description]
 * U8G2_SSD1318_128X96_XCP_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_XCP_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1318_128X96_XCP_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1318_128X96_XCP_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1318_128X96_XCP_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1536 bytes]

## SSD1325 NHD_128X64
Controller "ssd1325", Display "nhd_128x64"  [Description]
 * U8G2_SSD1325_NHD_128X64_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1325_NHD_128X64_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1325_NHD_128X64_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1325_NHD_128X64_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1325_NHD_128X64_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1325_NHD_128X64_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1325_NHD_128X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1325 NHD_128X64
Controller "ssd1325", Display "nhd_128x64"  [Description]
 * U8G2_SSD1325_NHD_128X64_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1325_NHD_128X64_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1325_NHD_128X64_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1325_NHD_128X64_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1325_NHD_128X64_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD0323 OS128064
Controller "ssd0323", Display "os128064"  [Description]
 * U8G2_SSD0323_OS128064_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD0323_OS128064_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD0323_OS128064_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD0323_OS128064_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD0323_OS128064_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD0323_OS128064_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD0323_OS128064_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD0323 OS128064
Controller "ssd0323", Display "os128064"  [Description]
 * U8G2_SSD0323_OS128064_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD0323_OS128064_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD0323_OS128064_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD0323_OS128064_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD0323_OS128064_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD1326 ER_256X32
Controller "ssd1326", Display "er_256x32"  [Description]
 * U8G2_SSD1326_ER_256X32_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1326_ER_256X32_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1326_ER_256X32_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1326_ER_256X32_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1326_ER_256X32_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1326_ER_256X32_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1326_ER_256X32_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1326 ER_256X32
Controller "ssd1326", Display "er_256x32"  [Description]
 * U8G2_SSD1326_ER_256X32_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1326_ER_256X32_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1326_ER_256X32_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1326_ER_256X32_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1326_ER_256X32_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## SSD1327 WS_96X64
Controller "ssd1327", Display "ws_96x64"  [Description]
 * U8G2_SSD1327_WS_96X64_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 768 bytes]
 * U8G2_SSD1327_WS_96X64_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 768 bytes]
 * U8G2_SSD1327_WS_96X64_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 768 bytes]
 * U8G2_SSD1327_WS_96X64_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 768 bytes]
 * U8G2_SSD1327_WS_96X64_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 768 bytes]
 * U8G2_SSD1327_WS_96X64_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 768 bytes]
 * U8G2_SSD1327_WS_96X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 768 bytes]

## SSD1327 WS_96X64
Controller "ssd1327", Display "ws_96x64"  [Description]
 * U8G2_SSD1327_WS_96X64_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 768 bytes]
 * U8G2_SSD1327_WS_96X64_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 768 bytes]
 * U8G2_SSD1327_WS_96X64_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_WS_96X64_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_WS_96X64_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 768 bytes]

## SSD1327 SEEED_96X96
Controller "ssd1327", Display "seeed_96x96"  [Description]
 * U8G2_SSD1327_SEEED_96X96_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1327_SEEED_96X96_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1327_SEEED_96X96_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1327_SEEED_96X96_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1327_SEEED_96X96_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1327_SEEED_96X96_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1327_SEEED_96X96_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1152 bytes]

## SSD1327 SEEED_96X96
Controller "ssd1327", Display "seeed_96x96"  [Description]
 * U8G2_SSD1327_SEEED_96X96_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1327_SEEED_96X96_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1152 bytes]
 * U8G2_SSD1327_SEEED_96X96_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 96 bytes]
 * U8G2_SSD1327_SEEED_96X96_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 192 bytes]
 * U8G2_SSD1327_SEEED_96X96_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1152 bytes]

## SSD1327 EA_W128128
Controller "ssd1327", Display "ea_w128128"  [Description]
 * U8G2_SSD1327_EA_W128128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_EA_W128128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_EA_W128128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_EA_W128128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_EA_W128128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_EA_W128128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_EA_W128128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## SSD1327 MIDAS_128X128
Controller "ssd1327", Display "midas_128x128"  [Description]
 * U8G2_SSD1327_MIDAS_128X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_MIDAS_128X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_MIDAS_128X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_MIDAS_128X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_MIDAS_128X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_MIDAS_128X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_MIDAS_128X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## SSD1327 WS_128X128
Controller "ssd1327", Display "ws_128x128"  [Description]
 * U8G2_SSD1327_WS_128X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_WS_128X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_WS_128X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_WS_128X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_WS_128X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_WS_128X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_WS_128X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## SSD1327 EA_W128128
Controller "ssd1327", Display "ea_w128128"  [Description]
 * U8G2_SSD1327_EA_W128128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_EA_W128128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_EA_W128128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_EA_W128128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_EA_W128128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## SSD1327 MIDAS_128X128
Controller "ssd1327", Display "midas_128x128"  [Description]
 * U8G2_SSD1327_MIDAS_128X128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_MIDAS_128X128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_MIDAS_128X128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_MIDAS_128X128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_MIDAS_128X128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## SSD1327 WS_128X128
Controller "ssd1327", Display "ws_128x128"  [Description]
 * U8G2_SSD1327_WS_128X128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_WS_128X128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1327_WS_128X128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_WS_128X128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_WS_128X128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## SSD1327 VISIONOX_128X96
Controller "ssd1327", Display "visionox_128x96"  [Description]
 * U8G2_SSD1327_VISIONOX_128X96_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]

## SSD1327 VISIONOX_128X96
Controller "ssd1327", Display "visionox_128x96"  [Description]
 * U8G2_SSD1327_VISIONOX_128X96_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1327_VISIONOX_128X96_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1536 bytes]

## SSD1329 128X96_NONAME
Controller "ssd1329", Display "128x96_noname"  [Description]
 * U8G2_SSD1329_128X96_NONAME_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1329_128X96_NONAME_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1329_128X96_NONAME_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1329_128X96_NONAME_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1329_128X96_NONAME_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1329_128X96_NONAME_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1329_128X96_NONAME_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1329_128X96_NONAME_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1329_128X96_NONAME_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1329_128X96_NONAME_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1329_128X96_NONAME_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1329_128X96_NONAME_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_SSD1329_128X96_NONAME_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1329_128X96_NONAME_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1329_128X96_NONAME_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]

## LD7032 60X32
Controller "ld7032", Display "60x32"  [Description]
 * U8G2_LD7032_60X32_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_LD7032_60X32_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_LD7032_60X32_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]

## LD7032 60X32_ALT
Controller "ld7032", Display "60x32_alt"  [Description]
 * U8G2_LD7032_60X32_ALT_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_ALT_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_ALT_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_LD7032_60X32_ALT_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_ALT_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_ALT_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_LD7032_60X32_ALT_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_ALT_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_ALT_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]

## LD7032 60X32
Controller "ld7032", Display "60x32"  [Description]
 * U8G2_LD7032_60X32_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 256 bytes]
 * U8G2_LD7032_60X32_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 256 bytes]
 * U8G2_LD7032_60X32_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 256 bytes]

## LD7032 60X32_ALT
Controller "ld7032", Display "60x32_alt"  [Description]
 * U8G2_LD7032_60X32_ALT_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_ALT_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_ALT_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 256 bytes]
 * U8G2_LD7032_60X32_ALT_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_ALT_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_ALT_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 256 bytes]
 * U8G2_LD7032_60X32_ALT_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 64 bytes]
 * U8G2_LD7032_60X32_ALT_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_LD7032_60X32_ALT_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 256 bytes]

## ST7920 192X32
Controller "st7920", Display "192x32"  [Description]
 * U8G2_ST7920_192X32_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST7920_192X32_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST7920_192X32_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 768 bytes]

## ST7920 192X32
Controller "st7920", Display "192x32"  [Description]
 * U8G2_ST7920_192X32_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST7920_192X32_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST7920_192X32_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 768 bytes]

## ST7920 192X32
Controller "st7920", Display "192x32"  [Description]
 * U8G2_ST7920_192X32_1_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST7920_192X32_2_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST7920_192X32_F_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 768 bytes]
 * U8G2_ST7920_192X32_1_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST7920_192X32_2_HW_SPI(rotation, cs [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST7920_192X32_F_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 768 bytes]
 * U8G2_ST7920_192X32_1_2ND_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST7920_192X32_2_2ND_HW_SPI(rotation, cs [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST7920_192X32_F_2ND_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 768 bytes]

## ST7920 128X64
Controller "st7920", Display "128x64"  [Description]
 * U8G2_ST7920_128X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7920_128X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7920_128X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7920 128X64
Controller "st7920", Display "128x64"  [Description]
 * U8G2_ST7920_128X64_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7920_128X64_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7920_128X64_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7920 128X64
Controller "st7920", Display "128x64"  [Description]
 * U8G2_ST7920_128X64_1_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7920_128X64_2_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7920_128X64_F_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7920_128X64_1_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7920_128X64_2_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7920_128X64_F_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7920_128X64_1_2ND_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7920_128X64_2_2ND_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7920_128X64_F_2ND_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]

## LS013B7DH03 128X128
Controller "ls013b7dh03", Display "128x128"  [Description]
 * U8G2_LS013B7DH03_128X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_LS013B7DH03_128X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_LS013B7DH03_128X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_LS013B7DH03_128X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_LS013B7DH03_128X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_LS013B7DH03_128X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_LS013B7DH03_128X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_LS013B7DH03_128X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_LS013B7DH03_128X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## LS027B7DH01 400X240
Controller "ls027b7dh01", Display "400x240"  [Description]
 * U8G2_LS027B7DH01_400X240_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_LS027B7DH01_400X240_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 800 bytes]
 * U8G2_LS027B7DH01_400X240_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 12000 bytes]
 * U8G2_LS027B7DH01_400X240_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_LS027B7DH01_400X240_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 800 bytes]
 * U8G2_LS027B7DH01_400X240_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 12000 bytes]
 * U8G2_LS027B7DH01_400X240_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_LS027B7DH01_400X240_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 800 bytes]
 * U8G2_LS027B7DH01_400X240_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 12000 bytes]

## LS027B7DH01 M0_400X240
Controller "ls027b7dh01", Display "m0_400x240"  [Description]
 * U8G2_LS027B7DH01_M0_400X240_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_LS027B7DH01_M0_400X240_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 800 bytes]
 * U8G2_LS027B7DH01_M0_400X240_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 12000 bytes]
 * U8G2_LS027B7DH01_M0_400X240_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_LS027B7DH01_M0_400X240_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 800 bytes]
 * U8G2_LS027B7DH01_M0_400X240_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 12000 bytes]
 * U8G2_LS027B7DH01_M0_400X240_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_LS027B7DH01_M0_400X240_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 800 bytes]
 * U8G2_LS027B7DH01_M0_400X240_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 12000 bytes]

## LS013B7DH05 144X168
Controller "ls013b7dh05", Display "144x168"  [Description]
 * U8G2_LS013B7DH05_144X168_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_LS013B7DH05_144X168_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 288 bytes]
 * U8G2_LS013B7DH05_144X168_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 3024 bytes]
 * U8G2_LS013B7DH05_144X168_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_LS013B7DH05_144X168_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 288 bytes]
 * U8G2_LS013B7DH05_144X168_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3024 bytes]
 * U8G2_LS013B7DH05_144X168_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 144 bytes]
 * U8G2_LS013B7DH05_144X168_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 288 bytes]
 * U8G2_LS013B7DH05_144X168_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3024 bytes]

## UC1701 EA_DOGS102
Controller "uc1701", Display "ea_dogs102"  [Description]
 * U8G2_UC1701_EA_DOGS102_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 104 bytes]
 * U8G2_UC1701_EA_DOGS102_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 208 bytes]
 * U8G2_UC1701_EA_DOGS102_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 832 bytes]
 * U8G2_UC1701_EA_DOGS102_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 104 bytes]
 * U8G2_UC1701_EA_DOGS102_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 208 bytes]
 * U8G2_UC1701_EA_DOGS102_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 832 bytes]
 * U8G2_UC1701_EA_DOGS102_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 104 bytes]
 * U8G2_UC1701_EA_DOGS102_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 208 bytes]
 * U8G2_UC1701_EA_DOGS102_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 832 bytes]
 * U8G2_UC1701_EA_DOGS102_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 104 bytes]
 * U8G2_UC1701_EA_DOGS102_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 208 bytes]
 * U8G2_UC1701_EA_DOGS102_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 832 bytes]
 * U8G2_UC1701_EA_DOGS102_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 104 bytes]
 * U8G2_UC1701_EA_DOGS102_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 208 bytes]
 * U8G2_UC1701_EA_DOGS102_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 832 bytes]
 * U8G2_UC1701_EA_DOGS102_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 104 bytes]
 * U8G2_UC1701_EA_DOGS102_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 208 bytes]
 * U8G2_UC1701_EA_DOGS102_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 832 bytes]
 * U8G2_UC1701_EA_DOGS102_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 104 bytes]
 * U8G2_UC1701_EA_DOGS102_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 208 bytes]
 * U8G2_UC1701_EA_DOGS102_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 832 bytes]

## UC1701 MINI12864
Controller "uc1701", Display "mini12864"  [Description]
 * U8G2_UC1701_MINI12864_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1701_MINI12864_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1701_MINI12864_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_UC1701_MINI12864_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1701_MINI12864_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1701_MINI12864_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_UC1701_MINI12864_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1701_MINI12864_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1701_MINI12864_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_UC1701_MINI12864_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1701_MINI12864_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1701_MINI12864_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_UC1701_MINI12864_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1701_MINI12864_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1701_MINI12864_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_UC1701_MINI12864_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1701_MINI12864_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1701_MINI12864_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_UC1701_MINI12864_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1701_MINI12864_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1701_MINI12864_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## PCD8544 84X48
Controller "pcd8544", Display "84x48"  [Description]
 * U8G2_PCD8544_84X48_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 88 bytes]
 * U8G2_PCD8544_84X48_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_PCD8544_84X48_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 528 bytes]
 * U8G2_PCD8544_84X48_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 88 bytes]
 * U8G2_PCD8544_84X48_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_PCD8544_84X48_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 528 bytes]
 * U8G2_PCD8544_84X48_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 88 bytes]
 * U8G2_PCD8544_84X48_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_PCD8544_84X48_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 528 bytes]
 * U8G2_PCD8544_84X48_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 88 bytes]
 * U8G2_PCD8544_84X48_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 176 bytes]
 * U8G2_PCD8544_84X48_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 528 bytes]
 * U8G2_PCD8544_84X48_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 88 bytes]
 * U8G2_PCD8544_84X48_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 176 bytes]
 * U8G2_PCD8544_84X48_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 528 bytes]

## PCF8812 96X65
Controller "pcf8812", Display "96x65"  [Description]
 * U8G2_PCF8812_96X65_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_PCF8812_96X65_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_PCF8812_96X65_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 864 bytes]
 * U8G2_PCF8812_96X65_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_PCF8812_96X65_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_PCF8812_96X65_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 864 bytes]
 * U8G2_PCF8812_96X65_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_PCF8812_96X65_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_PCF8812_96X65_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 864 bytes]
 * U8G2_PCF8812_96X65_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_PCF8812_96X65_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_PCF8812_96X65_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 864 bytes]
 * U8G2_PCF8812_96X65_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_PCF8812_96X65_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_PCF8812_96X65_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 864 bytes]

## HX1230 96X68
Controller "hx1230", Display "96x68"  [Description]
 * U8G2_HX1230_96X68_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_HX1230_96X68_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_HX1230_96X68_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 864 bytes]
 * U8G2_HX1230_96X68_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_HX1230_96X68_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_HX1230_96X68_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 864 bytes]
 * U8G2_HX1230_96X68_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 96 bytes]
 * U8G2_HX1230_96X68_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_HX1230_96X68_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 864 bytes]
 * U8G2_HX1230_96X68_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_HX1230_96X68_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_HX1230_96X68_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 864 bytes]
 * U8G2_HX1230_96X68_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 96 bytes]
 * U8G2_HX1230_96X68_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_HX1230_96X68_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 864 bytes]

## UC1604 JLX19264
Controller "uc1604", Display "jlx19264"  [Description]
 * U8G2_UC1604_JLX19264_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_UC1604_JLX19264_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_UC1604_JLX19264_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_UC1604_JLX19264_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_UC1604_JLX19264_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_UC1604_JLX19264_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_UC1604_JLX19264_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]

## UC1604 JLX19264
Controller "uc1604", Display "jlx19264"  [Description]
 * U8G2_UC1604_JLX19264_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_UC1604_JLX19264_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1536 bytes]
 * U8G2_UC1604_JLX19264_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 192 bytes]
 * U8G2_UC1604_JLX19264_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 384 bytes]
 * U8G2_UC1604_JLX19264_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1536 bytes]

## UC1608 ERC24064
Controller "uc1608", Display "erc24064"  [Description]
 * U8G2_UC1608_ERC24064_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_ERC24064_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_ERC24064_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_ERC24064_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_ERC24064_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_ERC24064_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_ERC24064_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]

## UC1608 DEM240064
Controller "uc1608", Display "dem240064"  [Description]
 * U8G2_UC1608_DEM240064_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_DEM240064_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_DEM240064_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_DEM240064_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_DEM240064_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_DEM240064_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_DEM240064_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]

## UC1608 ERC24064
Controller "uc1608", Display "erc24064"  [Description]
 * U8G2_UC1608_ERC24064_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_ERC24064_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_ERC24064_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC24064_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC24064_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1920 bytes]

## UC1608 DEM240064
Controller "uc1608", Display "dem240064"  [Description]
 * U8G2_UC1608_DEM240064_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_DEM240064_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1608_DEM240064_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_DEM240064_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_DEM240064_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1920 bytes]

## UC1608 ERC240120
Controller "uc1608", Display "erc240120"  [Description]
 * U8G2_UC1608_ERC240120_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 3600 bytes]
 * U8G2_UC1608_ERC240120_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3600 bytes]
 * U8G2_UC1608_ERC240120_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3600 bytes]
 * U8G2_UC1608_ERC240120_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 3600 bytes]
 * U8G2_UC1608_ERC240120_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 3600 bytes]
 * U8G2_UC1608_ERC240120_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3600 bytes]
 * U8G2_UC1608_ERC240120_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3600 bytes]

## UC1608 ERC240120
Controller "uc1608", Display "erc240120"  [Description]
 * U8G2_UC1608_ERC240120_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 3600 bytes]
 * U8G2_UC1608_ERC240120_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 3600 bytes]
 * U8G2_UC1608_ERC240120_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_ERC240120_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_ERC240120_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 3600 bytes]

## UC1608 240X128
Controller "uc1608", Display "240x128"  [Description]
 * U8G2_UC1608_240X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1608_240X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1608_240X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1608_240X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1608_240X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1608_240X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1608_240X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]

## UC1608 240X128
Controller "uc1608", Display "240x128"  [Description]
 * U8G2_UC1608_240X128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1608_240X128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1608_240X128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1608_240X128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1608_240X128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 3840 bytes]

## UC1638 160X128
Controller "uc1638", Display "160x128"  [Description]
 * U8G2_UC1638_160X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1638_160X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1638_160X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2560 bytes]
 * U8G2_UC1638_160X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1638_160X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1638_160X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2560 bytes]
 * U8G2_UC1638_160X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1638_160X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1638_160X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2560 bytes]
 * U8G2_UC1638_160X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1638_160X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1638_160X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2560 bytes]
 * U8G2_UC1638_160X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1638_160X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1638_160X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2560 bytes]
 * U8G2_UC1638_160X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1638_160X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1638_160X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2560 bytes]
 * U8G2_UC1638_160X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1638_160X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1638_160X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2560 bytes]

## UC1610 EA_DOGXL160
Controller "uc1610", Display "ea_dogxl160"  [Description]
 * U8G2_UC1610_EA_DOGXL160_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_UC1610_EA_DOGXL160_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_UC1610_EA_DOGXL160_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_UC1610_EA_DOGXL160_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_UC1610_EA_DOGXL160_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_UC1610_EA_DOGXL160_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_UC1610_EA_DOGXL160_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]

## UC1610 EA_DOGXL160
Controller "uc1610", Display "ea_dogxl160"  [Description]
 * U8G2_UC1610_EA_DOGXL160_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_UC1610_EA_DOGXL160_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2080 bytes]
 * U8G2_UC1610_EA_DOGXL160_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1610_EA_DOGXL160_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1610_EA_DOGXL160_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2080 bytes]

## UC1611 EA_DOGM240
Controller "uc1611", Display "ea_dogm240"  [Description]
 * U8G2_UC1611_EA_DOGM240_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1611_EA_DOGM240_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1611_EA_DOGM240_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1611_EA_DOGM240_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1611_EA_DOGM240_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1611_EA_DOGM240_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1611_EA_DOGM240_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]

## UC1611 EA_DOGM240
Controller "uc1611", Display "ea_dogm240"  [Description]
 * U8G2_UC1611_EA_DOGM240_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1611_EA_DOGM240_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1920 bytes]
 * U8G2_UC1611_EA_DOGM240_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGM240_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGM240_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1920 bytes]

## UC1611 EA_DOGXL240
Controller "uc1611", Display "ea_dogxl240"  [Description]
 * U8G2_UC1611_EA_DOGXL240_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1611_EA_DOGXL240_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1611_EA_DOGXL240_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1611_EA_DOGXL240_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1611_EA_DOGXL240_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1611_EA_DOGXL240_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1611_EA_DOGXL240_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]

## UC1611 EA_DOGXL240
Controller "uc1611", Display "ea_dogxl240"  [Description]
 * U8G2_UC1611_EA_DOGXL240_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1611_EA_DOGXL240_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 3840 bytes]
 * U8G2_UC1611_EA_DOGXL240_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EA_DOGXL240_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EA_DOGXL240_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 3840 bytes]

## UC1611 EW50850
Controller "uc1611", Display "ew50850"  [Description]
 * U8G2_UC1611_EW50850_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_UC1611_EW50850_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_UC1611_EW50850_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_UC1611_EW50850_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_UC1611_EW50850_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_UC1611_EW50850_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_UC1611_EW50850_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]

## UC1611 EW50850
Controller "uc1611", Display "ew50850"  [Description]
 * U8G2_UC1611_EW50850_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_UC1611_EW50850_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 4800 bytes]
 * U8G2_UC1611_EW50850_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 240 bytes]
 * U8G2_UC1611_EW50850_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 480 bytes]
 * U8G2_UC1611_EW50850_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 4800 bytes]

## UC1611 CG160160
Controller "uc1611", Display "cg160160"  [Description]
 * U8G2_UC1611_CG160160_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_UC1611_CG160160_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_UC1611_CG160160_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_UC1611_CG160160_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_UC1611_CG160160_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_UC1611_CG160160_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_UC1611_CG160160_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]

## UC1611 CG160160
Controller "uc1611", Display "cg160160"  [Description]
 * U8G2_UC1611_CG160160_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 3200 bytes]
 * U8G2_UC1611_CG160160_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 3200 bytes]
 * U8G2_UC1611_CG160160_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 160 bytes]
 * U8G2_UC1611_CG160160_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 320 bytes]
 * U8G2_UC1611_CG160160_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 3200 bytes]

## UC1611 IDS4073
Controller "uc1611", Display "ids4073"  [Description]
 * U8G2_UC1611_IDS4073_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_UC1611_IDS4073_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_UC1611_IDS4073_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_UC1611_IDS4073_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_UC1611_IDS4073_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_UC1611_IDS4073_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_UC1611_IDS4073_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]

## UC1611 IDS4073
Controller "uc1611", Display "ids4073"  [Description]
 * U8G2_UC1611_IDS4073_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_UC1611_IDS4073_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 4096 bytes]
 * U8G2_UC1611_IDS4073_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1611_IDS4073_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 512 bytes]
 * U8G2_UC1611_IDS4073_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 4096 bytes]

## ST7511 AVD_320X240
Controller "st7511", Display "avd_320x240"  [Description]
 * U8G2_ST7511_AVD_320X240_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7511_AVD_320X240_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST7511_AVD_320X240_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST7511_AVD_320X240_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7511_AVD_320X240_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST7511_AVD_320X240_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST7511_AVD_320X240_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7511_AVD_320X240_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST7511_AVD_320X240_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST7511_AVD_320X240_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7511_AVD_320X240_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST7511_AVD_320X240_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST7511_AVD_320X240_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7511_AVD_320X240_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST7511_AVD_320X240_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST7511_AVD_320X240_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7511_AVD_320X240_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST7511_AVD_320X240_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST7511_AVD_320X240_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7511_AVD_320X240_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST7511_AVD_320X240_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]

## ST7528 NHD_C160100
Controller "st7528", Display "nhd_c160100"  [Description]
 * U8G2_ST7528_NHD_C160100_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_NHD_C160100_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_NHD_C160100_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_ST7528_NHD_C160100_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_NHD_C160100_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_NHD_C160100_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_ST7528_NHD_C160100_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_NHD_C160100_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_NHD_C160100_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_ST7528_NHD_C160100_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_NHD_C160100_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_NHD_C160100_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_ST7528_NHD_C160100_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_NHD_C160100_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_NHD_C160100_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]

## ST7528 NHD_C160100
Controller "st7528", Display "nhd_c160100"  [Description]
 * U8G2_ST7528_NHD_C160100_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_NHD_C160100_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_NHD_C160100_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_ST7528_NHD_C160100_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_NHD_C160100_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_NHD_C160100_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2080 bytes]
 * U8G2_ST7528_NHD_C160100_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_NHD_C160100_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_NHD_C160100_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2080 bytes]

## ST7528 ERC16064
Controller "st7528", Display "erc16064"  [Description]
 * U8G2_ST7528_ERC16064_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_ERC16064_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_ERC16064_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1280 bytes]
 * U8G2_ST7528_ERC16064_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_ERC16064_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_ERC16064_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1280 bytes]
 * U8G2_ST7528_ERC16064_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_ERC16064_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_ERC16064_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1280 bytes]
 * U8G2_ST7528_ERC16064_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_ERC16064_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_ERC16064_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1280 bytes]
 * U8G2_ST7528_ERC16064_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_ERC16064_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_ERC16064_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1280 bytes]

## ST7528 ERC16064
Controller "st7528", Display "erc16064"  [Description]
 * U8G2_ST7528_ERC16064_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_ERC16064_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_ERC16064_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1280 bytes]
 * U8G2_ST7528_ERC16064_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_ERC16064_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_ERC16064_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1280 bytes]
 * U8G2_ST7528_ERC16064_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 160 bytes]
 * U8G2_ST7528_ERC16064_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 320 bytes]
 * U8G2_ST7528_ERC16064_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1280 bytes]

## UC1617 JLX128128
Controller "uc1617", Display "jlx128128"  [Description]
 * U8G2_UC1617_JLX128128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1617_JLX128128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1617_JLX128128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_UC1617_JLX128128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1617_JLX128128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1617_JLX128128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_UC1617_JLX128128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1617_JLX128128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1617_JLX128128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_UC1617_JLX128128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1617_JLX128128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1617_JLX128128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_UC1617_JLX128128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1617_JLX128128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1617_JLX128128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]

## UC1617 JLX128128
Controller "uc1617", Display "jlx128128"  [Description]
 * U8G2_UC1617_JLX128128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1617_JLX128128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1617_JLX128128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_UC1617_JLX128128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_UC1617_JLX128128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_UC1617_JLX128128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_UC1617_JLX128128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1617_JLX128128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1617_JLX128128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## ST7565 EA_DOGM128
Controller "st7565", Display "ea_dogm128"  [Description]
 * U8G2_ST7565_EA_DOGM128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_EA_DOGM128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_EA_DOGM128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_EA_DOGM128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_EA_DOGM128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_EA_DOGM128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_EA_DOGM128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_EA_DOGM128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_EA_DOGM128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_EA_DOGM128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_EA_DOGM128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_EA_DOGM128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_EA_DOGM128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_EA_DOGM128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_EA_DOGM128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_EA_DOGM128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_EA_DOGM128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_EA_DOGM128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_EA_DOGM128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_EA_DOGM128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_EA_DOGM128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 LM6063
Controller "st7565", Display "lm6063"  [Description]
 * U8G2_ST7565_LM6063_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6063_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6063_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6063_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6063_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6063_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6063_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6063_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6063_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6063_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6063_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6063_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6063_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6063_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6063_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6063_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6063_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6063_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6063_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6063_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6063_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 64128N
Controller "st7565", Display "64128n"  [Description]
 * U8G2_ST7565_64128N_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_64128N_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_64128N_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_64128N_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_64128N_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_64128N_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_64128N_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_64128N_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_64128N_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_64128N_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_64128N_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_64128N_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_64128N_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_64128N_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_64128N_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_64128N_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_64128N_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_64128N_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_64128N_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_64128N_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_64128N_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 ZOLEN_128X64
Controller "st7565", Display "zolen_128x64"  [Description]
 * U8G2_ST7565_ZOLEN_128X64_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ZOLEN_128X64_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ZOLEN_128X64_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ZOLEN_128X64_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ZOLEN_128X64_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ZOLEN_128X64_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ZOLEN_128X64_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ZOLEN_128X64_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ZOLEN_128X64_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ZOLEN_128X64_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ZOLEN_128X64_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ZOLEN_128X64_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ZOLEN_128X64_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ZOLEN_128X64_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ZOLEN_128X64_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ZOLEN_128X64_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ZOLEN_128X64_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ZOLEN_128X64_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ZOLEN_128X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ZOLEN_128X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ZOLEN_128X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 LM6059
Controller "st7565", Display "lm6059"  [Description]
 * U8G2_ST7565_LM6059_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6059_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6059_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6059_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6059_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6059_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6059_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6059_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6059_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6059_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6059_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6059_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6059_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6059_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6059_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6059_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6059_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6059_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LM6059_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LM6059_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LM6059_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 KS0713
Controller "st7565", Display "ks0713"  [Description]
 * U8G2_ST7565_KS0713_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_KS0713_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_KS0713_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_KS0713_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_KS0713_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_KS0713_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_KS0713_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_KS0713_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_KS0713_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_KS0713_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_KS0713_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_KS0713_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_KS0713_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_KS0713_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_KS0713_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_KS0713_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_KS0713_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_KS0713_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_KS0713_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_KS0713_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_KS0713_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 LX12864
Controller "st7565", Display "lx12864"  [Description]
 * U8G2_ST7565_LX12864_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LX12864_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LX12864_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LX12864_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LX12864_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LX12864_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LX12864_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LX12864_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LX12864_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LX12864_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LX12864_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LX12864_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LX12864_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LX12864_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LX12864_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LX12864_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LX12864_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LX12864_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_LX12864_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_LX12864_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_LX12864_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 ERC12864
Controller "st7565", Display "erc12864"  [Description]
 * U8G2_ST7565_ERC12864_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 ERC12864_ALT
Controller "st7565", Display "erc12864_alt"  [Description]
 * U8G2_ST7565_ERC12864_ALT_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_ALT_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_ALT_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_ALT_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_ALT_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_ALT_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_ALT_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_ALT_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_ALT_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_ALT_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_ALT_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_ALT_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_ALT_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_ALT_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_ALT_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_ALT_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_ALT_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_ALT_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_ERC12864_ALT_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_ERC12864_ALT_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_ERC12864_ALT_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 NHD_C12864
Controller "st7565", Display "nhd_c12864"  [Description]
 * U8G2_ST7565_NHD_C12864_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12864_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12864_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_NHD_C12864_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12864_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12864_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_NHD_C12864_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12864_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12864_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_NHD_C12864_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12864_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12864_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_NHD_C12864_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12864_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12864_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_NHD_C12864_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12864_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12864_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_NHD_C12864_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12864_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12864_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 JLX12864
Controller "st7565", Display "jlx12864"  [Description]
 * U8G2_ST7565_JLX12864_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_JLX12864_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_JLX12864_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_JLX12864_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_JLX12864_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_JLX12864_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_JLX12864_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_JLX12864_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_JLX12864_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_JLX12864_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_JLX12864_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_JLX12864_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_JLX12864_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_JLX12864_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_JLX12864_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_JLX12864_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_JLX12864_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_JLX12864_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7565_JLX12864_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_JLX12864_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_JLX12864_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7565 NHD_C12832
Controller "st7565", Display "nhd_c12832"  [Description]
 * U8G2_ST7565_NHD_C12832_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12832_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12832_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_ST7565_NHD_C12832_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12832_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12832_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_ST7565_NHD_C12832_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12832_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12832_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_ST7565_NHD_C12832_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12832_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12832_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_ST7565_NHD_C12832_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12832_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12832_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_ST7565_NHD_C12832_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12832_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12832_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_ST7565_NHD_C12832_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7565_NHD_C12832_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7565_NHD_C12832_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]

## UC1601 128X32
Controller "uc1601", Display "128x32"  [Description]
 * U8G2_UC1601_128X32_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_UC1601_128X32_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_UC1601_128X32_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_UC1601_128X32_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_UC1601_128X32_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_UC1601_128X32_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]
 * U8G2_UC1601_128X32_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 512 bytes]

## UC1601 128X32
Controller "uc1601", Display "128x32"  [Description]
 * U8G2_UC1601_128X32_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 512 bytes]
 * U8G2_UC1601_128X32_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 512 bytes]
 * U8G2_UC1601_128X32_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_UC1601_128X32_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_UC1601_128X32_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 512 bytes]

## ST7565 EA_DOGM132
Controller "st7565", Display "ea_dogm132"  [Description]
 * U8G2_ST7565_EA_DOGM132_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7565_EA_DOGM132_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7565_EA_DOGM132_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 544 bytes]
 * U8G2_ST7565_EA_DOGM132_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7565_EA_DOGM132_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7565_EA_DOGM132_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 544 bytes]
 * U8G2_ST7565_EA_DOGM132_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7565_EA_DOGM132_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7565_EA_DOGM132_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 544 bytes]
 * U8G2_ST7565_EA_DOGM132_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7565_EA_DOGM132_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7565_EA_DOGM132_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 544 bytes]
 * U8G2_ST7565_EA_DOGM132_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7565_EA_DOGM132_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7565_EA_DOGM132_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 544 bytes]
 * U8G2_ST7565_EA_DOGM132_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7565_EA_DOGM132_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7565_EA_DOGM132_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 544 bytes]
 * U8G2_ST7565_EA_DOGM132_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7565_EA_DOGM132_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7565_EA_DOGM132_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 544 bytes]

## ST7567 PI_132X64
Controller "st7567", Display "pi_132x64"  [Description]
 * U8G2_ST7567_PI_132X64_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7567_PI_132X64_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7567_PI_132X64_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1088 bytes]
 * U8G2_ST7567_PI_132X64_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7567_PI_132X64_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7567_PI_132X64_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1088 bytes]
 * U8G2_ST7567_PI_132X64_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7567_PI_132X64_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7567_PI_132X64_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1088 bytes]
 * U8G2_ST7567_PI_132X64_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7567_PI_132X64_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7567_PI_132X64_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1088 bytes]
 * U8G2_ST7567_PI_132X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 136 bytes]
 * U8G2_ST7567_PI_132X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 272 bytes]
 * U8G2_ST7567_PI_132X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1088 bytes]

## ST7567 JLX12864
Controller "st7567", Display "jlx12864"  [Description]
 * U8G2_ST7567_JLX12864_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_JLX12864_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_JLX12864_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_JLX12864_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_JLX12864_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_JLX12864_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_JLX12864_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_JLX12864_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_JLX12864_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_JLX12864_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_JLX12864_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_JLX12864_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_JLX12864_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_JLX12864_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_JLX12864_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7567 ENH_DG128064
Controller "st7567", Display "enh_dg128064"  [Description]
 * U8G2_ST7567_ENH_DG128064_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_ENH_DG128064_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_ENH_DG128064_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_ENH_DG128064_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_ENH_DG128064_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7567 ENH_DG128064I
Controller "st7567", Display "enh_dg128064i"  [Description]
 * U8G2_ST7567_ENH_DG128064I_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064I_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064I_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_ENH_DG128064I_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064I_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064I_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_ENH_DG128064I_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064I_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064I_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_ENH_DG128064I_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064I_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064I_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_ENH_DG128064I_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_ENH_DG128064I_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_ENH_DG128064I_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7567 OS12864
Controller "st7567", Display "os12864"  [Description]
 * U8G2_ST7567_OS12864_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_OS12864_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_OS12864_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_OS12864_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_OS12864_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_OS12864_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_OS12864_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_OS12864_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_OS12864_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_OS12864_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_OS12864_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_OS12864_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7567_OS12864_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_OS12864_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7567_OS12864_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7567 64X32
Controller "st7567", Display "64x32"  [Description]
 * U8G2_ST7567_64X32_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_64X32_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_64X32_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_64X32_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_64X32_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_64X32_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_64X32_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_64X32_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_64X32_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_64X32_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_64X32_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_64X32_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_64X32_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_64X32_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_64X32_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]

## ST7567 HEM6432
Controller "st7567", Display "hem6432"  [Description]
 * U8G2_ST7567_HEM6432_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_HEM6432_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_HEM6432_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_HEM6432_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_HEM6432_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_HEM6432_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_HEM6432_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_HEM6432_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_HEM6432_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_HEM6432_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_HEM6432_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_HEM6432_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_HEM6432_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_HEM6432_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_HEM6432_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 256 bytes]

## ST7567 64X32
Controller "st7567", Display "64x32"  [Description]
 * U8G2_ST7567_64X32_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_64X32_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_64X32_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_64X32_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_64X32_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_64X32_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_64X32_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_64X32_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_64X32_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 256 bytes]

## ST7567 HEM6432
Controller "st7567", Display "hem6432"  [Description]
 * U8G2_ST7567_HEM6432_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_HEM6432_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_HEM6432_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_HEM6432_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_HEM6432_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_HEM6432_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 256 bytes]
 * U8G2_ST7567_HEM6432_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 64 bytes]
 * U8G2_ST7567_HEM6432_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7567_HEM6432_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 256 bytes]

## ST7571 128X128
Controller "st7571", Display "128x128"  [Description]
 * U8G2_ST7571_128X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7571_128X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7571_128X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST7571_128X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7571_128X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7571_128X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST7571_128X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7571_128X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7571_128X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST7571_128X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7571_128X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7571_128X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST7571_128X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7571_128X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7571_128X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## ST7571 128X128
Controller "st7571", Display "128x128"  [Description]
 * U8G2_ST7571_128X128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7571_128X128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7571_128X128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST7571_128X128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_ST7571_128X128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_ST7571_128X128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST7571_128X128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7571_128X128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7571_128X128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## ST7586S S028HN118A
Controller "st7586s", Display "s028hn118a"  [Description]
 * U8G2_ST7586S_S028HN118A_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST7586S_S028HN118A_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 768 bytes]
 * U8G2_ST7586S_S028HN118A_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 6528 bytes]
 * U8G2_ST7586S_S028HN118A_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST7586S_S028HN118A_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 768 bytes]
 * U8G2_ST7586S_S028HN118A_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 6528 bytes]
 * U8G2_ST7586S_S028HN118A_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST7586S_S028HN118A_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 768 bytes]
 * U8G2_ST7586S_S028HN118A_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 6528 bytes]

## ST7586S ERC240160
Controller "st7586s", Display "erc240160"  [Description]
 * U8G2_ST7586S_ERC240160_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_ERC240160_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_ERC240160_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_ERC240160_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_ERC240160_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_ERC240160_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_ERC240160_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_ERC240160_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_ERC240160_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_ERC240160_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_ERC240160_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_ERC240160_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_ERC240160_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_ERC240160_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_ERC240160_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_ERC240160_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_ERC240160_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_ERC240160_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_ERC240160_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_ERC240160_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_ERC240160_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]

## ST7586S YMC240160
Controller "st7586s", Display "ymc240160"  [Description]
 * U8G2_ST7586S_YMC240160_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_YMC240160_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_YMC240160_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_YMC240160_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_YMC240160_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_YMC240160_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_YMC240160_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_YMC240160_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_YMC240160_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_YMC240160_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_YMC240160_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_YMC240160_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_YMC240160_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_YMC240160_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_YMC240160_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_YMC240160_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_YMC240160_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_YMC240160_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST7586S_YMC240160_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST7586S_YMC240160_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST7586S_YMC240160_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]

## ST7588 JLX12864
Controller "st7588", Display "jlx12864"  [Description]
 * U8G2_ST7588_JLX12864_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7588_JLX12864_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7588_JLX12864_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7588_JLX12864_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7588_JLX12864_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7588_JLX12864_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7588_JLX12864_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## ST7588 JLX12864
Controller "st7588", Display "jlx12864"  [Description]
 * U8G2_ST7588_JLX12864_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7588_JLX12864_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 1024 bytes]
 * U8G2_ST7588_JLX12864_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 128 bytes]
 * U8G2_ST7588_JLX12864_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_ST7588_JLX12864_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 1024 bytes]

## ST75256 JLX256128
Controller "st75256", Display "jlx256128"  [Description]
 * U8G2_ST75256_JLX256128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_JLX256128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_JLX256128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_JLX256128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_JLX256128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_JLX256128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_JLX256128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]

## ST75256 WO256X128
Controller "st75256", Display "wo256x128"  [Description]
 * U8G2_ST75256_WO256X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_WO256X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_WO256X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_WO256X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_WO256X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_WO256X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_WO256X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4096 bytes]

## ST75256 JLX256128
Controller "st75256", Display "jlx256128"  [Description]
 * U8G2_ST75256_JLX256128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_JLX256128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_JLX256128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 4096 bytes]

## ST75256 WO256X128
Controller "st75256", Display "wo256x128"  [Description]
 * U8G2_ST75256_WO256X128_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_WO256X128_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 4096 bytes]
 * U8G2_ST75256_WO256X128_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_WO256X128_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_WO256X128_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 4096 bytes]

## ST75256 JLX256160
Controller "st75256", Display "jlx256160"  [Description]
 * U8G2_ST75256_JLX256160_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160M
Controller "st75256", Display "jlx256160m"  [Description]
 * U8G2_ST75256_JLX256160M_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160M_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160M_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160M_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160M_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160M_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160M_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160_ALT
Controller "st75256", Display "jlx256160_alt"  [Description]
 * U8G2_ST75256_JLX256160_ALT_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_ALT_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_ALT_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_ALT_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_ALT_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_ALT_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_ALT_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160
Controller "st75256", Display "jlx256160"  [Description]
 * U8G2_ST75256_JLX256160_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160M
Controller "st75256", Display "jlx256160m"  [Description]
 * U8G2_ST75256_JLX256160M_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160M_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160M_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160M_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160M_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160_ALT
Controller "st75256", Display "jlx256160_alt"  [Description]
 * U8G2_ST75256_JLX256160_ALT_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_ALT_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 5120 bytes]
 * U8G2_ST75256_JLX256160_ALT_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX256160_ALT_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX256160_ALT_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 5120 bytes]

## ST75256 JLX240160
Controller "st75256", Display "jlx240160"  [Description]
 * U8G2_ST75256_JLX240160_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST75256_JLX240160_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST75256_JLX240160_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST75256_JLX240160_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST75256_JLX240160_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST75256_JLX240160_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST75256_JLX240160_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 4800 bytes]

## ST75256 JLX240160
Controller "st75256", Display "jlx240160"  [Description]
 * U8G2_ST75256_JLX240160_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST75256_JLX240160_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 4800 bytes]
 * U8G2_ST75256_JLX240160_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 240 bytes]
 * U8G2_ST75256_JLX240160_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 480 bytes]
 * U8G2_ST75256_JLX240160_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 4800 bytes]

## ST75256 JLX25664
Controller "st75256", Display "jlx25664"  [Description]
 * U8G2_ST75256_JLX25664_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST75256_JLX25664_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST75256_JLX25664_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST75256_JLX25664_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST75256_JLX25664_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST75256_JLX25664_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST75256_JLX25664_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## ST75256 JLX25664
Controller "st75256", Display "jlx25664"  [Description]
 * U8G2_ST75256_JLX25664_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST75256_JLX25664_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2048 bytes]
 * U8G2_ST75256_JLX25664_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 256 bytes]
 * U8G2_ST75256_JLX25664_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 512 bytes]
 * U8G2_ST75256_JLX25664_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2048 bytes]

## ST75256 JLX172104
Controller "st75256", Display "jlx172104"  [Description]
 * U8G2_ST75256_JLX172104_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2288 bytes]
 * U8G2_ST75256_JLX172104_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2288 bytes]
 * U8G2_ST75256_JLX172104_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2288 bytes]
 * U8G2_ST75256_JLX172104_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2288 bytes]
 * U8G2_ST75256_JLX172104_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2288 bytes]
 * U8G2_ST75256_JLX172104_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2288 bytes]
 * U8G2_ST75256_JLX172104_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2288 bytes]

## ST75256 JLX172104
Controller "st75256", Display "jlx172104"  [Description]
 * U8G2_ST75256_JLX172104_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2288 bytes]
 * U8G2_ST75256_JLX172104_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2288 bytes]
 * U8G2_ST75256_JLX172104_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 176 bytes]
 * U8G2_ST75256_JLX172104_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 352 bytes]
 * U8G2_ST75256_JLX172104_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2288 bytes]

## ST75256 JLX19296
Controller "st75256", Display "jlx19296"  [Description]
 * U8G2_ST75256_JLX19296_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2304 bytes]
 * U8G2_ST75256_JLX19296_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2304 bytes]
 * U8G2_ST75256_JLX19296_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2304 bytes]
 * U8G2_ST75256_JLX19296_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2304 bytes]
 * U8G2_ST75256_JLX19296_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2304 bytes]
 * U8G2_ST75256_JLX19296_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2304 bytes]
 * U8G2_ST75256_JLX19296_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2304 bytes]

## ST75256 JLX19296
Controller "st75256", Display "jlx19296"  [Description]
 * U8G2_ST75256_JLX19296_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 2304 bytes]
 * U8G2_ST75256_JLX19296_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 2304 bytes]
 * U8G2_ST75256_JLX19296_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 192 bytes]
 * U8G2_ST75256_JLX19296_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 384 bytes]
 * U8G2_ST75256_JLX19296_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 2304 bytes]

## ST75320 JLX320240
Controller "st75320", Display "jlx320240"  [Description]
 * U8G2_ST75320_JLX320240_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST75320_JLX320240_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST75320_JLX320240_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST75320_JLX320240_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST75320_JLX320240_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST75320_JLX320240_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST75320_JLX320240_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]

## ST75320 JLX320240
Controller "st75320", Display "jlx320240"  [Description]
 * U8G2_ST75320_JLX320240_1_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_SW_I2C(rotation, clock,  data [,  reset]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_SW_I2C(rotation, clock,  data [,  reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST75320_JLX320240_1_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_HW_I2C(rotation, [reset [, clock, data]]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_HW_I2C(rotation, [reset [, clock, data]]) [full framebuffer, size = 9600 bytes]
 * U8G2_ST75320_JLX320240_1_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 320 bytes]
 * U8G2_ST75320_JLX320240_2_2ND_HW_I2C(rotation, [reset]) [page buffer, size = 640 bytes]
 * U8G2_ST75320_JLX320240_F_2ND_HW_I2C(rotation, [reset]) [full framebuffer, size = 9600 bytes]

## NT7534 TG12864R
Controller "nt7534", Display "tg12864r"  [Description]
 * U8G2_NT7534_TG12864R_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_NT7534_TG12864R_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_NT7534_TG12864R_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_NT7534_TG12864R_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_NT7534_TG12864R_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_NT7534_TG12864R_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_NT7534_TG12864R_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_NT7534_TG12864R_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_NT7534_TG12864R_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_NT7534_TG12864R_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_NT7534_TG12864R_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_NT7534_TG12864R_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_NT7534_TG12864R_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_NT7534_TG12864R_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_NT7534_TG12864R_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## IST3020 ERC19264
Controller "ist3020", Display "erc19264"  [Description]
 * U8G2_IST3020_ERC19264_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_IST3020_ERC19264_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_IST3020_ERC19264_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_IST3020_ERC19264_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_IST3020_ERC19264_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_IST3020_ERC19264_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_IST3020_ERC19264_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_IST3020_ERC19264_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_IST3020_ERC19264_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_IST3020_ERC19264_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_IST3020_ERC19264_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_IST3020_ERC19264_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]
 * U8G2_IST3020_ERC19264_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 192 bytes]
 * U8G2_IST3020_ERC19264_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 384 bytes]
 * U8G2_IST3020_ERC19264_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1536 bytes]

## IST7920 128X128
Controller "ist7920", Display "128x128"  [Description]
 * U8G2_IST7920_128X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_IST7920_128X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_IST7920_128X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_IST7920_128X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_IST7920_128X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_IST7920_128X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_IST7920_128X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_IST7920_128X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_IST7920_128X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_IST7920_128X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_IST7920_128X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_IST7920_128X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_IST7920_128X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_IST7920_128X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_IST7920_128X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## SBN1661 122X32
Controller "sbn1661", Display "122x32"  [Description]
 * U8G2_SBN1661_122X32_1(rotation, d0, d1, d2, d3, d4, d5, d6, d7, dc, e1, e2, reset) [page buffer, size = 128 bytes]
 * U8G2_SBN1661_122X32_2(rotation, d0, d1, d2, d3, d4, d5, d6, d7, dc, e1, e2, reset) [page buffer, size = 256 bytes]
 * U8G2_SBN1661_122X32_F(rotation, d0, d1, d2, d3, d4, d5, d6, d7, dc, e1, e2, reset) [full framebuffer, size = 512 bytes]

## SED1520 122X32
Controller "sed1520", Display "122x32"  [Description]
 * U8G2_SED1520_122X32_1(rotation, d0, d1, d2, d3, d4, d5, d6, d7, dc, e1, e2, reset) [page buffer, size = 128 bytes]
 * U8G2_SED1520_122X32_2(rotation, d0, d1, d2, d3, d4, d5, d6, d7, dc, e1, e2, reset) [page buffer, size = 256 bytes]
 * U8G2_SED1520_122X32_F(rotation, d0, d1, d2, d3, d4, d5, d6, d7, dc, e1, e2, reset) [full framebuffer, size = 512 bytes]

## KS0108 128X64
Controller "ks0108", Display "128x64"  [Description]
 * U8G2_KS0108_128X64_1(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2 [, reset]) [page buffer, size = 128 bytes]
 * U8G2_KS0108_128X64_2(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2 [, reset]) [page buffer, size = 256 bytes]
 * U8G2_KS0108_128X64_F(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2 [, reset]) [full framebuffer, size = 1024 bytes]

## KS0108 ERM19264
Controller "ks0108", Display "erm19264"  [Description]
 * U8G2_KS0108_ERM19264_1(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2 [, reset]) [page buffer, size = 192 bytes]
 * U8G2_KS0108_ERM19264_2(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2 [, reset]) [page buffer, size = 384 bytes]
 * U8G2_KS0108_ERM19264_F(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2 [, reset]) [full framebuffer, size = 1536 bytes]

## LC7981 160X80
Controller "lc7981", Display "160x80"  [Description]
 * U8G2_LC7981_160X80_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_LC7981_160X80_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_LC7981_160X80_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1600 bytes]

## LC7981 160X160
Controller "lc7981", Display "160x160"  [Description]
 * U8G2_LC7981_160X160_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_LC7981_160X160_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_LC7981_160X160_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3200 bytes]

## LC7981 240X128
Controller "lc7981", Display "240x128"  [Description]
 * U8G2_LC7981_240X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_LC7981_240X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_LC7981_240X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]

## LC7981 240X64
Controller "lc7981", Display "240x64"  [Description]
 * U8G2_LC7981_240X64_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_LC7981_240X64_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_LC7981_240X64_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]

## T6963 240X128
Controller "t6963", Display "240x128"  [Description]
 * U8G2_T6963_240X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_T6963_240X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_T6963_240X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]

## T6963 240X64
Controller "t6963", Display "240x64"  [Description]
 * U8G2_T6963_240X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_T6963_240X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_T6963_240X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1920 bytes]

## T6963 256X64
Controller "t6963", Display "256x64"  [Description]
 * U8G2_T6963_256X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_T6963_256X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_T6963_256X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## T6963 128X64
Controller "t6963", Display "128x64"  [Description]
 * U8G2_T6963_128X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_T6963_128X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_T6963_128X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## T6963 128X64_ALT
Controller "t6963", Display "128x64_alt"  [Description]
 * U8G2_T6963_128X64_ALT_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_T6963_128X64_ALT_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_T6963_128X64_ALT_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## T6963 160X80
Controller "t6963", Display "160x80"  [Description]
 * U8G2_T6963_160X80_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_T6963_160X80_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_T6963_160X80_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1600 bytes]

## SSD1322 NHD_256X64
Controller "ssd1322", Display "nhd_256x64"  [Description]
 * U8G2_SSD1322_NHD_256X64_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_256X64_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1322_NHD_256X64_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1322_NHD_256X64_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_256X64_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1322_NHD_256X64_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1322_NHD_256X64_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_256X64_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1322_NHD_256X64_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1322_NHD_256X64_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_256X64_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1322_NHD_256X64_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1322_NHD_256X64_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_256X64_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1322_NHD_256X64_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1322_NHD_256X64_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_256X64_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1322_NHD_256X64_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]
 * U8G2_SSD1322_NHD_256X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_256X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 512 bytes]
 * U8G2_SSD1322_NHD_256X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2048 bytes]

## SSD1322 NHD_128X64
Controller "ssd1322", Display "nhd_128x64"  [Description]
 * U8G2_SSD1322_NHD_128X64_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1322_NHD_128X64_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_128X64_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1322_NHD_128X64_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1322_NHD_128X64_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_128X64_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1322_NHD_128X64_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1322_NHD_128X64_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_128X64_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1322_NHD_128X64_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1322_NHD_128X64_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_128X64_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1322_NHD_128X64_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1322_NHD_128X64_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_128X64_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1322_NHD_128X64_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1322_NHD_128X64_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_128X64_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]
 * U8G2_SSD1322_NHD_128X64_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_SSD1322_NHD_128X64_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 256 bytes]
 * U8G2_SSD1322_NHD_128X64_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 1024 bytes]

## SSD1606 172X72
Controller "ssd1606", Display "172x72"  [Description]
 * U8G2_SSD1606_172X72_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_SSD1606_172X72_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 352 bytes]
 * U8G2_SSD1606_172X72_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 1584 bytes]
 * U8G2_SSD1606_172X72_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_SSD1606_172X72_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 352 bytes]
 * U8G2_SSD1606_172X72_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1584 bytes]
 * U8G2_SSD1606_172X72_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 176 bytes]
 * U8G2_SSD1606_172X72_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 352 bytes]
 * U8G2_SSD1606_172X72_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 1584 bytes]
 * U8G2_SSD1606_172X72_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 176 bytes]
 * U8G2_SSD1606_172X72_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 352 bytes]
 * U8G2_SSD1606_172X72_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 1584 bytes]
 * U8G2_SSD1606_172X72_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 176 bytes]
 * U8G2_SSD1606_172X72_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 352 bytes]
 * U8G2_SSD1606_172X72_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 1584 bytes]

## SSD1607 200X200
Controller "ssd1607", Display "200x200"  [Description]
 * U8G2_SSD1607_200X200_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_200X200_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_200X200_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_200X200_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_200X200_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_200X200_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_200X200_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_200X200_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_200X200_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_200X200_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_200X200_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_200X200_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_200X200_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_200X200_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_200X200_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 5000 bytes]

## SSD1607 GD_200X200
Controller "ssd1607", Display "gd_200x200"  [Description]
 * U8G2_SSD1607_GD_200X200_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_GD_200X200_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_GD_200X200_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_GD_200X200_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_GD_200X200_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_GD_200X200_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_GD_200X200_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_GD_200X200_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_GD_200X200_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_GD_200X200_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_GD_200X200_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_GD_200X200_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_GD_200X200_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_GD_200X200_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_GD_200X200_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 5000 bytes]

## SSD1607 WS_200X200
Controller "ssd1607", Display "ws_200x200"  [Description]
 * U8G2_SSD1607_WS_200X200_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_WS_200X200_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_WS_200X200_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_WS_200X200_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_WS_200X200_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_WS_200X200_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_WS_200X200_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_WS_200X200_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_WS_200X200_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_WS_200X200_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_WS_200X200_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_WS_200X200_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 5000 bytes]
 * U8G2_SSD1607_WS_200X200_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 200 bytes]
 * U8G2_SSD1607_WS_200X200_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 400 bytes]
 * U8G2_SSD1607_WS_200X200_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 5000 bytes]

## IL3820 296X128
Controller "il3820", Display "296x128"  [Description]
 * U8G2_IL3820_296X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_296X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_296X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4736 bytes]
 * U8G2_IL3820_296X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_296X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_296X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4736 bytes]
 * U8G2_IL3820_296X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_296X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_296X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4736 bytes]
 * U8G2_IL3820_296X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_296X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_296X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4736 bytes]
 * U8G2_IL3820_296X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_296X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_296X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4736 bytes]

## IL3820 V2_296X128
Controller "il3820", Display "v2_296x128"  [Description]
 * U8G2_IL3820_V2_296X128_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_V2_296X128_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_V2_296X128_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 4736 bytes]
 * U8G2_IL3820_V2_296X128_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_V2_296X128_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_V2_296X128_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4736 bytes]
 * U8G2_IL3820_V2_296X128_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_V2_296X128_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_V2_296X128_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 4736 bytes]
 * U8G2_IL3820_V2_296X128_1_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_V2_296X128_2_3W_SW_SPI(rotation, clock, data, cs [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_V2_296X128_F_3W_SW_SPI(rotation, clock, data, cs [, reset]) [full framebuffer, size = 4736 bytes]
 * U8G2_IL3820_V2_296X128_1_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 296 bytes]
 * U8G2_IL3820_V2_296X128_2_3W_HW_SPI(rotation, cs [, reset]) [page buffer, size = 592 bytes]
 * U8G2_IL3820_V2_296X128_F_3W_HW_SPI(rotation, cs [, reset]) [full framebuffer, size = 4736 bytes]

## SED1330 240X128
Controller "sed1330", Display "240x128"  [Description]
 * U8G2_SED1330_240X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_SED1330_240X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_SED1330_240X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_SED1330_240X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_SED1330_240X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_SED1330_240X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]

## RA8835 NHD_240X128
Controller "ra8835", Display "nhd_240x128"  [Description]
 * U8G2_RA8835_NHD_240X128_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_RA8835_NHD_240X128_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_RA8835_NHD_240X128_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]
 * U8G2_RA8835_NHD_240X128_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 240 bytes]
 * U8G2_RA8835_NHD_240X128_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 480 bytes]
 * U8G2_RA8835_NHD_240X128_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 3840 bytes]

## RA8835 320X240
Controller "ra8835", Display "320x240"  [Description]
 * U8G2_RA8835_320X240_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_RA8835_320X240_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_RA8835_320X240_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]
 * U8G2_RA8835_320X240_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_RA8835_320X240_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 640 bytes]
 * U8G2_RA8835_320X240_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 9600 bytes]

## MAX7219 64X8
Controller "max7219", Display "64x8"  [Description]
 * U8G2_MAX7219_64X8_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_MAX7219_64X8_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_MAX7219_64X8_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 64 bytes]
 * U8G2_MAX7219_64X8_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_MAX7219_64X8_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_MAX7219_64X8_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 64 bytes]
 * U8G2_MAX7219_64X8_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_MAX7219_64X8_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 128 bytes]
 * U8G2_MAX7219_64X8_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 64 bytes]

## MAX7219 32X8
Controller "max7219", Display "32x8"  [Description]
 * U8G2_MAX7219_32X8_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 32 bytes]
 * U8G2_MAX7219_32X8_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_MAX7219_32X8_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 32 bytes]
 * U8G2_MAX7219_32X8_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 32 bytes]
 * U8G2_MAX7219_32X8_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_MAX7219_32X8_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 32 bytes]
 * U8G2_MAX7219_32X8_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 32 bytes]
 * U8G2_MAX7219_32X8_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 64 bytes]
 * U8G2_MAX7219_32X8_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 32 bytes]

## MAX7219 8X8
Controller "max7219", Display "8x8"  [Description]
 * U8G2_MAX7219_8X8_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 8 bytes]
 * U8G2_MAX7219_8X8_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 16 bytes]
 * U8G2_MAX7219_8X8_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 8 bytes]
 * U8G2_MAX7219_8X8_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 8 bytes]
 * U8G2_MAX7219_8X8_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 16 bytes]
 * U8G2_MAX7219_8X8_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 8 bytes]
 * U8G2_MAX7219_8X8_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 8 bytes]
 * U8G2_MAX7219_8X8_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 16 bytes]
 * U8G2_MAX7219_8X8_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 8 bytes]

## S1D15E06 160100
Controller "s1d15e06", Display "160100"  [Description]
 * U8G2_S1D15E06_160100_1_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_S1D15E06_160100_2_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_S1D15E06_160100_F_4W_SW_SPI(rotation, clock, data, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_S1D15E06_160100_1_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_S1D15E06_160100_2_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_S1D15E06_160100_F_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_S1D15E06_160100_1_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_S1D15E06_160100_2_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_S1D15E06_160100_F_2ND_4W_HW_SPI(rotation, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_S1D15E06_160100_1_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_S1D15E06_160100_2_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_S1D15E06_160100_F_6800(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]
 * U8G2_S1D15E06_160100_1_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 160 bytes]
 * U8G2_S1D15E06_160100_2_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [page buffer, size = 320 bytes]
 * U8G2_S1D15E06_160100_F_8080(rotation, d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc [, reset]) [full framebuffer, size = 2080 bytes]

## A2PRINTER 384X240
Controller "a2printer", Display "384x240"  [Description]

# Links
 * [U8g2 C Setup](u8g2setupc)
 * [U8g2 C++ Setup](u8g2setupcpp)
 * [U8x8 Function Reference](u8x8reference)
 * [U8x8 C Setup](u8x8setupc)
 * [U8x8 C++ Setup](u8x8setupcpp)
