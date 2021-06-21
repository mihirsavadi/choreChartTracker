
[tocstart]: # (toc start)

  * [Introduction](#introduction)
    * [Using dynamically allocated page buffers](#using-dynamically-allocated-page-buffers)
  * [Setup Function Reference](#setup-function-reference)
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

U8g2 can be used as C-library with any microcontroller. The setup sequence usually looks like this:

```
u8g2_t u8g2; // a structure which will contain all the data for one display
...
u8g2_Setup_ssd1306_i2c_128x64_noname_2(&u8g2, U8G2_R0, u8x8_byte_sw_i2c, u8x8_gpio_and_delay_lpc11u3x);  // init u8g2 structure
u8g2_InitDisplay(&u8g2); // send init sequence to the display, display is in sleep mode after this,
u8g2_SetPowerSave(&u8g2, 0); // wake up display
```

All available setup procedure are listed in the rest of the document. Each setup 
procedure requires four arguments:

 1. U8g2: Pointer to an empty u8g2 structure (see the example above)
 2. Rotation: Rotation procedure, see below
 3. Byte communication procedure: Either one of the existing procedures or a custom procedure for the target controller.
 4. Lowlevel delay and GPIO procedure: This must be a custom procedure.
 
For the second argument, the following constants are available:
 
| Rotation/Mirror | Description  |
|---|---|
| `U8G2_R0` | No rotation, landscape |
| `U8G2_R1` | 90 degree clockwise rotation |
| `U8G2_R2` | 180 degree clockwise rotation |
| `U8G2_R3` | 270 degree clockwise rotation |
| `U8G2_MIRROR` | No rotation, landscape, display content is mirrored (v2.6.x) |

For the third argument, several "bitbanging" procedures are available:

| Byte Procedure | Description  |
|---|---|
| u8x8_byte_4wire_sw_spi | Standard 8-bit SPI communication with "four pins" (SCK, MOSI, DC, CS) | 
| u8x8_byte_3wire_sw_spi | 9-bit communication with "three pins" (SCK, MOSI, CS) | 
| u8x8_byte_8bit_6800mode | Parallel interface, 6800 format |  
| u8x8_byte_8bit_8080mode | Parallel interface, 8080 format  | 
| u8x8_byte_sw_i2c | Two wire, I2C communication | 
| u8x8_byte_ks0108 | Special interface for KS0108 controller | 

Of course the target display must support this interface, this means you can not use
the SPI interface with a display which does not support SPI.

The last argument is discussed here: [Porting-to-new-MCU-platform](Porting-to-new-MCU-platform)

## Using dynamically allocated page buffers
To use dynamically allocated page buffers, a slightly modified setup sequence must be followed and the following line must be uncommented in _u8g2.h_: `//#define U8G2_USE_DYNAMIC_ALLOC`.

The corresponding setup sequence could look as follows:

```
u8g2_t u8g2; // a structure which will contain all the data for one display
uint8_t *buf; // the pointer to a dynamically allocated page buffer
...
u8g2_Setup_ssd1306_i2c_128x64_noname_2(&u8g2, U8G2_R0, u8x8_byte_sw_i2c, u8x8_gpio_and_delay_lpc11u3x);  // init u8g2 structure
buf = (uint8_t *)malloc(u8g2_GetBufferSize(&u8g2)); // dynamically allocate a buffer of the required size
u8g2_SetBufferPtr(&u8g2, buf); // set the internal page buffer pointer to the newly allocated page buffer
u8g2_InitDisplay(&u8g2); // send init sequence to the display, display is in sleep mode after this,
u8g2_SetPowerSave(&u8g2, 0); // wake up display
```

Using dynamically allocated buffers disables static buffer allocation, thus, the pointer to the dynamically allocated buffer must be set directly after calling the setup procedure.

You will have to increase the heap space by `u8g2_getBufferSize` bytes. To get this value, you may either run your project and have this value printed via a serial port or you may look into the definition of the setup u8g2_Setup_* function in _u8g2_d_setup.c_. The function will contain a line similar to the following:

<pre>
...
buf = <b>u8g2_m_16_4_1(&tile_buf_height);</b>
...
</pre>

When looking into _u8g2_d_memory.c_, you will find the definition of the highlighted function:

<pre>
...
static uint8_t buf[<b>128</b>];
...
</pre>

The buffer size to be allocated in this example is emphasized.

# Setup Function Reference

## SSD1305 128X32_NONAME
Controller "ssd1305", Display "128x32_noname"  [Description]
 * u8g2_Setup_ssd1305_128x32_noname_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x32_noname_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x32_noname_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1305_128x32_noname_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x32_noname_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x32_noname_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1305_128x32_noname_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x32_noname_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x32_noname_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 512 bytes]

## SSD1305 128X32_ADAFRUIT
Controller "ssd1305", Display "128x32_adafruit"  [Description]
 * u8g2_Setup_ssd1305_128x32_adafruit_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x32_adafruit_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x32_adafruit_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1305_128x32_adafruit_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x32_adafruit_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x32_adafruit_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1305_128x32_adafruit_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x32_adafruit_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x32_adafruit_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 512 bytes]

## SSD1305 128X32_NONAME
Controller "ssd1305", Display "128x32_noname"  [Description]
 * u8g2_Setup_ssd1305_i2c_128x32_noname_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_noname_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_noname_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]

## SSD1305 128X32_ADAFRUIT
Controller "ssd1305", Display "128x32_adafruit"  [Description]
 * u8g2_Setup_ssd1305_i2c_128x32_adafruit_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_adafruit_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_adafruit_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_adafruit_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_adafruit_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_adafruit_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_adafruit_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_adafruit_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x32_adafruit_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]

## SSD1305 128X64_ADAFRUIT
Controller "ssd1305", Display "128x64_adafruit"  [Description]
 * u8g2_Setup_ssd1305_128x64_adafruit_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x64_adafruit_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x64_adafruit_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1305_128x64_adafruit_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x64_adafruit_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x64_adafruit_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1305_128x64_adafruit_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x64_adafruit_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x64_adafruit_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1305 128X64_RAYSTAR
Controller "ssd1305", Display "128x64_raystar"  [Description]
 * u8g2_Setup_ssd1305_128x64_raystar_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x64_raystar_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x64_raystar_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1305_128x64_raystar_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x64_raystar_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x64_raystar_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1305_128x64_raystar_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_128x64_raystar_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_128x64_raystar_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1305 128X64_ADAFRUIT
Controller "ssd1305", Display "128x64_adafruit"  [Description]
 * u8g2_Setup_ssd1305_i2c_128x64_adafruit_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_adafruit_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_adafruit_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_adafruit_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_adafruit_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_adafruit_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_adafruit_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_adafruit_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_adafruit_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1305 128X64_RAYSTAR
Controller "ssd1305", Display "128x64_raystar"  [Description]
 * u8g2_Setup_ssd1305_i2c_128x64_raystar_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_raystar_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_raystar_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_raystar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_raystar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_raystar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_raystar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_raystar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1305_i2c_128x64_raystar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1306 2040X16
Controller "ssd1306", Display "2040x16"  [Description]
 * u8g2_Setup_ssd1306_2040x16_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 2040 bytes]
 * u8g2_Setup_ssd1306_2040x16_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 4080 bytes]
 * u8g2_Setup_ssd1306_2040x16_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4080 bytes]
 * u8g2_Setup_ssd1306_2040x16_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 2040 bytes]
 * u8g2_Setup_ssd1306_2040x16_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 4080 bytes]
 * u8g2_Setup_ssd1306_2040x16_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4080 bytes]
 * u8g2_Setup_ssd1306_2040x16_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 2040 bytes]
 * u8g2_Setup_ssd1306_2040x16_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 4080 bytes]
 * u8g2_Setup_ssd1306_2040x16_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4080 bytes]
 * u8g2_Setup_ssd1306_2040x16_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 2040 bytes]
 * u8g2_Setup_ssd1306_2040x16_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 4080 bytes]
 * u8g2_Setup_ssd1306_2040x16_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 4080 bytes]
 * u8g2_Setup_ssd1306_2040x16_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 2040 bytes]
 * u8g2_Setup_ssd1306_2040x16_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 4080 bytes]
 * u8g2_Setup_ssd1306_2040x16_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 4080 bytes]

## SSD1306 128X64_NONAME
Controller "ssd1306", Display "128x64_noname"  [Description]
 * u8g2_Setup_ssd1306_128x64_noname_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_noname_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_VCOMH0
Controller "ssd1306", Display "128x64_vcomh0"  [Description]
 * u8g2_Setup_ssd1306_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_ALT0
Controller "ssd1306", Display "128x64_alt0"  [Description]
 * u8g2_Setup_ssd1306_128x64_alt0_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x64_alt0_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_NONAME
Controller "ssd1306", Display "128x64_noname"  [Description]
 * u8g2_Setup_ssd1306_i2c_128x64_noname_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_noname_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_noname_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_VCOMH0
Controller "ssd1306", Display "128x64_vcomh0"  [Description]
 * u8g2_Setup_ssd1306_i2c_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_vcomh0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_vcomh0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_vcomh0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_vcomh0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_vcomh0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_vcomh0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1306 128X64_ALT0
Controller "ssd1306", Display "128x64_alt0"  [Description]
 * u8g2_Setup_ssd1306_i2c_128x64_alt0_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_alt0_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_alt0_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_alt0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_alt0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_alt0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_alt0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_alt0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x64_alt0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1306 72X40_ER
Controller "ssd1306", Display "72x40_er"  [Description]
 * u8g2_Setup_ssd1306_72x40_er_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_ssd1306_72x40_er_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_ssd1306_72x40_er_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_ssd1306_72x40_er_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_ssd1306_72x40_er_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_ssd1306_72x40_er_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_ssd1306_72x40_er_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_ssd1306_72x40_er_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_ssd1306_72x40_er_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_ssd1306_72x40_er_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_ssd1306_72x40_er_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_ssd1306_72x40_er_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_ssd1306_72x40_er_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_ssd1306_72x40_er_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_ssd1306_72x40_er_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 360 bytes]

## SSD1306 72X40_ER
Controller "ssd1306", Display "72x40_er"  [Description]
 * u8g2_Setup_ssd1306_i2c_72x40_er_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_ssd1306_i2c_72x40_er_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_ssd1306_i2c_72x40_er_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_ssd1306_i2c_72x40_er_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_ssd1306_i2c_72x40_er_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_ssd1306_i2c_72x40_er_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_ssd1306_i2c_72x40_er_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_ssd1306_i2c_72x40_er_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_ssd1306_i2c_72x40_er_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 360 bytes]

