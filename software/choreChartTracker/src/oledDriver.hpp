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
        
        oledDriver(choreChartTracker &trackerObj);

    private:
        choreChartTracker *trackerObject;
    
        U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
};



