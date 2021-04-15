#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>
#include <Adafruit_VL53L0X.h>

#include "choreChartTracker.hpp"
// #include <choreChartTracker.hpp>

//macros to store number of chores and chore doers, which is fixed based on hardware
#define CHORE_QTY 4
#define DOER_QTY 4

Adafruit_VL53L0X sensor0 = Adafruit_VL53L0X();
VL53L0X_RangingMeasurementData_t measure0;
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  Serial.begin(9600);

  u8g2.begin();

  tofUnit one; 
  one.choreName = "wash";
  one.xShutPort = 0;
  tofUnit two;
  two.choreName = "clean";
  two.xShutPort = 1;
  std::vector<tofUnit> ToFarray;
  ToFarray.push_back(one);
  ToFarray.push_back(two);

  choreDoer uno;
  uno.name = "bob";
  uno.lowerBound = 1;
  uno.upperBound = 2;
  choreDoer dos;
  dos.name = "steve";
  dos.lowerBound = 3;
  dos.upperBound = 4;
  std::vector<choreDoer> choreDoers;
  choreDoers.push_back(uno);
  choreDoers.push_back(dos);

  choreChartTracker tracker = choreChartTracker(ToFarray, choreDoers);

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(10);
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(10);
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);

  if(!sensor0.begin(0x30)) {
    Serial.println(F("Failed to boot first VL53L0X"));
    while(1);
  }
}

void loop() {

  u8g2.clearBuffer();					// clear the internal memory
  u8g2.setFont(u8g2_font_tenstamps_mf);	// choose a suitable font
  sensor0.rangingTest(&measure0, false);
  char str[100];
  sprintf(str, "%d", measure0.RangeMilliMeter);
  if(measure0.RangeStatus != 4) {     // if not out of range
    u8g2.drawStr(0, 50, str);
  } else {
    u8g2.drawStr(0, 50, "Out of range");
  }
  u8g2.sendBuffer();
  delay(50);

}