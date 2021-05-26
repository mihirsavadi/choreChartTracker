
[tocstart]: # (toc start)


[tocend]: # (toc end)

![https://raw.githubusercontent.com/wiki/olikraus/u8g2/img/uc1701_dogs102_uno_board_320.jpg](https://raw.githubusercontent.com/wiki/olikraus/u8g2/img/uc1701_dogs102_uno_board_320.jpg) 

<img style="object-fit: none; object-position: 0 0; width: 20px; height: 20px;" src="https://raw.githubusercontent.com/wiki/olikraus/u8g2/img/uc1701_dogs102_uno_board_320.jpg">

<div style="width: 100px;object-fit: none;object-position: 0 0;">
<img src="https://raw.githubusercontent.com/wiki/olikraus/u8g2/img/uc1701_dogs102_uno_board_320.jpg" style="width: 100px;object-fit: none;object-position: 0 0;">
</div>

U8g2 is a monochrome graphics library for embedded devices. 
 * Supported Display Controller: SSD1305, SSD1306, SSD1309, SSD1316, SSD1322, SSD1325, SSD1327, SSD1329, SSD1606, SSD1607, SH1106, SH1107, SH1108, SH1122, T6963, RA8835, LC7981, PCD8544, PCF8812, HX1230, UC1601, UC1604, UC1608, UC1610, UC1611, UC1701, ST7511, ST7565, ST7567, ST7588, ST75256, ST75320, NT7534, ST7920, IST3020, IST7920, LD7032, KS0108, SED1520, SBN1661, IL3820, MAX7219 (see [here](u8g2setupcpp) for a full list)
 * The Arduino library U8g2 can be installed from the library manager of the Arduino IDE.

U8g2 also includes U8x8 library. Features for U8g2 and U8x8 are:
 * U8g2
   * Includes all graphics procedures (line/box/circle draw).
   * Supports many fonts. (Almost) no restriction on the font height.
   * Requires some memory in the microcontroller to render the display.
 * U8x8
   * Text output only (character) device.
   * Only fonts allowed with fixed size per character (8x8 pixel).
   * Writes directly to the display. No buffer in the microcontroller required.

There is one more class/sub-library "U8log", which emulates an output terminal
(like Arduino serial monitor): [U8log Reference Manual](u8logreference)

Overview

 * [Gallery](gallery)
 * [How to install U8g2](u8g2install)
 * [Introduction to U8g2](setup_tutorial)
 * [U8g vs. U8g2 (with code porting guide)](u8gvsu8g2)
 * [Supported Arduino Boards](boardlist)
 * [FAQ](https://github.com/olikraus/u8g2/blob/master/doc/faq.txt)

Code Reference

 * [U8g2 C++/Arduino Setup](u8g2setupcpp)
 * [U8g2 C Setup](u8g2setupc)
 * [U8x8 C++/Arduino Setup](u8x8setupcpp)
 * [U8x8 C Setup](u8x8setupc)
 * [U8g2 Reference Manual](u8g2reference)
 * [U8x8 Reference Manual](u8x8reference)
 * [U8log Reference Manual](u8logreference)

Font Reference

 * [U8g2 and U8x8 Font Groups](fntgrp)
 * [All U8g2 Fonts](fntlistall) 
 * [Monospace U8g2 Fonts](fntlistmono)
 * [All U8x8 Fonts](fntlist8x8)
 * [All U8g2 Fonts (PDF)](https://github.com/olikraus/u8g2/blob/master/doc/u8g2fntlistall.pdf) (might not be up to date, see [here](fntlistall)  for the latest version.)
 
Other

 * [U8g2 Memory Optimization and Feature Selection](u8g2optimization)
 * [Porting to new MCR platform](Porting-to-new-MCU-platform)
 * [U8g2 Developer Information](internal)
 * [U8g2 Font Format](u8g2fontformat)
 * [Windows Font Editor Fony 1.4.7](https://github.com/olikraus/u8g2/blob/master/tools/font/fony)