## SH1106 128X64_NONAME
Controller "sh1106", Display "128x64_noname"  [Description]
 * u8g2_Setup_sh1106_128x64_noname_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_noname_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_noname_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_noname_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_noname_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_noname_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_noname_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_noname_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_noname_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_noname_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_noname_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_noname_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_VCOMH0
Controller "sh1106", Display "128x64_vcomh0"  [Description]
 * u8g2_Setup_sh1106_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_WINSTAR
Controller "sh1106", Display "128x64_winstar"  [Description]
 * u8g2_Setup_sh1106_128x64_winstar_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x64_winstar_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_NONAME
Controller "sh1106", Display "128x64_noname"  [Description]
 * u8g2_Setup_sh1106_i2c_128x64_noname_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_noname_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_noname_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_VCOMH0
Controller "sh1106", Display "128x64_vcomh0"  [Description]
 * u8g2_Setup_sh1106_i2c_128x64_vcomh0_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_vcomh0_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_vcomh0_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_vcomh0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_vcomh0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_vcomh0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_vcomh0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_vcomh0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_vcomh0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SH1106 128X64_WINSTAR
Controller "sh1106", Display "128x64_winstar"  [Description]
 * u8g2_Setup_sh1106_i2c_128x64_winstar_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_winstar_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_winstar_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_winstar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_winstar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_winstar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_winstar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_winstar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x64_winstar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SH1106 72X40_WISE
Controller "sh1106", Display "72x40_wise"  [Description]
 * u8g2_Setup_sh1106_72x40_wise_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_sh1106_72x40_wise_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_sh1106_72x40_wise_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_sh1106_72x40_wise_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_sh1106_72x40_wise_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_sh1106_72x40_wise_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_sh1106_72x40_wise_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_sh1106_72x40_wise_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_sh1106_72x40_wise_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_sh1106_72x40_wise_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_sh1106_72x40_wise_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_sh1106_72x40_wise_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_sh1106_72x40_wise_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_sh1106_72x40_wise_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_sh1106_72x40_wise_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 360 bytes]

## SH1106 72X40_WISE
Controller "sh1106", Display "72x40_wise"  [Description]
 * u8g2_Setup_sh1106_i2c_72x40_wise_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_sh1106_i2c_72x40_wise_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_sh1106_i2c_72x40_wise_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_sh1106_i2c_72x40_wise_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_sh1106_i2c_72x40_wise_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_sh1106_i2c_72x40_wise_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 360 bytes]
 * u8g2_Setup_sh1106_i2c_72x40_wise_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 72 bytes]
 * u8g2_Setup_sh1106_i2c_72x40_wise_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_sh1106_i2c_72x40_wise_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 360 bytes]

## SH1106 64X32
Controller "sh1106", Display "64x32"  [Description]
 * u8g2_Setup_sh1106_64x32_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1106_64x32_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_64x32_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_sh1106_64x32_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1106_64x32_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_64x32_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_sh1106_64x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1106_64x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_64x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_sh1106_64x32_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1106_64x32_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_64x32_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_sh1106_64x32_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1106_64x32_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_64x32_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 256 bytes]

## SH1106 64X32
Controller "sh1106", Display "64x32"  [Description]
 * u8g2_Setup_sh1106_i2c_64x32_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1106_i2c_64x32_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_64x32_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_64x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1106_i2c_64x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_64x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_64x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1106_i2c_64x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_64x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]

## SH1107 64X128
Controller "sh1107", Display "64x128"  [Description]
 * u8g2_Setup_sh1107_64x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1107_64x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_64x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1107_64x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1107_64x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_64x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1107_64x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1107_64x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_64x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1107_64x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1107_64x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_64x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1107_64x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1107_64x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_64x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SH1107 64X128
Controller "sh1107", Display "64x128"  [Description]
 * u8g2_Setup_sh1107_i2c_64x128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1107_i2c_64x128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_64x128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1107_i2c_64x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1107_i2c_64x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_64x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_sh1107_i2c_64x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_sh1107_i2c_64x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_64x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SH1107 SEEED_96X96
Controller "sh1107", Display "seeed_96x96"  [Description]
 * u8g2_Setup_sh1107_seeed_96x96_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_sh1107_seeed_96x96_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1152 bytes]

## SH1107 SEEED_96X96
Controller "sh1107", Display "seeed_96x96"  [Description]
 * u8g2_Setup_sh1107_i2c_seeed_96x96_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_96x96_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_96x96_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_96x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_96x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_96x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_96x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_96x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_96x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1152 bytes]

## SH1107 128X128
Controller "sh1107", Display "128x128"  [Description]
 * u8g2_Setup_sh1107_128x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_128x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_128x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_128x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_128x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_128x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_128x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_128x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_128x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_128x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_128x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_128x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## SH1107 PIMORONI_128X128
Controller "sh1107", Display "pimoroni_128x128"  [Description]
 * u8g2_Setup_sh1107_pimoroni_128x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_pimoroni_128x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## SH1107 SEEED_128X128
Controller "sh1107", Display "seeed_128x128"  [Description]
 * u8g2_Setup_sh1107_seeed_128x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_seeed_128x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## SH1107 128X128
Controller "sh1107", Display "128x128"  [Description]
 * u8g2_Setup_sh1107_i2c_128x128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_128x128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_i2c_128x128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_i2c_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_i2c_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_i2c_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_i2c_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## SH1107 PIMORONI_128X128
Controller "sh1107", Display "pimoroni_128x128"  [Description]
 * u8g2_Setup_sh1107_i2c_pimoroni_128x128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_pimoroni_128x128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_i2c_pimoroni_128x128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_i2c_pimoroni_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_pimoroni_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_i2c_pimoroni_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_i2c_pimoroni_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_pimoroni_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_i2c_pimoroni_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## SH1107 SEEED_128X128
Controller "sh1107", Display "seeed_128x128"  [Description]
 * u8g2_Setup_sh1107_i2c_seeed_128x128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_128x128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_128x128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1107_i2c_seeed_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## SH1108 160X160
Controller "sh1108", Display "160x160"  [Description]
 * u8g2_Setup_sh1108_160x160_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_sh1108_160x160_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_sh1108_160x160_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_sh1108_160x160_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_sh1108_160x160_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_sh1108_160x160_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_sh1108_160x160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_sh1108_160x160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_sh1108_160x160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_sh1108_160x160_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_sh1108_160x160_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_sh1108_160x160_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_sh1108_160x160_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_sh1108_160x160_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_sh1108_160x160_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 3200 bytes]

## SH1108 160X160
Controller "sh1108", Display "160x160"  [Description]
 * u8g2_Setup_sh1108_i2c_160x160_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_sh1108_i2c_160x160_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_sh1108_i2c_160x160_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_sh1108_i2c_160x160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_sh1108_i2c_160x160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_sh1108_i2c_160x160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_sh1108_i2c_160x160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_sh1108_i2c_160x160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_sh1108_i2c_160x160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3200 bytes]

## SH1122 256X64
Controller "sh1122", Display "256x64"  [Description]
 * u8g2_Setup_sh1122_256x64_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1122_256x64_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_sh1122_256x64_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1122_256x64_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1122_256x64_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_sh1122_256x64_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1122_256x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1122_256x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_sh1122_256x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1122_256x64_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1122_256x64_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_sh1122_256x64_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1122_256x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1122_256x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_sh1122_256x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## SH1122 256X64
Controller "sh1122", Display "256x64"  [Description]
 * u8g2_Setup_sh1122_i2c_256x64_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1122_i2c_256x64_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_sh1122_i2c_256x64_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1122_i2c_256x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1122_i2c_256x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_sh1122_i2c_256x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_sh1122_i2c_256x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1122_i2c_256x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_sh1122_i2c_256x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## SSD1306 128X32_UNIVISION
Controller "ssd1306", Display "128x32_univision"  [Description]
 * u8g2_Setup_ssd1306_128x32_univision_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_univision_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 512 bytes]

## SSD1306 128X32_WINSTAR
Controller "ssd1306", Display "128x32_winstar"  [Description]
 * u8g2_Setup_ssd1306_128x32_winstar_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_128x32_winstar_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 512 bytes]

## SSD1306 128X32_UNIVISION
Controller "ssd1306", Display "128x32_univision"  [Description]
 * u8g2_Setup_ssd1306_i2c_128x32_univision_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_univision_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_univision_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_univision_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_univision_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_univision_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_univision_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_univision_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_univision_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]

## SSD1306 128X32_WINSTAR
Controller "ssd1306", Display "128x32_winstar"  [Description]
 * u8g2_Setup_ssd1306_i2c_128x32_winstar_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_winstar_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_winstar_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_winstar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_winstar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_winstar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_winstar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_winstar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_128x32_winstar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]

## SH1106 128X32_VISIONOX
Controller "sh1106", Display "128x32_visionox"  [Description]
 * u8g2_Setup_sh1106_128x32_visionox_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_128x32_visionox_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 512 bytes]

## SH1106 128X32_VISIONOX
Controller "sh1106", Display "128x32_visionox"  [Description]
 * u8g2_Setup_sh1106_i2c_128x32_visionox_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x32_visionox_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x32_visionox_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_sh1106_i2c_128x32_visionox_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x32_visionox_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x32_visionox_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_sh1106_i2c_128x32_visionox_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sh1106_i2c_128x32_visionox_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sh1106_i2c_128x32_visionox_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]

## SSD1306 64X48_ER
Controller "ssd1306", Display "64x48_er"  [Description]
 * u8g2_Setup_ssd1306_64x48_er_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x48_er_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x48_er_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_64x48_er_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x48_er_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x48_er_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_64x48_er_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x48_er_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x48_er_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_64x48_er_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x48_er_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x48_er_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_64x48_er_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x48_er_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x48_er_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 384 bytes]

## SSD1306 64X48_ER
Controller "ssd1306", Display "64x48_er"  [Description]
 * u8g2_Setup_ssd1306_i2c_64x48_er_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_i2c_64x48_er_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_64x48_er_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_i2c_64x48_er_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_i2c_64x48_er_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_64x48_er_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_i2c_64x48_er_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_i2c_64x48_er_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_64x48_er_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 384 bytes]

## SSD1306 48X64_WINSTAR
Controller "ssd1306", Display "48x64_winstar"  [Description]
 * u8g2_Setup_ssd1306_48x64_winstar_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 48 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 48 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 48 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 48 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 48 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_48x64_winstar_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 384 bytes]

