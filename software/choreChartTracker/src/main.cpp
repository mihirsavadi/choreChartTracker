#include <Arduino.h>
#include <U8g2lib.h>

#include "choreChartTracker.hpp"



//macros to store number of chores and chore doers, which is fixed based on hardware
#define CHORE_QTY 4
#define DOER_QTY 4

Adafruit_VL53L0X sensor0 = Adafruit_VL53L0X();
VL53L0X_RangingMeasurementData_t measure0;

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  Serial.begin(9600);
  Serial.println("poop");

  u8g2.begin();

  tofUnit tof_0; 
  tof_0.choreName = "dishes";
  tof_0.xShutPort = 0x30;
  tofUnit tof_1;
  tof_1.choreName = "emptyDishWasher";
  tof_1.xShutPort = 0x31;
  tofUnit tof_2;
  tof_2.choreName = "trash";
  tof_2.xShutPort = 0x32;
  tofUnit tof_3;
  tof_3.choreName = "recycle";
  tof_3.xShutPort = 0x33;
  std::vector<tofUnit> ToFarray;
  ToFarray.push_back(tof_0);
  ToFarray.push_back(tof_1);
  ToFarray.push_back(tof_2);
  ToFarray.push_back(tof_3);

  choreDoer doer_0;
  doer_0.name = "Lucas";
  doer_0.lowerBound = 1;
  doer_0.upperBound = 2;
  choreDoer doer_1;
  doer_1.name = "Mihir";
  doer_1.lowerBound = 3;
  doer_1.upperBound = 4;
  choreDoer doer_2;
  doer_2.name = "Nathan";
  doer_2.lowerBound = 5;
  doer_2.upperBound = 6;
  choreDoer doer_3;
  doer_3.name = "Vignesh";
  doer_3.lowerBound = 7;
  doer_3.upperBound = 8;
  std::vector<choreDoer> choreDoers;
  choreDoers.push_back(doer_0);
  choreDoers.push_back(doer_1);
  choreDoers.push_back(doer_2);
  choreDoers.push_back(doer_3);

  // choreChartTracker tracker = choreChartTracker(ToFarray, choreDoers);

  // delay(5000);

  // u8g2.clearBuffer();

  // bool trackerErrorFlag;
  // std::string trackerErrorMessage;
  // tracker.getError(trackerErrorFlag, trackerErrorMessage);
  // u8g2.drawStr(0, 50, "error flag: " + (trackerErrorFlag)?"true":"false" );
  // if (trackerErrorFlag)
  // {
  //   u8g2.drawStr(0, 50, trackerErrorMessage.c_str());
  // }

  // u8g2.sendBuffer();

  // pinMode(13, OUTPUT);
  // bool trackerErrorFlag;
  // std::string trackerErrorMessage;
  // tracker.getError(trackerErrorFlag, trackerErrorMessage);
  // u8g2.drawStr(0, 50, "error flag: " + (trackerErrorFlag)?"true":"false" );
  // if (trackerErrorFlag)
  // {
  //  digitalWrite(13, HIGH);
  // }

  while(1)
  {
    
  }
}

//dont use this, use while(1) in setup. this just keeps everything in the same
// scope so code can be cleaner
void loop() {}