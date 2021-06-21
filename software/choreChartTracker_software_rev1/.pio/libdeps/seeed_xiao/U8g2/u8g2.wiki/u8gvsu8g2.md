
[tocstart]: # (toc start)

  * [U8g vs. U8g2](#u8g-vs-u8g2)
    * [Improvements](#improvements)
    * [How to port U8g code?](#how-to-port-u8g-code)

[tocend]: # (toc end)

# U8g vs. U8g2

## Improvements

 * Full "RAM" memory buffer without picture loop
 * Arduino SPI and TWI Libraries instead of custom code
 * Support for Unicode and UTF-8
 * Faster compilation
 * High speed text only API (U8x8)
 * Hardware 180 degree rotation for some displays available
 * Tested with AVR, SAM and ESP8266 boards

## How to port U8g code?

### Major Changes (Code rework required)

 * The name of the include file has changed: Use `#include "U8g2lib.h"`
 * The native type for pixel coordinates has changed to `u8g2_uint_t`.
Use the following line to redefine this at the beginning of your code
    `typedef u8g2_uint_t u8g_uint_t;`
 * Old Arduino IDE 00xx (before 1.00) is not supported any more.
ARDUINO macro must be >= 100
 * `begin()` must be called (this was optional in U8glib)
 * Constructor contains name of communicaton interface and 
also contains the display orientation as first argument.
 * u8g2.drawStr90 does not exist any more, use
      `u8g2_SetFontDirection()`
 * "P" versions of the string functions are not yet implemented.
This includes drawStrP(), getStrWidthP(), etc
Use the print function with the F() macro instead. See also the
PrintHelloWorld and PrintProgmem examples.
 * In U8glib font transparency was defined in the `begin()` statement. This is now
handled by `setFontMode()`. 
 * `U8G_PROGMEM` is now called `U8X8_PROGMEM`.
 * Screen rotation is handled by the constructor in U8g2.
The functions undoRotation, setRot90, setRot180 and setRot270 are
replaced by the first argument of the U8g2 constructor.
 * Screen scaling is not there in u8g2.
This is completly removed, there are no corresponding function in u8g2 
for undoScale() and setScale2x2().
 * `setColorEntry()`, `setHiColor()`, `setHiColorByRGB()`, `setRGB`: Not supported any more
(u8g2 focus are monochrome displays, use Ucglib instead)
 * `getMode()`: Is not available any more because there is only one monochrome mode.	
 * `setDefaultForegroundColor()`, `setDefaultBackgroundColor()` and 
`setDefaultMidColor()` are not required any more. These functions do not
exist in U8g2. Use `setDrawColor()` instead.
 * `getFontLineSpacing()` and `setFontLineSpacingFactor()` are not supported any more. Instead you can get the line spacing by calculating the difference `getAscent()-getDescent()`.
 * `getStrPixelWidth()` is replaced by `getStrWidth()` 
 * `setHardwareBackup()` not supported any more (and hopefully not required any more). 
 * Cursor functions are not available. This includes:
`setCursorFont()`, `setCursorStyle()`, `setCursorPos()`, `setCursorColor()`,
`enableCursor()`, `disableCursor()`, `drawCursor()`
 * Virtual screen handling is not supported:
`setVirtualScreenDimension()`, `addToVirtualScreen()`
	
### Minor Changes (Code update might be required)

* U8g2 `drawTriangle()` expects signed arguments (u8glib expects unsigned arguments)
* U8g2 has different font names. Some of the old font names are known to u8g2 and are
mapped automatically. If the font name is unknown, please choose a different font from the font list.

### Change Notes (No code change required)

* `sleepOn()`, `sleepOff()`: supported, but better use `setPowerSave()`
* `setColorIndex()` and `getColorIndex()` are renamed to `setDrawColor()` and 
`getDrawColor()`. The old names are still supported.
- `getFontAscent()` and `getFontDescent()` are renamed to `getAscent()` and `getDescent()`
The old names are still supported.
- Signal names are renamed in the constructor calls:

| U8glib | U8g2 |
| --- | --- |
| U8glib sck | U8g2 clock |
| U8glib mosi | U8g2 data |
| U8glib a0 | U8g2 dc |

- `getHeight()` renamed to `getDisplayHeight()`, old name still exists
- `getWidth()` renamed to `getDisplayWidth()`, old name still exists