## SSD1306 48X64_WINSTAR
Controller "ssd1306", Display "48x64_winstar"  [Description]
 * u8g2_Setup_ssd1306_i2c_48x64_winstar_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 48 bytes]
 * u8g2_Setup_ssd1306_i2c_48x64_winstar_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_i2c_48x64_winstar_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_i2c_48x64_winstar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 48 bytes]
 * u8g2_Setup_ssd1306_i2c_48x64_winstar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_i2c_48x64_winstar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 384 bytes]
 * u8g2_Setup_ssd1306_i2c_48x64_winstar_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 48 bytes]
 * u8g2_Setup_ssd1306_i2c_48x64_winstar_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_i2c_48x64_winstar_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 384 bytes]

## SSD1306 64X32_NONAME
Controller "ssd1306", Display "64x32_noname"  [Description]
 * u8g2_Setup_ssd1306_64x32_noname_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_noname_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 256 bytes]

## SSD1306 64X32_1F
Controller "ssd1306", Display "64x32_1f"  [Description]
 * u8g2_Setup_ssd1306_64x32_1f_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_64x32_1f_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 256 bytes]

## SSD1306 64X32_NONAME
Controller "ssd1306", Display "64x32_noname"  [Description]
 * u8g2_Setup_ssd1306_i2c_64x32_noname_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_noname_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_noname_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_noname_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_noname_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_noname_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]

## SSD1306 64X32_1F
Controller "ssd1306", Display "64x32_1f"  [Description]
 * u8g2_Setup_ssd1306_i2c_64x32_1f_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_1f_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_1f_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_1f_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_1f_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_1f_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_1f_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_1f_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1306_i2c_64x32_1f_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]

## SSD1306 96X16_ER
Controller "ssd1306", Display "96x16_er"  [Description]
 * u8g2_Setup_ssd1306_96x16_er_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_96x16_er_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_96x16_er_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_96x16_er_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_96x16_er_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_96x16_er_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_96x16_er_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_96x16_er_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_96x16_er_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_96x16_er_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_96x16_er_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_96x16_er_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_96x16_er_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_96x16_er_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_96x16_er_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 192 bytes]

## SSD1306 96X16_ER
Controller "ssd1306", Display "96x16_er"  [Description]
 * u8g2_Setup_ssd1306_i2c_96x16_er_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_i2c_96x16_er_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_i2c_96x16_er_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_i2c_96x16_er_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_i2c_96x16_er_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_i2c_96x16_er_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_i2c_96x16_er_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1306_i2c_96x16_er_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1306_i2c_96x16_er_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 192 bytes]

## SSD1309 128X64_NONAME2
Controller "ssd1309", Display "128x64_noname2"  [Description]
 * u8g2_Setup_ssd1309_128x64_noname2_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_128x64_noname2_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_128x64_noname2_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1309_128x64_noname2_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_128x64_noname2_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_128x64_noname2_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1309_128x64_noname2_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_128x64_noname2_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_128x64_noname2_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1309 128X64_NONAME2
Controller "ssd1309", Display "128x64_noname2"  [Description]
 * u8g2_Setup_ssd1309_i2c_128x64_noname2_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname2_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname2_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname2_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname2_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname2_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname2_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname2_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname2_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1309 128X64_NONAME0
Controller "ssd1309", Display "128x64_noname0"  [Description]
 * u8g2_Setup_ssd1309_128x64_noname0_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_128x64_noname0_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_128x64_noname0_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1309_128x64_noname0_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_128x64_noname0_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_128x64_noname0_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1309_128x64_noname0_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_128x64_noname0_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_128x64_noname0_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1309 128X64_NONAME0
Controller "ssd1309", Display "128x64_noname0"  [Description]
 * u8g2_Setup_ssd1309_i2c_128x64_noname0_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname0_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname0_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname0_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname0_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1309_i2c_128x64_noname0_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1316 128X32
Controller "ssd1316", Display "128x32"  [Description]
 * u8g2_Setup_ssd1316_128x32_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1316_128x32_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1316_128x32_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1316_128x32_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1316_128x32_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1316_128x32_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1316_128x32_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1316_128x32_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1316_128x32_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 512 bytes]

## SSD1316 128X32
Controller "ssd1316", Display "128x32"  [Description]
 * u8g2_Setup_ssd1316_i2c_128x32_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1316_i2c_128x32_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1316_i2c_128x32_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1316_i2c_128x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1316_i2c_128x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1316_i2c_128x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_ssd1316_i2c_128x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1316_i2c_128x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1316_i2c_128x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]

## SSD1317 96X96
Controller "ssd1317", Display "96x96"  [Description]
 * u8g2_Setup_ssd1317_96x96_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1317_96x96_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1317_96x96_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1317_96x96_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1317_96x96_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1317_96x96_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1317_96x96_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1317_96x96_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1317_96x96_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1152 bytes]

## SSD1317 96X96
Controller "ssd1317", Display "96x96"  [Description]
 * u8g2_Setup_ssd1317_i2c_96x96_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1317_i2c_96x96_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1317_i2c_96x96_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1317_i2c_96x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1317_i2c_96x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1317_i2c_96x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1317_i2c_96x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1317_i2c_96x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1317_i2c_96x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1152 bytes]

## SSD1318 128X96
Controller "ssd1318", Display "128x96"  [Description]
 * u8g2_Setup_ssd1318_128x96_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_128x96_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_128x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_128x96_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_128x96_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1536 bytes]

## SSD1318 128X96_XCP
Controller "ssd1318", Display "128x96_xcp"  [Description]
 * u8g2_Setup_ssd1318_128x96_xcp_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_128x96_xcp_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1536 bytes]

## SSD1318 128X96
Controller "ssd1318", Display "128x96"  [Description]
 * u8g2_Setup_ssd1318_i2c_128x96_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]

## SSD1318 128X96_XCP
Controller "ssd1318", Display "128x96_xcp"  [Description]
 * u8g2_Setup_ssd1318_i2c_128x96_xcp_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_xcp_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_xcp_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_xcp_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_xcp_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_xcp_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_xcp_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_xcp_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1318_i2c_128x96_xcp_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]

## SSD1325 NHD_128X64
Controller "ssd1325", Display "nhd_128x64"  [Description]
 * u8g2_Setup_ssd1325_nhd_128x64_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1325_nhd_128x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1325 NHD_128X64
Controller "ssd1325", Display "nhd_128x64"  [Description]
 * u8g2_Setup_ssd1325_i2c_nhd_128x64_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1325_i2c_nhd_128x64_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1325_i2c_nhd_128x64_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1325_i2c_nhd_128x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1325_i2c_nhd_128x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1325_i2c_nhd_128x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1325_i2c_nhd_128x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1325_i2c_nhd_128x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1325_i2c_nhd_128x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD0323 OS128064
Controller "ssd0323", Display "os128064"  [Description]
 * u8g2_Setup_ssd0323_os128064_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd0323_os128064_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd0323_os128064_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd0323_os128064_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd0323_os128064_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd0323_os128064_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd0323_os128064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd0323_os128064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd0323_os128064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd0323_os128064_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd0323_os128064_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd0323_os128064_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd0323_os128064_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd0323_os128064_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd0323_os128064_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD0323 OS128064
Controller "ssd0323", Display "os128064"  [Description]
 * u8g2_Setup_ssd0323_i2c_os128064_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd0323_i2c_os128064_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd0323_i2c_os128064_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd0323_i2c_os128064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd0323_i2c_os128064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd0323_i2c_os128064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd0323_i2c_os128064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd0323_i2c_os128064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd0323_i2c_os128064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1326 ER_256X32
Controller "ssd1326", Display "er_256x32"  [Description]
 * u8g2_Setup_ssd1326_er_256x32_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1326_er_256x32_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1326_er_256x32_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1326_er_256x32_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1326_er_256x32_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1326_er_256x32_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1326_er_256x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1326_er_256x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1326_er_256x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1326_er_256x32_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1326_er_256x32_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1326_er_256x32_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1326_er_256x32_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1326_er_256x32_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1326_er_256x32_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1326 ER_256X32
Controller "ssd1326", Display "er_256x32"  [Description]
 * u8g2_Setup_ssd1326_i2c_er_256x32_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1326_i2c_er_256x32_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1326_i2c_er_256x32_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1326_i2c_er_256x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1326_i2c_er_256x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1326_i2c_er_256x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1326_i2c_er_256x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1326_i2c_er_256x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1326_i2c_er_256x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1327 WS_96X64
Controller "ssd1327", Display "ws_96x64"  [Description]
 * u8g2_Setup_ssd1327_ws_96x64_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 768 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 768 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 768 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 768 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_ws_96x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 768 bytes]

## SSD1327 WS_96X64
Controller "ssd1327", Display "ws_96x64"  [Description]
 * u8g2_Setup_ssd1327_i2c_ws_96x64_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_96x64_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_96x64_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 768 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_96x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_96x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_96x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 768 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_96x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_96x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_96x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 768 bytes]

## SSD1327 SEEED_96X96
Controller "ssd1327", Display "seeed_96x96"  [Description]
 * u8g2_Setup_ssd1327_seeed_96x96_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_seeed_96x96_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1152 bytes]

## SSD1327 SEEED_96X96
Controller "ssd1327", Display "seeed_96x96"  [Description]
 * u8g2_Setup_ssd1327_i2c_seeed_96x96_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_i2c_seeed_96x96_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_i2c_seeed_96x96_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1327_i2c_seeed_96x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_i2c_seeed_96x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_i2c_seeed_96x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1152 bytes]
 * u8g2_Setup_ssd1327_i2c_seeed_96x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_ssd1327_i2c_seeed_96x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ssd1327_i2c_seeed_96x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1152 bytes]

## SSD1327 EA_W128128
Controller "ssd1327", Display "ea_w128128"  [Description]
 * u8g2_Setup_ssd1327_ea_w128128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ea_w128128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## SSD1327 MIDAS_128X128
Controller "ssd1327", Display "midas_128x128"  [Description]
 * u8g2_Setup_ssd1327_midas_128x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_midas_128x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## SSD1327 WS_128X128
Controller "ssd1327", Display "ws_128x128"  [Description]
 * u8g2_Setup_ssd1327_ws_128x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_ws_128x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## SSD1327 EA_W128128
Controller "ssd1327", Display "ea_w128128"  [Description]
 * u8g2_Setup_ssd1327_i2c_ea_w128128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_ea_w128128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_ea_w128128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_i2c_ea_w128128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_ea_w128128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_ea_w128128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_i2c_ea_w128128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_ea_w128128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_ea_w128128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## SSD1327 MIDAS_128X128
Controller "ssd1327", Display "midas_128x128"  [Description]
 * u8g2_Setup_ssd1327_i2c_midas_128x128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_midas_128x128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_midas_128x128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_i2c_midas_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_midas_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_midas_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_i2c_midas_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_midas_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_midas_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## SSD1327 WS_128X128
