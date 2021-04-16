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

  delay(5000);

  Serial.begin(9600);
  Serial.println("poop");

  u8g2.begin();

  tofUnit ToFarray[4];
  ToFarray[0].choreName = "dishes";
  ToFarray[0].address = 0x30;
  ToFarray[0].xShutPort = 0;
  ToFarray[1].choreName = "emptyDishWasher";
  ToFarray[1].address = 0x31;
  ToFarray[1].xShutPort = 1;
  ToFarray[2].choreName = "trash";
  ToFarray[2].address = 0x32;
  ToFarray[2].xShutPort = 2;
  ToFarray[3].choreName = "recycle";
  ToFarray[3].address = 0x33;
  ToFarray[3].xShutPort = 3;

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

  delay(5000);

  Serial.println("starting constructor");
  choreChartTracker tracker(ToFarray, 4, choreDoers, 4);
  Serial.println("done constructor");

  String errorDescription;
  bool errorFlag = tracker.getError(errorDescription);

  Serial.println((errorFlag) ? "Error Flag High" : "Error Flag Low");
  if (errorFlag)
  {
    Serial.println(errorDescription);
  }

  while(1)
  {

    // Serial.println(String(tracker.getToFreading(0)) + "\t" + 
    //                String(tracker.getToFreading(1)) + "\t" +
    //                String(tracker.getToFreading(2)) + "\t" +
    //                String(tracker.getToFreading(3)));

    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_9x18_tr);
    char str[10];

    sprintf(str, "ToF_0: %d", tracker.getToFmillim(0));
    u8g2.drawStr(0, 10, str);
    sprintf(str, "ToF_1: %d", tracker.getToFmillim(1));
    u8g2.drawStr(0, 25, str);
    sprintf(str, "ToF_2: %d", tracker.getToFmillim(2));
    u8g2.drawStr(0, 40, str);
    sprintf(str, "ToF_3: %d", tracker.getToFmillim(3));
    u8g2.drawStr(0, 55, str);

    u8g2.sendBuffer();
  }

}

//dont use this, use while(1) in setup. this just keeps everything in the same
// scope so code can be cleaner
void loop() {}