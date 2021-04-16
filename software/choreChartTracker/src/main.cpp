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

  tofUnit ToFarray[4];
  ToFarray[0].choreName = "dishes";
  ToFarray[0].xShutPort = 0x30;
  ToFarray[1].choreName = "emptyDishWasher";
  ToFarray[1].xShutPort = 0x31;
  ToFarray[2].choreName = "trash";
  ToFarray[2].xShutPort = 0x32;
  ToFarray[3].choreName = "recycle";
  ToFarray[3].xShutPort = 0x33;

  choreDoer choreDoers[4];
  choreDoers[0].name = "Lucas";
  choreDoers[0].lowerBound = 1;
  choreDoers[0].upperBound = 2;
  choreDoers[1].name = "Mihir";
  choreDoers[1].lowerBound = 3;
  choreDoers[1].upperBound = 4;
  choreDoers[2].name = "Nathan";
  choreDoers[2].lowerBound = 5;
  choreDoers[2].upperBound = 6;
  choreDoers[3].name = "Vignesh";
  choreDoers[3].lowerBound = 7;
  choreDoers[3].upperBound = 8;

  while(1)
  {

  }
}

//dont use this, use while(1) in setup. this just keeps everything in the same
// scope so code can be cleaner
void loop() {}