Controller "ssd1327", Display "ws_128x128"  [Description]
 * u8g2_Setup_ssd1327_i2c_ws_128x128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_128x128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_128x128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_ws_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## SSD1327 VISIONOX_128X96
Controller "ssd1327", Display "visionox_128x96"  [Description]
 * u8g2_Setup_ssd1327_visionox_128x96_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_visionox_128x96_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1536 bytes]

## SSD1327 VISIONOX_128X96
Controller "ssd1327", Display "visionox_128x96"  [Description]
 * u8g2_Setup_ssd1327_i2c_visionox_128x96_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_visionox_128x96_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_visionox_128x96_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1327_i2c_visionox_128x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_visionox_128x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_visionox_128x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1327_i2c_visionox_128x96_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1327_i2c_visionox_128x96_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1327_i2c_visionox_128x96_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]

## SSD1329 128X96_NONAME
Controller "ssd1329", Display "128x96_noname"  [Description]
 * u8g2_Setup_ssd1329_128x96_noname_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1329_128x96_noname_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1329_128x96_noname_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1329_128x96_noname_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1329_128x96_noname_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1329_128x96_noname_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ssd1329_128x96_noname_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1329_128x96_noname_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1329_128x96_noname_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1536 bytes]

## LD7032 60X32
Controller "ld7032", Display "60x32"  [Description]
 * u8g2_Setup_ld7032_60x32_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ld7032_60x32_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ld7032_60x32_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]

## LD7032 60X32_ALT
Controller "ld7032", Display "60x32_alt"  [Description]
 * u8g2_Setup_ld7032_60x32_alt_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ld7032_60x32_alt_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ld7032_60x32_alt_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]

## LD7032 60X32
Controller "ld7032", Display "60x32"  [Description]
 * u8g2_Setup_ld7032_i2c_60x32_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]

## LD7032 60X32_ALT
Controller "ld7032", Display "60x32_alt"  [Description]
 * u8g2_Setup_ld7032_i2c_60x32_alt_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_alt_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_alt_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_alt_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_alt_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_alt_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_alt_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_alt_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ld7032_i2c_60x32_alt_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]

## ST7920 192X32
Controller "st7920", Display "192x32"  [Description]
 * u8g2_Setup_st7920_p_192x32_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st7920_p_192x32_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st7920_p_192x32_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 768 bytes]

## ST7920 192X32
Controller "st7920", Display "192x32"  [Description]
 * u8g2_Setup_st7920_192x32_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st7920_192x32_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st7920_192x32_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 768 bytes]

## ST7920 192X32
Controller "st7920", Display "192x32"  [Description]
 * u8g2_Setup_st7920_s_192x32_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st7920_s_192x32_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st7920_s_192x32_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 768 bytes]
 * u8g2_Setup_st7920_s_192x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st7920_s_192x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st7920_s_192x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 768 bytes]
 * u8g2_Setup_st7920_s_192x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st7920_s_192x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st7920_s_192x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 768 bytes]

## ST7920 128X64
Controller "st7920", Display "128x64"  [Description]
 * u8g2_Setup_st7920_p_128x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7920_p_128x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7920_p_128x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7920 128X64
Controller "st7920", Display "128x64"  [Description]
 * u8g2_Setup_st7920_128x64_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7920_128x64_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7920_128x64_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7920 128X64
Controller "st7920", Display "128x64"  [Description]
 * u8g2_Setup_st7920_s_128x64_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7920_s_128x64_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7920_s_128x64_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7920_s_128x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7920_s_128x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7920_s_128x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7920_s_128x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7920_s_128x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7920_s_128x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## LS013B7DH03 128X128
Controller "ls013b7dh03", Display "128x128"  [Description]
 * u8g2_Setup_ls013b7dh03_128x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ls013b7dh03_128x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ls013b7dh03_128x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]

## LS027B7DH01 400X240
Controller "ls027b7dh01", Display "400x240"  [Description]
 * u8g2_Setup_ls027b7dh01_400x240_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ls027b7dh01_400x240_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 800 bytes]
 * u8g2_Setup_ls027b7dh01_400x240_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 12000 bytes]

## LS027B7DH01 M0_400X240
Controller "ls027b7dh01", Display "m0_400x240"  [Description]
 * u8g2_Setup_ls027b7dh01_m0_400x240_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ls027b7dh01_m0_400x240_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 800 bytes]
 * u8g2_Setup_ls027b7dh01_m0_400x240_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 12000 bytes]

## LS013B7DH05 144X168
Controller "ls013b7dh05", Display "144x168"  [Description]
 * u8g2_Setup_ls013b7dh05_144x168_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 144 bytes]
 * u8g2_Setup_ls013b7dh05_144x168_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 288 bytes]
 * u8g2_Setup_ls013b7dh05_144x168_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 3024 bytes]

## UC1701 EA_DOGS102
Controller "uc1701", Display "ea_dogs102"  [Description]
 * u8g2_Setup_uc1701_ea_dogs102_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 104 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 208 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 832 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 104 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 208 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 832 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 104 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 208 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 832 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 104 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 208 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 832 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 104 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 208 bytes]
 * u8g2_Setup_uc1701_ea_dogs102_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 832 bytes]

## UC1701 MINI12864
Controller "uc1701", Display "mini12864"  [Description]
 * u8g2_Setup_uc1701_mini12864_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1701_mini12864_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1701_mini12864_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_uc1701_mini12864_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1701_mini12864_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1701_mini12864_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_uc1701_mini12864_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1701_mini12864_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1701_mini12864_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_uc1701_mini12864_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1701_mini12864_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1701_mini12864_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_uc1701_mini12864_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1701_mini12864_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1701_mini12864_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## PCD8544 84X48
Controller "pcd8544", Display "84x48"  [Description]
 * u8g2_Setup_pcd8544_84x48_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 88 bytes]
 * u8g2_Setup_pcd8544_84x48_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_pcd8544_84x48_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 528 bytes]
 * u8g2_Setup_pcd8544_84x48_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 88 bytes]
 * u8g2_Setup_pcd8544_84x48_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_pcd8544_84x48_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 528 bytes]
 * u8g2_Setup_pcd8544_84x48_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 88 bytes]
 * u8g2_Setup_pcd8544_84x48_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_pcd8544_84x48_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 528 bytes]

## PCF8812 96X65
Controller "pcf8812", Display "96x65"  [Description]
 * u8g2_Setup_pcf8812_96x65_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_pcf8812_96x65_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_pcf8812_96x65_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 864 bytes]
 * u8g2_Setup_pcf8812_96x65_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_pcf8812_96x65_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_pcf8812_96x65_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 864 bytes]
 * u8g2_Setup_pcf8812_96x65_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_pcf8812_96x65_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_pcf8812_96x65_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 864 bytes]

## HX1230 96X68
Controller "hx1230", Display "96x68"  [Description]
 * u8g2_Setup_hx1230_96x68_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_hx1230_96x68_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_hx1230_96x68_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 864 bytes]
 * u8g2_Setup_hx1230_96x68_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_hx1230_96x68_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_hx1230_96x68_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 864 bytes]
 * u8g2_Setup_hx1230_96x68_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 96 bytes]
 * u8g2_Setup_hx1230_96x68_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_hx1230_96x68_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 864 bytes]

## UC1604 JLX19264
Controller "uc1604", Display "jlx19264"  [Description]
 * u8g2_Setup_uc1604_jlx19264_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_uc1604_jlx19264_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_uc1604_jlx19264_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_uc1604_jlx19264_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_uc1604_jlx19264_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_uc1604_jlx19264_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_uc1604_jlx19264_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_uc1604_jlx19264_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_uc1604_jlx19264_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_uc1604_jlx19264_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_uc1604_jlx19264_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_uc1604_jlx19264_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_uc1604_jlx19264_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_uc1604_jlx19264_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_uc1604_jlx19264_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1536 bytes]

## UC1604 JLX19264
Controller "uc1604", Display "jlx19264"  [Description]
 * u8g2_Setup_uc1604_i2c_jlx19264_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_uc1604_i2c_jlx19264_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_uc1604_i2c_jlx19264_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_uc1604_i2c_jlx19264_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_uc1604_i2c_jlx19264_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_uc1604_i2c_jlx19264_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_uc1604_i2c_jlx19264_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_uc1604_i2c_jlx19264_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_uc1604_i2c_jlx19264_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1536 bytes]

## UC1608 ERC24064
Controller "uc1608", Display "erc24064"  [Description]
 * u8g2_Setup_uc1608_erc24064_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc24064_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc24064_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_erc24064_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc24064_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc24064_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_erc24064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc24064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc24064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_erc24064_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc24064_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc24064_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_erc24064_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc24064_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc24064_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1920 bytes]

## UC1608 DEM240064
Controller "uc1608", Display "dem240064"  [Description]
 * u8g2_Setup_uc1608_dem240064_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_dem240064_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_dem240064_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_dem240064_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_dem240064_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_dem240064_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_dem240064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_dem240064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_dem240064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_dem240064_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_dem240064_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_dem240064_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_dem240064_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_dem240064_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_dem240064_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1920 bytes]

## UC1608 ERC24064
Controller "uc1608", Display "erc24064"  [Description]
 * u8g2_Setup_uc1608_i2c_erc24064_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_erc24064_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_erc24064_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_i2c_erc24064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_erc24064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_erc24064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_i2c_erc24064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_erc24064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_erc24064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1920 bytes]

## UC1608 DEM240064
Controller "uc1608", Display "dem240064"  [Description]
 * u8g2_Setup_uc1608_i2c_dem240064_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_dem240064_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_dem240064_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_i2c_dem240064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_dem240064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_dem240064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1608_i2c_dem240064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_dem240064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_dem240064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1920 bytes]

## UC1608 ERC240120
Controller "uc1608", Display "erc240120"  [Description]
 * u8g2_Setup_uc1608_erc240120_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc240120_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc240120_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 3600 bytes]
 * u8g2_Setup_uc1608_erc240120_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc240120_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc240120_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 3600 bytes]
 * u8g2_Setup_uc1608_erc240120_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc240120_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc240120_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3600 bytes]
 * u8g2_Setup_uc1608_erc240120_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc240120_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc240120_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 3600 bytes]
 * u8g2_Setup_uc1608_erc240120_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_erc240120_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_erc240120_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 3600 bytes]

## UC1608 ERC240120
Controller "uc1608", Display "erc240120"  [Description]
 * u8g2_Setup_uc1608_i2c_erc240120_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_erc240120_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_erc240120_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 3600 bytes]
 * u8g2_Setup_uc1608_i2c_erc240120_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_erc240120_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_erc240120_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3600 bytes]
 * u8g2_Setup_uc1608_i2c_erc240120_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_erc240120_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_erc240120_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3600 bytes]

