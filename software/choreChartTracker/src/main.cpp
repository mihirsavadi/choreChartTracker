#include <Arduino.h>

#include "choreChartTracker.hpp"
#include "oledDriver.hpp"

void setup() {
  oledDriver od;

  Serial.begin(9600);

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

  Serial.println("starting constructor");
  choreChartTracker tracker(ToFarray, 4, choreDoers, 4);
  od.setup(&tracker);
  Serial.println("done constructor");

  String errorDescription;
  bool errorFlag = tracker.getError(errorDescription);

  Serial.println((errorFlag) ? "Error Flag High" : "Error Flag Low");
  if (errorFlag)
  {
    Serial.println(errorDescription);
  }

  //use this instead of void loop just to maintain singular scope and keep things
  // clean. Make sure there is nothing significantly blocking here. 
  // The choreChartTracker object's logIfTime() method, which is central to the
  // logging (the primary function of this board), must be called at a decently
  // high frequency.
  while(1)
  {
    od.printToFandTimeData(); //this is just here temporarily for testing
    // od.loopdedoop();
  }

}

//dont use this, use while(1) in setup. this just keeps everything in the same
// scope so code can be cleaner
void loop() {}
