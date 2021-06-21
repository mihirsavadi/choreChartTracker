#ifndef OLEDDRIVER_CPP
#define OLEDDRIVER_CPP

/*
Mihir Savadi 
started 16th April 2021

Class that integrates choreChartTracker object tightly into OLED functionality
for cleaner main() programming, and standardizing choreChartTracker OLED
control.
*/

#include <Arduino.h>

#include <U8g2lib.h>
#include "choreChartTracker.hpp"

class oledDriver {
    public:
        //main constructor
        oledDriver();

        //call this immediately after choreChartTrackerIsRun
        void setup(choreChartTracker *trackerObj);

        //function to just print ToF sensor outputs on the screen and RTC time
        // below. Use for debugging.
        void printToFandTimeData();

        // TODO: see cpp for details
        //Main method to be run once every loop of the while loop in main().
        void loopdedoop();


    private:
        choreChartTracker *trackerObject;
    
        U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2 = 
            U8G2_SSD1306_128X64_NONAME_F_HW_I2C(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

        // TODO: see cpp for details
        //function to check trackerobj for error and display them
        // should be run once every loop of the infinite while loop.
        bool checkshowError();
};

#endif