## UC1608 240X128
Controller "uc1608", Display "240x128"  [Description]
 * u8g2_Setup_uc1608_240x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_240x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_240x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1608_240x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_240x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_240x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1608_240x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_240x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_240x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1608_240x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_240x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_240x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1608_240x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_240x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_240x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 3840 bytes]

## UC1608 240X128
Controller "uc1608", Display "240x128"  [Description]
 * u8g2_Setup_uc1608_i2c_240x128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_240x128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_240x128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1608_i2c_240x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_240x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_240x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1608_i2c_240x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1608_i2c_240x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1608_i2c_240x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3840 bytes]

## UC1638 160X128
Controller "uc1638", Display "160x128"  [Description]
 * u8g2_Setup_uc1638_160x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1638_160x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1638_160x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2560 bytes]
 * u8g2_Setup_uc1638_160x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1638_160x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1638_160x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2560 bytes]
 * u8g2_Setup_uc1638_160x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1638_160x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1638_160x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2560 bytes]
 * u8g2_Setup_uc1638_160x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1638_160x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1638_160x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2560 bytes]
 * u8g2_Setup_uc1638_160x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1638_160x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1638_160x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2560 bytes]

## UC1610 EA_DOGXL160
Controller "uc1610", Display "ea_dogxl160"  [Description]
 * u8g2_Setup_uc1610_ea_dogxl160_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1610_ea_dogxl160_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2080 bytes]

## UC1610 EA_DOGXL160
Controller "uc1610", Display "ea_dogxl160"  [Description]
 * u8g2_Setup_uc1610_i2c_ea_dogxl160_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1610_i2c_ea_dogxl160_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1610_i2c_ea_dogxl160_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_uc1610_i2c_ea_dogxl160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1610_i2c_ea_dogxl160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1610_i2c_ea_dogxl160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_uc1610_i2c_ea_dogxl160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1610_i2c_ea_dogxl160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1610_i2c_ea_dogxl160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2080 bytes]

## UC1611 EA_DOGM240
Controller "uc1611", Display "ea_dogm240"  [Description]
 * u8g2_Setup_uc1611_ea_dogm240_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogm240_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1920 bytes]

## UC1611 EA_DOGM240
Controller "uc1611", Display "ea_dogm240"  [Description]
 * u8g2_Setup_uc1611_i2c_ea_dogm240_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogm240_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogm240_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogm240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogm240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogm240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1920 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogm240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogm240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogm240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1920 bytes]

## UC1611 EA_DOGXL240
Controller "uc1611", Display "ea_dogxl240"  [Description]
 * u8g2_Setup_uc1611_ea_dogxl240_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ea_dogxl240_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 3840 bytes]

## UC1611 EA_DOGXL240
Controller "uc1611", Display "ea_dogxl240"  [Description]
 * u8g2_Setup_uc1611_i2c_ea_dogxl240_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogxl240_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogxl240_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogxl240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogxl240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogxl240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogxl240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogxl240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_i2c_ea_dogxl240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3840 bytes]

## UC1611 EW50850
Controller "uc1611", Display "ew50850"  [Description]
 * u8g2_Setup_uc1611_ew50850_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ew50850_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ew50850_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_uc1611_ew50850_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ew50850_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ew50850_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_uc1611_ew50850_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ew50850_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ew50850_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_uc1611_ew50850_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ew50850_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ew50850_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_uc1611_ew50850_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_ew50850_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_ew50850_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 4800 bytes]

## UC1611 EW50850
Controller "uc1611", Display "ew50850"  [Description]
 * u8g2_Setup_uc1611_i2c_ew50850_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_i2c_ew50850_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_i2c_ew50850_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_uc1611_i2c_ew50850_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_i2c_ew50850_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_i2c_ew50850_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_uc1611_i2c_ew50850_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_uc1611_i2c_ew50850_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_uc1611_i2c_ew50850_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4800 bytes]

## UC1611 CG160160
Controller "uc1611", Display "cg160160"  [Description]
 * u8g2_Setup_uc1611_cg160160_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1611_cg160160_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1611_cg160160_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_uc1611_cg160160_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1611_cg160160_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1611_cg160160_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_uc1611_cg160160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1611_cg160160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1611_cg160160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_uc1611_cg160160_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1611_cg160160_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1611_cg160160_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_uc1611_cg160160_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1611_cg160160_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1611_cg160160_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 3200 bytes]

## UC1611 CG160160
Controller "uc1611", Display "cg160160"  [Description]
 * u8g2_Setup_uc1611_i2c_cg160160_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1611_i2c_cg160160_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1611_i2c_cg160160_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_uc1611_i2c_cg160160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1611_i2c_cg160160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1611_i2c_cg160160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3200 bytes]
 * u8g2_Setup_uc1611_i2c_cg160160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_uc1611_i2c_cg160160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_uc1611_i2c_cg160160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 3200 bytes]

## UC1611 IDS4073
Controller "uc1611", Display "ids4073"  [Description]
 * u8g2_Setup_uc1611_ids4073_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1611_ids4073_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_uc1611_ids4073_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_uc1611_ids4073_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1611_ids4073_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_uc1611_ids4073_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_uc1611_ids4073_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1611_ids4073_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_uc1611_ids4073_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_uc1611_ids4073_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1611_ids4073_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_uc1611_ids4073_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_uc1611_ids4073_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1611_ids4073_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_uc1611_ids4073_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 4096 bytes]

## UC1611 IDS4073
Controller "uc1611", Display "ids4073"  [Description]
 * u8g2_Setup_uc1611_i2c_ids4073_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1611_i2c_ids4073_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_uc1611_i2c_ids4073_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_uc1611_i2c_ids4073_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1611_i2c_ids4073_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_uc1611_i2c_ids4073_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_uc1611_i2c_ids4073_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1611_i2c_ids4073_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_uc1611_i2c_ids4073_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4096 bytes]

## ST7511 AVD_320X240
Controller "st7511", Display "avd_320x240"  [Description]
 * u8g2_Setup_st7511_avd_320x240_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7511_avd_320x240_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st7511_avd_320x240_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st7511_avd_320x240_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7511_avd_320x240_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st7511_avd_320x240_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st7511_avd_320x240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7511_avd_320x240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st7511_avd_320x240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st7511_avd_320x240_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7511_avd_320x240_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st7511_avd_320x240_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st7511_avd_320x240_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7511_avd_320x240_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st7511_avd_320x240_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 9600 bytes]

## ST7528 NHD_C160100
Controller "st7528", Display "nhd_c160100"  [Description]
 * u8g2_Setup_st7528_nhd_c160100_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_nhd_c160100_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_nhd_c160100_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_st7528_nhd_c160100_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_nhd_c160100_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_nhd_c160100_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_st7528_nhd_c160100_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_nhd_c160100_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_nhd_c160100_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2080 bytes]

## ST7528 NHD_C160100
Controller "st7528", Display "nhd_c160100"  [Description]
 * u8g2_Setup_st7528_i2c_nhd_c160100_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_i2c_nhd_c160100_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_i2c_nhd_c160100_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_st7528_i2c_nhd_c160100_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_i2c_nhd_c160100_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_i2c_nhd_c160100_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_st7528_i2c_nhd_c160100_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_i2c_nhd_c160100_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_i2c_nhd_c160100_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2080 bytes]

## ST7528 ERC16064
Controller "st7528", Display "erc16064"  [Description]
 * u8g2_Setup_st7528_erc16064_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_erc16064_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_erc16064_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1280 bytes]
 * u8g2_Setup_st7528_erc16064_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_erc16064_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_erc16064_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1280 bytes]
 * u8g2_Setup_st7528_erc16064_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_erc16064_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_erc16064_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1280 bytes]

## ST7528 ERC16064
Controller "st7528", Display "erc16064"  [Description]
 * u8g2_Setup_st7528_i2c_erc16064_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_i2c_erc16064_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_i2c_erc16064_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1280 bytes]
 * u8g2_Setup_st7528_i2c_erc16064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_i2c_erc16064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_i2c_erc16064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1280 bytes]
 * u8g2_Setup_st7528_i2c_erc16064_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_st7528_i2c_erc16064_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st7528_i2c_erc16064_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1280 bytes]

## UC1617 JLX128128
Controller "uc1617", Display "jlx128128"  [Description]
 * u8g2_Setup_uc1617_jlx128128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1617_jlx128128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1617_jlx128128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_uc1617_jlx128128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1617_jlx128128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1617_jlx128128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_uc1617_jlx128128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1617_jlx128128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1617_jlx128128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## UC1617 JLX128128
Controller "uc1617", Display "jlx128128"  [Description]
 * u8g2_Setup_uc1617_i2c_jlx128128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1617_i2c_jlx128128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1617_i2c_jlx128128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_uc1617_i2c_jlx128128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1617_i2c_jlx128128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1617_i2c_jlx128128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_uc1617_i2c_jlx128128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1617_i2c_jlx128128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1617_i2c_jlx128128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## ST7565 EA_DOGM128
Controller "st7565", Display "ea_dogm128"  [Description]
 * u8g2_Setup_st7565_ea_dogm128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ea_dogm128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ea_dogm128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_ea_dogm128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ea_dogm128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ea_dogm128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_ea_dogm128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ea_dogm128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ea_dogm128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_ea_dogm128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ea_dogm128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ea_dogm128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_ea_dogm128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ea_dogm128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ea_dogm128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 LM6063
Controller "st7565", Display "lm6063"  [Description]
 * u8g2_Setup_st7565_lm6063_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6063_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6063_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lm6063_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6063_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6063_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lm6063_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6063_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6063_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lm6063_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6063_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6063_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lm6063_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6063_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6063_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 64128N
Controller "st7565", Display "64128n"  [Description]
 * u8g2_Setup_st7565_64128n_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_64128n_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_64128n_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_64128n_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_64128n_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_64128n_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_64128n_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_64128n_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_64128n_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_64128n_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_64128n_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_64128n_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_64128n_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_64128n_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_64128n_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 ZOLEN_128X64
Controller "st7565", Display "zolen_128x64"  [Description]
 * u8g2_Setup_st7565_zolen_128x64_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_zolen_128x64_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_zolen_128x64_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_zolen_128x64_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_zolen_128x64_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_zolen_128x64_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_zolen_128x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_zolen_128x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_zolen_128x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_zolen_128x64_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_zolen_128x64_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_zolen_128x64_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_zolen_128x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_zolen_128x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_zolen_128x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 LM6059
