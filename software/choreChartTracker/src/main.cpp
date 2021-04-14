#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

#include "../lib/choreChartTracker.hpp"
// #include <choreChartTracker.hpp>

//macros to store number of chores and chore doers, which is fixed based on hardware
#define CHORE_QTY 4
#define DOER_QTY 4

void setup() {
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
}

void loop() {
  
}