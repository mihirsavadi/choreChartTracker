
[tocstart]: # (toc start)

  * [Introduction to U8log](#introduction-to-u8log)
  * [Examples](#examples)
    * [U8x8 with Automatic Display Update](#u8x8-with-automatic-display-update)
    * [U8g2 with Automatic Display Update](#u8g2-with-automatic-display-update)
    * [U8g2 Minimal Example with Automatic Display Update](#u8g2-minimal-example-with-automatic-display-update)
    * [U8g2 with Manual Update](#u8g2-with-manual-update)
  * [Reference](#reference)
    * [begin](#begin)
    * [Init](#init)
    * [print](#print)
    * [SetCallback](#setcallback)
    * [setLineHeightOffset](#setlineheightoffset)
    * [setRedrawMode](#setredrawmode)
    * [writeString](#writestring)

[tocend]: # (toc end)

# Introduction to U8log

U8log is an extension to U8g2 and U8x8. It implements a text window with 
automatic vertical scrolling. Text is written to the current cursor position
within the text window. The cursor position is modified by special character 
commands:

| Char | Decimal | Description |
|---|---|---|
| `\n` | 10 | Goto first position of the next line.  |
| `\r` | 13 | Goto first position of the same line.  |
| `\t` | 9 | Jump to the next tab position.  |
| `\f` | 12 | Clear the screen and goto upper left corner.  |


U8log can be used for:
 * Output of boot/startup information
 * Error logging
 * Debugging
 * Output of sensor values
 

Features:
 * Vertical scolling
 * All features of Arduino `Serial.print` are supported
 * Automatic or manual display update
 
Implementation:
 * `class U8G2LOG` for U8g2
 * `class U8X8LOG` for U8x8
 * `u8x8_t`  struct  with plain c API
 
# Examples

## U8x8 with Automatic Display Update

For the automatic display update, connect the U8x8log object with the U8x8 object.
No further access to U8x8 is required. Just print data to U8x8log. Refresh of 
the screen is handled by U8x8log automatically.

Steps are:

 1. Create U8x8 object
 2. Create U8x8log object
 3. Setup static memory for the text window
 4. U8x8.begin()
 5. U8x8log.begin(): This will connect to U8x8 and assign the static memory
 6. Use U8x8log to print to the display

The size of the static memory depends on the number of chars which may fit on
the display. For U8x8 just devide the display width and height by 8 to get
the corresponding width and height for the text window.

```
// U8x8 constructor for your display
U8X8_SSD1306_128X64_NONAME_4W_HW_SPI u8x8(/* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);

// Create a U8x8log object
U8X8LOG u8x8log;


// Define the dimension of the U8x8log window
#define U8LOG_WIDTH 16
#define U8LOG_HEIGHT 8

// Allocate static memory for the U8x8log window
uint8_t u8log_buffer[U8LOG_WIDTH*U8LOG_HEIGHT];

void setup(void)
{
  // Startup U8x8
  u8x8.begin();
  
  // Set a suitable font. This font will be used for U8x8log
  u8x8.setFont(u8x8_font_chroma48medium8_r);
  
  // Start U8x8log, connect to U8x8, set the dimension and assign the static memory
  u8x8log.begin(u8x8, U8LOG_WIDTH, U8LOG_HEIGHT, u8log_buffer);
  
  // Set the U8x8log redraw mode
  u8x8log.setRedrawMode(1);		// 0: Update screen with newline, 1: Update screen for every char  
}

void loop(void) {
  // Print a number on the U8x8log window
  // The display will be refreshed
  u8x8log.print(millis());
  // Print a new line, scroll the text window content if required
  // Refresh the screen
  u8x8log.print("\n");
  
  delay(500);
}
```

This example is available as .ino file
[here](https://github.com/olikraus/u8g2/blob/master/sys/arduino/u8x8/Terminal/Terminal.ino).

## U8g2 with Automatic Display Update

This is almost identical to the previous example:
Connect the U8g2log object with the U8g2 object.
No further access to U8g2 is required. Just print data to U8g2log. Refresh of 
the screen is handled by U8g2log automatically.

Steps are:

 1. Create U8g2 object
 2. Create U8g2log object
 3. Setup static memory for the text window
 4. U8g2.begin()
 5. U8g2log.begin(): This will connect to U8g2 and assign the static memory
 6. Use U8g2log to print to the display

The size of the static memory depends on the number of chars which may fit on
the display and the font, which is used for the chars. To simplify the calculation, 
it is suggested to use monospaced fonts only. A list of monospaced fonts
is available [here](fntlistmono).

Example: 
 * Assume 128x64 OLED display and font `u8g2_font_tom_thumb_4x6_mf`
 * Chars in the font `u8g2_font_tom_thumb_4x6_mf` all have a height of 6 and width of 4 pixel.
 * Width for the text window: 128 / 4 = 32 chars
 * Height for the text window: 64 / 6 = 10 chars


```
// U8g2 constructor
U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);

// Create a U8g2log object
U8G2LOG u8g2log;

// assume 4x6 font, define width and height
#define U8LOG_WIDTH 32
#define U8LOG_HEIGHT 10

// allocate memory
uint8_t u8log_buffer[U8LOG_WIDTH*U8LOG_HEIGHT];

void setup(void) {
  u8g2.begin();    
  u8g2.setFont(u8g2_font_tom_thumb_4x6_mf);	// set the font for the terminal window
  u8g2log.begin(u8g2, U8LOG_WIDTH, U8LOG_HEIGHT, u8log_buffer);	// connect to u8g2, assign buffer
  u8g2log.setLineHeightOffset(0);	// set extra space between lines in pixel, this can be negative
  u8g2log.setRedrawMode(0);		// 0: Update screen with newline, 1: Update screen for every char  
}

void loop(void) {
  // Print a number on the U8g2log window
  u8g2log.print(millis());
  // Print a new line, scroll the text window content if required
  // Refresh the screen
  u8g2log.print("\n");
  
  delay(500);
}
```

For U8g2 it is better to keep `u8g2log.setRedrawMode(0)` at the default value 0, which
refreshes the display only with a newline char. 

This example is available as .ino file
[here](https://github.com/olikraus/u8g2/blob/master/sys/arduino/u8g2_page_buffer/Terminal/Terminal.ino).

## U8g2 Minimal Example with Automatic Display Update
 
 Without further description, this is just a minimal U8g2 example:
 
```
U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);
U8G2LOG u8g2log;
uint8_t u8log_buffer[32*10];

void setup(void) {
  u8g2.begin();    
  u8g2.setFont(u8g2_font_tom_thumb_4x6_mf);	// set the font for the terminal window
  u8g2log.begin(u8g2, 32, 10, u8log_buffer);	// connect to u8g2, assign buffer
}

void loop(void) {
  u8g2log.print(millis());
  u8g2log.print("\n");
  
  delay(500);
}
```

## U8g2 with Manual Update

This will create an independent U8log object, which can be placed along with 
other graphics and text on the screen. The U8log object can have any size 
and can be placed at any position on the screen.

The main difference to the previous examples is:
 * `u8g2log.begin` does not receive `u8g2` object as first argument.
 * Use `u8g2.drawLog()` to draw the u8g2log object.


```
U8G2_SSD1306_128X64_NONAME_1_4W_HW_SPI u8g2(U8G2_R0, /* cs=*/ 10, /* dc=*/ 9, /* reset=*/ 8);

#define U8LOG_WIDTH 20
#define U8LOG_HEIGHT 6
uint8_t u8log_buffer[U8LOG_WIDTH*U8LOG_HEIGHT];
U8G2LOG u8g2log;

void setup(void) {
  u8g2.begin();  
  u8g2log.begin(U8LOG_WIDTH, U8LOG_HEIGHT, u8log_buffer);
}

void loop(void) {
  u8g2log.print(millis());
  u8g2log.print("\n");

  // print the log window together with a title
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_6x13_tr);		// font for the title
    u8g2.setCursor(0, 13);			// title position on the display
    u8g2.print("Log Output: ");			// output title
    u8g2.setFont(u8g2_font_5x7_tr);		// set the font for the terminal window
    u8g2.drawLog(0, 23, u8g2log);		// draw the terminal window on the display
  } while ( u8g2.nextPage() );

  delay(500);
}
```

This example is available as .ino file
[here](https://github.com/olikraus/u8g2/blob/master/sys/arduino/u8g2_page_buffer/DrawLog/DrawLog.ino).


# Reference

## begin
  * **C++ Prototype:**
```
    bool U8X8LOG::begin(class U8X8 &u8x8, uint8_t width, uint8_t height, uint8_t *buf)
    bool U8X8LOG::begin(uint8_t width, uint8_t height, uint8_t *buf)
    bool U8G2LOG::begin(class U8G2 &u8g2, uint8_t width, uint8_t height, uint8_t *buf) 
    bool U8G2LOG::begin(uint8_t width, uint8_t height, uint8_t *buf)
```
  * **Description:** Assign memory for a log window to the u8log class. Some 
variants also assign the u8log class to u8x8 or u8g2 object for automatic refresh.
  * **Arguments:**
    * `u8x8`: U8x8 object.
    * `u8g2`: U8g2 object.
    * `width`: Width of the log window in characters.
    * `height`: Height of the log window in characters.
    * `buf`: Pointer to a memory area of size `width*height`
  * **Returns:** Always returns 1/true.
  * **See also:** [init](u8logreference#init)
  * **Example:**
```
#define U8LOG_WIDTH 20
#define U8LOG_HEIGHT 6
uint8_t u8log_buffer[U8LOG_WIDTH*U8LOG_HEIGHT];
U8G2LOG u8g2log;

void setup(void) {
  u8g2.begin();  
  u8g2log.begin(U8LOG_WIDTH, U8LOG_HEIGHT, u8log_buffer);
}
```

## Init
  * **C Prototype:**
```
void u8log_Init(u8log_t *u8log, uint8_t width, uint8_t height, uint8_t *buf)
```
  * **Description:** Init a u8log structure with a buffer of the given dimension.
  * **Arguments:**
    * `u8log`: A pointer to the u8log structure..
    * `width`: Width of the log window in characters.
    * `height`: Height of the log window in characters.
    * `buf`: Pointer to a memory area of size `width*height`
  * **Returns:** -
  * **See also:** [begin](u8logreference#begin) 
  * **Example:**
```
u8log_t u8log;
#define U8LOG_WIDTH 16
#define U8LOG_HEIGHT 8
uint8_t u8log_buffer[U8LOG_WIDTH*U8LOG_HEIGHT];
...
   u8log_Init(&u8log, U8LOG_WIDTH, U8LOG_HEIGHT, u8log_buffer);
```

## print
  * **C++ Prototype:**
```
void U8X8LOG::print(...)
void U8G2LOG::print(...)
```
  * **Description:** Use the Arduino `print` function to print text or values to the u8log terminal. 
All features of the Arduino `print` function are supported, including the F() make and 
printing of values.
  * **Arguments:**
    * See Arduino specification for `print`.
  * **Returns:** -
  * **See also:**  [https://www.arduino.cc/reference/en/language/functions/communication/serial/print/](https://www.arduino.cc/reference/en/language/functions/communication/serial/print/)

## SetCallback
  * **C Prototype:**
```
void u8log_SetCallback(u8log_t *u8log, u8log_cb cb, void *aux_data)
```
  * **Description:** Connect u8log structure to u8x8 or u8g2 structure.
  * **Arguments:**
    * `u8log`: A pointer to the u8log structure.
    * `cb`: Callback function  for display refresh. This `u8log_u8x8_cb` for u8x8 or `u8log_u8g2_cb` for u8g2.
    * `aux_data`: The address of the u8x8 structure or the address of the u8g2 structure.
  * **Returns:** -
  * **See also:** 
  

## setLineHeightOffset
  * **C++ Prototype:**
```
void U8G2LOG::setLineHeightOffset(int8_t line_height_offset)
```
  * **C Prototype:**
```
void u8log_SetLineHeightOffset(u8log_t *u8log, int8_t line_height_offset)
```
  * **Description:** Extend or shrink the line spacing of the log window for U8g2.
  * **Arguments:**
    * `u8log`: A pointer to the u8log structure.
    * `line_height_offset`: A positive or negative value, which is added to the line offset for U8g2.
  * **Returns:** -
  * **See also:** 

## setRedrawMode
  * **C++ Prototype:**
```
void U8X8LOG::setRedrawMode(uint8_t is_redraw_line_for_each_char)
void U8G2LOG::setRedrawMode(uint8_t is_redraw_line_for_each_char)
```
  * **C Prototype:**
```
void u8log_SetRedrawMode(u8log_t *u8log, uint8_t is_redraw_line_for_each_char)
```
  * **Description:** Define the refresh mode if the u8log is connected to U8g2 or U8x8.
Due to the slower refresh, it is suggested to use mode 0 for U8g2. U8x8 will work with both modes.
  * **Arguments:**
    * `u8log`: A pointer to the u8log structure.
    * `is_redraw_line_for_each_char`: The refresh mode. 0: Refresh only with every newline, 1: Refresh with every char.
  * **Returns:** -
  * **See also:** 
  
## writeString
  * **C++ Prototype:**
```
void U8X8LOG::writeString(const char *s)
void U8G2LOG::writeString(const char *s)
```
  * **C Prototype:**
```
void u8log_WriteString(u8log_t *u8log, const char *s)
```
  * **Description:** Write string s to the u8log terminal.
  * **Arguments:**
    * `u8log`: A pointer to the u8log structure.
    * `s`: A pointer to a`'\0'` terminated C string.  
  * **Returns:** -
  * **See also:** 
  