Controller "st7565", Display "lm6059"  [Description]
 * u8g2_Setup_st7565_lm6059_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6059_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6059_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lm6059_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6059_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6059_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lm6059_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6059_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6059_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lm6059_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6059_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6059_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lm6059_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lm6059_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lm6059_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 KS0713
Controller "st7565", Display "ks0713"  [Description]
 * u8g2_Setup_st7565_ks0713_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ks0713_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ks0713_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_ks0713_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ks0713_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ks0713_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_ks0713_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ks0713_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ks0713_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_ks0713_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ks0713_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ks0713_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_ks0713_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_ks0713_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_ks0713_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 LX12864
Controller "st7565", Display "lx12864"  [Description]
 * u8g2_Setup_st7565_lx12864_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lx12864_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lx12864_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lx12864_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lx12864_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lx12864_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lx12864_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lx12864_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lx12864_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lx12864_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lx12864_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lx12864_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_lx12864_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_lx12864_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_lx12864_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 ERC12864
Controller "st7565", Display "erc12864"  [Description]
 * u8g2_Setup_st7565_erc12864_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_erc12864_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_erc12864_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_erc12864_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_erc12864_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 ERC12864_ALT
Controller "st7565", Display "erc12864_alt"  [Description]
 * u8g2_Setup_st7565_erc12864_alt_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_alt_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_alt_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_erc12864_alt_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_alt_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_alt_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_erc12864_alt_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_alt_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_alt_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_erc12864_alt_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_alt_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_alt_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_erc12864_alt_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_erc12864_alt_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_erc12864_alt_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 NHD_C12864
Controller "st7565", Display "nhd_c12864"  [Description]
 * u8g2_Setup_st7565_nhd_c12864_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12864_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12864_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_nhd_c12864_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12864_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12864_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_nhd_c12864_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12864_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12864_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_nhd_c12864_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12864_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12864_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_nhd_c12864_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12864_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12864_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 JLX12864
Controller "st7565", Display "jlx12864"  [Description]
 * u8g2_Setup_st7565_jlx12864_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_jlx12864_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_jlx12864_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_jlx12864_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_jlx12864_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_jlx12864_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_jlx12864_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_jlx12864_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_jlx12864_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_jlx12864_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_jlx12864_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_jlx12864_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7565_jlx12864_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_jlx12864_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_jlx12864_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7565 NHD_C12832
Controller "st7565", Display "nhd_c12832"  [Description]
 * u8g2_Setup_st7565_nhd_c12832_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12832_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12832_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_st7565_nhd_c12832_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12832_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12832_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_st7565_nhd_c12832_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12832_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12832_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_st7565_nhd_c12832_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12832_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12832_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_st7565_nhd_c12832_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7565_nhd_c12832_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7565_nhd_c12832_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 512 bytes]

## UC1601 128X32
Controller "uc1601", Display "128x32"  [Description]
 * u8g2_Setup_uc1601_128x32_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1601_128x32_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1601_128x32_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_uc1601_128x32_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1601_128x32_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1601_128x32_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_uc1601_128x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1601_128x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1601_128x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_uc1601_128x32_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1601_128x32_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1601_128x32_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_uc1601_128x32_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1601_128x32_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1601_128x32_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 512 bytes]

## UC1601 128X32
Controller "uc1601", Display "128x32"  [Description]
 * u8g2_Setup_uc1601_i2c_128x32_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1601_i2c_128x32_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1601_i2c_128x32_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_uc1601_i2c_128x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1601_i2c_128x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1601_i2c_128x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]
 * u8g2_Setup_uc1601_i2c_128x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_uc1601_i2c_128x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_uc1601_i2c_128x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 512 bytes]

## ST7565 EA_DOGM132
Controller "st7565", Display "ea_dogm132"  [Description]
 * u8g2_Setup_st7565_ea_dogm132_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 136 bytes]
 * u8g2_Setup_st7565_ea_dogm132_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 272 bytes]
 * u8g2_Setup_st7565_ea_dogm132_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 544 bytes]
 * u8g2_Setup_st7565_ea_dogm132_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 136 bytes]
 * u8g2_Setup_st7565_ea_dogm132_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 272 bytes]
 * u8g2_Setup_st7565_ea_dogm132_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 544 bytes]
 * u8g2_Setup_st7565_ea_dogm132_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 136 bytes]
 * u8g2_Setup_st7565_ea_dogm132_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 272 bytes]
 * u8g2_Setup_st7565_ea_dogm132_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 544 bytes]
 * u8g2_Setup_st7565_ea_dogm132_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 136 bytes]
 * u8g2_Setup_st7565_ea_dogm132_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 272 bytes]
 * u8g2_Setup_st7565_ea_dogm132_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 544 bytes]
 * u8g2_Setup_st7565_ea_dogm132_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 136 bytes]
 * u8g2_Setup_st7565_ea_dogm132_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 272 bytes]
 * u8g2_Setup_st7565_ea_dogm132_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 544 bytes]

## ST7567 PI_132X64
Controller "st7567", Display "pi_132x64"  [Description]
 * u8g2_Setup_st7567_pi_132x64_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 136 bytes]
 * u8g2_Setup_st7567_pi_132x64_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 272 bytes]
 * u8g2_Setup_st7567_pi_132x64_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1088 bytes]
 * u8g2_Setup_st7567_pi_132x64_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 136 bytes]
 * u8g2_Setup_st7567_pi_132x64_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 272 bytes]
 * u8g2_Setup_st7567_pi_132x64_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1088 bytes]
 * u8g2_Setup_st7567_pi_132x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 136 bytes]
 * u8g2_Setup_st7567_pi_132x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 272 bytes]
 * u8g2_Setup_st7567_pi_132x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1088 bytes]

## ST7567 JLX12864
Controller "st7567", Display "jlx12864"  [Description]
 * u8g2_Setup_st7567_jlx12864_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_jlx12864_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_jlx12864_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7567_jlx12864_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_jlx12864_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_jlx12864_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7567_jlx12864_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_jlx12864_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_jlx12864_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7567 ENH_DG128064
Controller "st7567", Display "enh_dg128064"  [Description]
 * u8g2_Setup_st7567_enh_dg128064_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_enh_dg128064_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_enh_dg128064_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7567_enh_dg128064_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_enh_dg128064_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_enh_dg128064_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7567_enh_dg128064_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_enh_dg128064_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_enh_dg128064_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7567 ENH_DG128064I
Controller "st7567", Display "enh_dg128064i"  [Description]
 * u8g2_Setup_st7567_enh_dg128064i_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_enh_dg128064i_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_enh_dg128064i_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7567_enh_dg128064i_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_enh_dg128064i_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_enh_dg128064i_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7567_enh_dg128064i_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_enh_dg128064i_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_enh_dg128064i_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7567 OS12864
Controller "st7567", Display "os12864"  [Description]
 * u8g2_Setup_st7567_os12864_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_os12864_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_os12864_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7567_os12864_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_os12864_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_os12864_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7567_os12864_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_os12864_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7567_os12864_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7567 64X32
Controller "st7567", Display "64x32"  [Description]
 * u8g2_Setup_st7567_64x32_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_64x32_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_64x32_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_st7567_64x32_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_64x32_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_64x32_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_st7567_64x32_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_64x32_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_64x32_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 256 bytes]

## ST7567 HEM6432
Controller "st7567", Display "hem6432"  [Description]
 * u8g2_Setup_st7567_hem6432_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_hem6432_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_hem6432_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_st7567_hem6432_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_hem6432_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_hem6432_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_st7567_hem6432_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_hem6432_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_hem6432_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 256 bytes]

## ST7567 64X32
Controller "st7567", Display "64x32"  [Description]
 * u8g2_Setup_st7567_i2c_64x32_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_i2c_64x32_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_i2c_64x32_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_st7567_i2c_64x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_i2c_64x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_i2c_64x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_st7567_i2c_64x32_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_i2c_64x32_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_i2c_64x32_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]

## ST7567 HEM6432
Controller "st7567", Display "hem6432"  [Description]
 * u8g2_Setup_st7567_i2c_hem6432_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_i2c_hem6432_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_i2c_hem6432_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_st7567_i2c_hem6432_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_i2c_hem6432_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_i2c_hem6432_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]
 * u8g2_Setup_st7567_i2c_hem6432_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_st7567_i2c_hem6432_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7567_i2c_hem6432_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 256 bytes]

## ST7571 128X128
Controller "st7571", Display "128x128"  [Description]
 * u8g2_Setup_st7571_128x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7571_128x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7571_128x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st7571_128x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7571_128x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7571_128x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st7571_128x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7571_128x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7571_128x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## ST7571 128X128
Controller "st7571", Display "128x128"  [Description]
 * u8g2_Setup_st7571_i2c_128x128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7571_i2c_128x128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7571_i2c_128x128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st7571_i2c_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7571_i2c_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7571_i2c_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st7571_i2c_128x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7571_i2c_128x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7571_i2c_128x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## ST7586S S028HN118A
Controller "st7586s", Display "s028hn118a"  [Description]
 * u8g2_Setup_st7586s_s028hn118a_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st7586s_s028hn118a_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 768 bytes]
 * u8g2_Setup_st7586s_s028hn118a_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 6528 bytes]

## ST7586S ERC240160
Controller "st7586s", Display "erc240160"  [Description]
 * u8g2_Setup_st7586s_erc240160_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_erc240160_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_erc240160_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st7586s_erc240160_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_erc240160_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_erc240160_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st7586s_erc240160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_erc240160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_erc240160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st7586s_erc240160_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_erc240160_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_erc240160_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st7586s_erc240160_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_erc240160_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_erc240160_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 4800 bytes]

## ST7586S YMC240160
Controller "st7586s", Display "ymc240160"  [Description]
 * u8g2_Setup_st7586s_ymc240160_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_ymc240160_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_ymc240160_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st7586s_ymc240160_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_ymc240160_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_ymc240160_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st7586s_ymc240160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_ymc240160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_ymc240160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st7586s_ymc240160_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_ymc240160_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_ymc240160_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st7586s_ymc240160_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st7586s_ymc240160_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st7586s_ymc240160_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 4800 bytes]

## ST7588 JLX12864
Controller "st7588", Display "jlx12864"  [Description]
 * u8g2_Setup_st7588_jlx12864_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7588_jlx12864_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7588_jlx12864_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7588_jlx12864_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7588_jlx12864_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7588_jlx12864_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7588_jlx12864_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7588_jlx12864_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7588_jlx12864_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7588_jlx12864_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7588_jlx12864_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7588_jlx12864_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7588_jlx12864_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7588_jlx12864_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7588_jlx12864_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## ST7588 JLX12864
