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
        oledDriver(choreChartTracker *trackerObj);

        //function to just print ToF sensor outputs on the screen
        void printToFData();

        //function to check trackerobj for error and display them
        // should be run once every loop of the infinite while loop.
        bool checkshowError();

    private:
        choreChartTracker *trackerObject;
    
        U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2 = 
            U8G2_SSD1306_128X64_NONAME_F_HW_I2C(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
};

#endif