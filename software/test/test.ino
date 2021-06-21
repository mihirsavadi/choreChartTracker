/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
*********/

// #include "Wire.h"
#include <U8g2lib.h>

// TwoWire i2c = TwoWire(0);

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2 = 
            U8G2_SSD1306_128X64_NONAME_F_HW_I2C(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
 
void setup() {

  u8g2.begin();

  //clear the buffer and set the font for startup report outs
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_9x18_tr);

  u8g2.drawStr(0, 25, "STARTING UP!");
  u8g2.sendBuffer();
  
  // i2c.begin(21, 22, 400000);
  // Serial.begin(115200);
  // Serial.println("\nI2C Scanner");
}
 
void loop() {
  // byte error, address;
  // int nDevices;
  // Serial.println("Scanning...");
  // nDevices = 0;
  // for(address = 1; address < 127; address++ ) {
  //   i2c.beginTransmission(address);
  //   error = i2c.endTransmission();
  //   Serial.println(error);
  //   if (error == 0) {
  //     Serial.print("I2C device found at address 0x");
  //     if (address<16) {
  //       Serial.print("0");
  //     }
  //     Serial.println(address,HEX);
  //     nDevices++;
  //   }
  //   else if (error==4) {
  //     Serial.print("Unknow error at address 0x");
  //     if (address<16) {
  //       Serial.print("0");
  //     }
  //     Serial.println(address,HEX);
  //   }    
  // }
  // if (nDevices == 0) {
  //   Serial.println("No I2C devices found\n");
  // }
  // else {
  //   Serial.println("done\n");
  // }
  // delay(5000);          
}