Controller "st7588", Display "jlx12864"  [Description]
 * u8g2_Setup_st7588_i2c_jlx12864_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7588_i2c_jlx12864_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7588_i2c_jlx12864_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7588_i2c_jlx12864_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7588_i2c_jlx12864_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7588_i2c_jlx12864_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_st7588_i2c_jlx12864_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_st7588_i2c_jlx12864_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st7588_i2c_jlx12864_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]

## ST75256 JLX256128
Controller "st75256", Display "jlx256128"  [Description]
 * u8g2_Setup_st75256_jlx256128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_jlx256128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_jlx256128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_jlx256128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_jlx256128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 4096 bytes]

## ST75256 WO256X128
Controller "st75256", Display "wo256x128"  [Description]
 * u8g2_Setup_st75256_wo256x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_wo256x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_wo256x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_wo256x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_wo256x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_wo256x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_wo256x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_wo256x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_wo256x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_wo256x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_wo256x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_wo256x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_wo256x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_wo256x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_wo256x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 4096 bytes]

## ST75256 JLX256128
Controller "st75256", Display "jlx256128"  [Description]
 * u8g2_Setup_st75256_i2c_jlx256128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_i2c_jlx256128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_i2c_jlx256128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4096 bytes]

## ST75256 WO256X128
Controller "st75256", Display "wo256x128"  [Description]
 * u8g2_Setup_st75256_i2c_wo256x128_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_wo256x128_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_wo256x128_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_i2c_wo256x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_wo256x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_wo256x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4096 bytes]
 * u8g2_Setup_st75256_i2c_wo256x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_wo256x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_wo256x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4096 bytes]

## ST75256 JLX256160
Controller "st75256", Display "jlx256160"  [Description]
 * u8g2_Setup_st75256_jlx256160_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160M
Controller "st75256", Display "jlx256160m"  [Description]
 * u8g2_Setup_st75256_jlx256160m_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160m_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160m_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160m_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160m_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160m_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160m_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160m_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160m_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160m_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160m_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160m_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160m_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160m_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160m_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160_ALT
Controller "st75256", Display "jlx256160_alt"  [Description]
 * u8g2_Setup_st75256_jlx256160_alt_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx256160_alt_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160
Controller "st75256", Display "jlx256160"  [Description]
 * u8g2_Setup_st75256_i2c_jlx256160_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160M
Controller "st75256", Display "jlx256160m"  [Description]
 * u8g2_Setup_st75256_i2c_jlx256160m_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160m_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160m_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160m_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160m_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160m_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160m_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160m_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160m_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5120 bytes]

## ST75256 JLX256160_ALT
Controller "st75256", Display "jlx256160_alt"  [Description]
 * u8g2_Setup_st75256_i2c_jlx256160_alt_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_alt_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_alt_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_alt_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_alt_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_alt_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5120 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_alt_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_alt_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx256160_alt_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5120 bytes]

## ST75256 JLX240160
Controller "st75256", Display "jlx240160"  [Description]
 * u8g2_Setup_st75256_jlx240160_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st75256_jlx240160_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st75256_jlx240160_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st75256_jlx240160_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st75256_jlx240160_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st75256_jlx240160_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st75256_jlx240160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st75256_jlx240160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st75256_jlx240160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st75256_jlx240160_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st75256_jlx240160_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st75256_jlx240160_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st75256_jlx240160_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st75256_jlx240160_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st75256_jlx240160_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 4800 bytes]

## ST75256 JLX240160
Controller "st75256", Display "jlx240160"  [Description]
 * u8g2_Setup_st75256_i2c_jlx240160_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st75256_i2c_jlx240160_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st75256_i2c_jlx240160_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st75256_i2c_jlx240160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st75256_i2c_jlx240160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st75256_i2c_jlx240160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4800 bytes]
 * u8g2_Setup_st75256_i2c_jlx240160_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_st75256_i2c_jlx240160_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_st75256_i2c_jlx240160_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4800 bytes]

## ST75256 JLX25664
Controller "st75256", Display "jlx25664"  [Description]
 * u8g2_Setup_st75256_jlx25664_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx25664_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx25664_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st75256_jlx25664_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx25664_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx25664_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st75256_jlx25664_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx25664_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx25664_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st75256_jlx25664_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx25664_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx25664_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st75256_jlx25664_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_jlx25664_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_jlx25664_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## ST75256 JLX25664
Controller "st75256", Display "jlx25664"  [Description]
 * u8g2_Setup_st75256_i2c_jlx25664_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx25664_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx25664_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st75256_i2c_jlx25664_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx25664_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx25664_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_st75256_i2c_jlx25664_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_st75256_i2c_jlx25664_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_st75256_i2c_jlx25664_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]

## ST75256 JLX172104
Controller "st75256", Display "jlx172104"  [Description]
 * u8g2_Setup_st75256_jlx172104_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_st75256_jlx172104_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_st75256_jlx172104_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2288 bytes]
 * u8g2_Setup_st75256_jlx172104_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_st75256_jlx172104_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_st75256_jlx172104_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2288 bytes]
 * u8g2_Setup_st75256_jlx172104_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_st75256_jlx172104_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_st75256_jlx172104_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2288 bytes]
 * u8g2_Setup_st75256_jlx172104_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_st75256_jlx172104_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_st75256_jlx172104_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2288 bytes]
 * u8g2_Setup_st75256_jlx172104_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_st75256_jlx172104_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_st75256_jlx172104_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2288 bytes]

## ST75256 JLX172104
Controller "st75256", Display "jlx172104"  [Description]
 * u8g2_Setup_st75256_i2c_jlx172104_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_st75256_i2c_jlx172104_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_st75256_i2c_jlx172104_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2288 bytes]
 * u8g2_Setup_st75256_i2c_jlx172104_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_st75256_i2c_jlx172104_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_st75256_i2c_jlx172104_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2288 bytes]
 * u8g2_Setup_st75256_i2c_jlx172104_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_st75256_i2c_jlx172104_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_st75256_i2c_jlx172104_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2288 bytes]

## ST75256 JLX19296
Controller "st75256", Display "jlx19296"  [Description]
 * u8g2_Setup_st75256_jlx19296_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st75256_jlx19296_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st75256_jlx19296_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2304 bytes]
 * u8g2_Setup_st75256_jlx19296_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st75256_jlx19296_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st75256_jlx19296_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2304 bytes]
 * u8g2_Setup_st75256_jlx19296_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st75256_jlx19296_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st75256_jlx19296_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2304 bytes]
 * u8g2_Setup_st75256_jlx19296_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st75256_jlx19296_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st75256_jlx19296_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2304 bytes]
 * u8g2_Setup_st75256_jlx19296_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st75256_jlx19296_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st75256_jlx19296_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2304 bytes]

## ST75256 JLX19296
Controller "st75256", Display "jlx19296"  [Description]
 * u8g2_Setup_st75256_i2c_jlx19296_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st75256_i2c_jlx19296_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st75256_i2c_jlx19296_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 2304 bytes]
 * u8g2_Setup_st75256_i2c_jlx19296_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st75256_i2c_jlx19296_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st75256_i2c_jlx19296_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2304 bytes]
 * u8g2_Setup_st75256_i2c_jlx19296_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_st75256_i2c_jlx19296_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_st75256_i2c_jlx19296_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2304 bytes]

## ST75320 JLX320240
Controller "st75320", Display "jlx320240"  [Description]
 * u8g2_Setup_st75320_jlx320240_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st75320_jlx320240_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st75320_jlx320240_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st75320_jlx320240_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st75320_jlx320240_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st75320_jlx320240_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st75320_jlx320240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st75320_jlx320240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st75320_jlx320240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st75320_jlx320240_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st75320_jlx320240_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st75320_jlx320240_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st75320_jlx320240_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st75320_jlx320240_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st75320_jlx320240_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 9600 bytes]

## ST75320 JLX320240
Controller "st75320", Display "jlx320240"  [Description]
 * u8g2_Setup_st75320_i2c_jlx320240_1(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st75320_i2c_jlx320240_2(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st75320_i2c_jlx320240_f(u8g2, rotation, u8x8_byte_sw_i2c, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st75320_i2c_jlx320240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st75320_i2c_jlx320240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st75320_i2c_jlx320240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_st75320_i2c_jlx320240_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_st75320_i2c_jlx320240_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_st75320_i2c_jlx320240_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 9600 bytes]

## NT7534 TG12864R
Controller "nt7534", Display "tg12864r"  [Description]
 * u8g2_Setup_nt7534_tg12864r_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_nt7534_tg12864r_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_nt7534_tg12864r_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_nt7534_tg12864r_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_nt7534_tg12864r_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_nt7534_tg12864r_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_nt7534_tg12864r_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_nt7534_tg12864r_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_nt7534_tg12864r_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## IST3020 ERC19264
Controller "ist3020", Display "erc19264"  [Description]
 * u8g2_Setup_ist3020_erc19264_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ist3020_erc19264_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_ist3020_erc19264_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ist3020_erc19264_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ist3020_erc19264_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_ist3020_erc19264_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1536 bytes]
 * u8g2_Setup_ist3020_erc19264_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ist3020_erc19264_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_ist3020_erc19264_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1536 bytes]

## IST7920 128X128
Controller "ist7920", Display "128x128"  [Description]
 * u8g2_Setup_ist7920_128x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ist7920_128x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ist7920_128x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ist7920_128x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ist7920_128x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ist7920_128x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ist7920_128x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ist7920_128x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ist7920_128x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## SBN1661 122X32
Controller "sbn1661", Display "122x32"  [Description]
 * u8g2_Setup_sbn1661_122x32_1(u8g2, rotation, u8x8_byte_sed1520, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sbn1661_122x32_2(u8g2, rotation, u8x8_byte_sed1520, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sbn1661_122x32_f(u8g2, rotation, u8x8_byte_sed1520, uC specific) [full framebuffer, size = 512 bytes]

## SED1520 122X32
Controller "sed1520", Display "122x32"  [Description]
 * u8g2_Setup_sed1520_122x32_1(u8g2, rotation, u8x8_byte_sed1520, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_sed1520_122x32_2(u8g2, rotation, u8x8_byte_sed1520, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_sed1520_122x32_f(u8g2, rotation, u8x8_byte_sed1520, uC specific) [full framebuffer, size = 512 bytes]

## KS0108 128X64
Controller "ks0108", Display "128x64"  [Description]
 * u8g2_Setup_ks0108_128x64_1(u8g2, rotation, u8x8_byte_ks0108, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ks0108_128x64_2(u8g2, rotation, u8x8_byte_ks0108, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ks0108_128x64_f(u8g2, rotation, u8x8_byte_ks0108, uC specific) [full framebuffer, size = 1024 bytes]

## KS0108 ERM19264
Controller "ks0108", Display "erm19264"  [Description]
 * u8g2_Setup_ks0108_erm19264_1(u8g2, rotation, u8x8_byte_ks0108, uC specific) [page buffer, size = 192 bytes]
 * u8g2_Setup_ks0108_erm19264_2(u8g2, rotation, u8x8_byte_ks0108, uC specific) [page buffer, size = 384 bytes]
 * u8g2_Setup_ks0108_erm19264_f(u8g2, rotation, u8x8_byte_ks0108, uC specific) [full framebuffer, size = 1536 bytes]

## LC7981 160X80
Controller "lc7981", Display "160x80"  [Description]
 * u8g2_Setup_lc7981_160x80_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_lc7981_160x80_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_lc7981_160x80_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1600 bytes]

## LC7981 160X160
Controller "lc7981", Display "160x160"  [Description]
 * u8g2_Setup_lc7981_160x160_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_lc7981_160x160_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_lc7981_160x160_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 3200 bytes]

## LC7981 240X128
Controller "lc7981", Display "240x128"  [Description]
 * u8g2_Setup_lc7981_240x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_lc7981_240x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_lc7981_240x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 3840 bytes]

## LC7981 240X64
Controller "lc7981", Display "240x64"  [Description]
 * u8g2_Setup_lc7981_240x64_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_lc7981_240x64_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_lc7981_240x64_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1920 bytes]

## T6963 240X128
Controller "t6963", Display "240x128"  [Description]
 * u8g2_Setup_t6963_240x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_t6963_240x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_t6963_240x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 3840 bytes]

## T6963 240X64
Controller "t6963", Display "240x64"  [Description]
 * u8g2_Setup_t6963_240x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_t6963_240x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_t6963_240x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1920 bytes]

## T6963 256X64
Controller "t6963", Display "256x64"  [Description]
 * u8g2_Setup_t6963_256x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_t6963_256x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_t6963_256x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## T6963 128X64
Controller "t6963", Display "128x64"  [Description]
 * u8g2_Setup_t6963_128x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_t6963_128x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_t6963_128x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## T6963 128X64_ALT
Controller "t6963", Display "128x64_alt"  [Description]
 * u8g2_Setup_t6963_128x64_alt_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_t6963_128x64_alt_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_t6963_128x64_alt_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## T6963 160X80
Controller "t6963", Display "160x80"  [Description]
 * u8g2_Setup_t6963_160x80_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_t6963_160x80_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_t6963_160x80_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1600 bytes]

## SSD1322 NHD_256X64
Controller "ssd1322", Display "nhd_256x64"  [Description]
 * u8g2_Setup_ssd1322_nhd_256x64_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2048 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 512 bytes]
 * u8g2_Setup_ssd1322_nhd_256x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2048 bytes]

## SSD1322 NHD_128X64
Controller "ssd1322", Display "nhd_128x64"  [Description]
 * u8g2_Setup_ssd1322_nhd_128x64_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 1024 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 256 bytes]
 * u8g2_Setup_ssd1322_nhd_128x64_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 1024 bytes]

## SSD1606 172X72
Controller "ssd1606", Display "172x72"  [Description]
 * u8g2_Setup_ssd1606_172x72_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_ssd1606_172x72_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_ssd1606_172x72_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 1584 bytes]
 * u8g2_Setup_ssd1606_172x72_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_ssd1606_172x72_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_ssd1606_172x72_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 1584 bytes]
 * u8g2_Setup_ssd1606_172x72_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 176 bytes]
 * u8g2_Setup_ssd1606_172x72_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 352 bytes]
 * u8g2_Setup_ssd1606_172x72_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 1584 bytes]

## SSD1607 200X200
Controller "ssd1607", Display "200x200"  [Description]
 * u8g2_Setup_ssd1607_200x200_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 200 bytes]
 * u8g2_Setup_ssd1607_200x200_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ssd1607_200x200_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 5000 bytes]
 * u8g2_Setup_ssd1607_200x200_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 200 bytes]
 * u8g2_Setup_ssd1607_200x200_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ssd1607_200x200_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 5000 bytes]
 * u8g2_Setup_ssd1607_200x200_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 200 bytes]
 * u8g2_Setup_ssd1607_200x200_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ssd1607_200x200_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5000 bytes]

## SSD1607 GD_200X200
Controller "ssd1607", Display "gd_200x200"  [Description]
 * u8g2_Setup_ssd1607_gd_200x200_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 200 bytes]
 * u8g2_Setup_ssd1607_gd_200x200_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ssd1607_gd_200x200_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 5000 bytes]
 * u8g2_Setup_ssd1607_gd_200x200_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 200 bytes]
 * u8g2_Setup_ssd1607_gd_200x200_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ssd1607_gd_200x200_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 5000 bytes]
 * u8g2_Setup_ssd1607_gd_200x200_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 200 bytes]
 * u8g2_Setup_ssd1607_gd_200x200_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ssd1607_gd_200x200_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5000 bytes]

## SSD1607 WS_200X200
Controller "ssd1607", Display "ws_200x200"  [Description]
 * u8g2_Setup_ssd1607_ws_200x200_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 200 bytes]
 * u8g2_Setup_ssd1607_ws_200x200_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ssd1607_ws_200x200_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 5000 bytes]
 * u8g2_Setup_ssd1607_ws_200x200_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 200 bytes]
 * u8g2_Setup_ssd1607_ws_200x200_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ssd1607_ws_200x200_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 5000 bytes]
 * u8g2_Setup_ssd1607_ws_200x200_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 200 bytes]
 * u8g2_Setup_ssd1607_ws_200x200_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 400 bytes]
 * u8g2_Setup_ssd1607_ws_200x200_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 5000 bytes]

## IL3820 296X128
Controller "il3820", Display "296x128"  [Description]
 * u8g2_Setup_il3820_296x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 296 bytes]
 * u8g2_Setup_il3820_296x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 592 bytes]
 * u8g2_Setup_il3820_296x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4736 bytes]
 * u8g2_Setup_il3820_296x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 296 bytes]
 * u8g2_Setup_il3820_296x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 592 bytes]
 * u8g2_Setup_il3820_296x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4736 bytes]
 * u8g2_Setup_il3820_296x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 296 bytes]
 * u8g2_Setup_il3820_296x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 592 bytes]
 * u8g2_Setup_il3820_296x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4736 bytes]

## IL3820 V2_296X128
Controller "il3820", Display "v2_296x128"  [Description]
 * u8g2_Setup_il3820_v2_296x128_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 296 bytes]
 * u8g2_Setup_il3820_v2_296x128_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 592 bytes]
 * u8g2_Setup_il3820_v2_296x128_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 4736 bytes]
 * u8g2_Setup_il3820_v2_296x128_1(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 296 bytes]
 * u8g2_Setup_il3820_v2_296x128_2(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [page buffer, size = 592 bytes]
 * u8g2_Setup_il3820_v2_296x128_f(u8g2, rotation, u8x8_byte_3wire_sw_spi, uC specific) [full framebuffer, size = 4736 bytes]
 * u8g2_Setup_il3820_v2_296x128_1(u8g2, rotation, uC specific, uC specific) [page buffer, size = 296 bytes]
 * u8g2_Setup_il3820_v2_296x128_2(u8g2, rotation, uC specific, uC specific) [page buffer, size = 592 bytes]
 * u8g2_Setup_il3820_v2_296x128_f(u8g2, rotation, uC specific, uC specific) [full framebuffer, size = 4736 bytes]

## SED1330 240X128
Controller "sed1330", Display "240x128"  [Description]
 * u8g2_Setup_sed1330_240x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_sed1330_240x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_sed1330_240x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_sed1330_240x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_sed1330_240x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_sed1330_240x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 3840 bytes]

## RA8835 NHD_240X128
Controller "ra8835", Display "nhd_240x128"  [Description]
 * u8g2_Setup_ra8835_nhd_240x128_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_ra8835_nhd_240x128_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_ra8835_nhd_240x128_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 3840 bytes]
 * u8g2_Setup_ra8835_nhd_240x128_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 240 bytes]
 * u8g2_Setup_ra8835_nhd_240x128_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 480 bytes]
 * u8g2_Setup_ra8835_nhd_240x128_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 3840 bytes]

## RA8835 320X240
Controller "ra8835", Display "320x240"  [Description]
 * u8g2_Setup_ra8835_320x240_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_ra8835_320x240_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_ra8835_320x240_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 9600 bytes]
 * u8g2_Setup_ra8835_320x240_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_ra8835_320x240_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 640 bytes]
 * u8g2_Setup_ra8835_320x240_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 9600 bytes]

## MAX7219 64X8
Controller "max7219", Display "64x8"  [Description]
 * u8g2_Setup_max7219_64x8_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_max7219_64x8_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 128 bytes]
 * u8g2_Setup_max7219_64x8_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 64 bytes]

## MAX7219 32X8
Controller "max7219", Display "32x8"  [Description]
 * u8g2_Setup_max7219_32x8_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 32 bytes]
 * u8g2_Setup_max7219_32x8_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 64 bytes]
 * u8g2_Setup_max7219_32x8_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 32 bytes]

## MAX7219 8X8
Controller "max7219", Display "8x8"  [Description]
 * u8g2_Setup_max7219_8x8_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 8 bytes]
 * u8g2_Setup_max7219_8x8_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 16 bytes]
 * u8g2_Setup_max7219_8x8_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 8 bytes]

## S1D15E06 160100
Controller "s1d15e06", Display "160100"  [Description]
 * u8g2_Setup_s1d15e06_160100_1(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_s1d15e06_160100_2(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_s1d15e06_160100_f(u8g2, rotation, u8x8_byte_4wire_sw_spi, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_s1d15e06_160100_1(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_s1d15e06_160100_2(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_s1d15e06_160100_f(u8g2, rotation, u8x8_byte_8bit_6800mode, uC specific) [full framebuffer, size = 2080 bytes]
 * u8g2_Setup_s1d15e06_160100_1(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 160 bytes]
 * u8g2_Setup_s1d15e06_160100_2(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [page buffer, size = 320 bytes]
 * u8g2_Setup_s1d15e06_160100_f(u8g2, rotation, u8x8_byte_8bit_8080mode, uC specific) [full framebuffer, size = 2080 bytes]

## A2PRINTER 384X240
Controller "a2printer", Display "384x240"  [Description]

# Links
 * [U8g2 C Setup](u8g2setupc)
 * [U8g2 C++ Setup](u8g2setupcpp)
 * [U8x8 Function Reference](u8x8reference)
 * [U8x8 C Setup](u8x8setupc)
 * [U8x8 C++ Setup](u8x8setupcpp)
 
