// implementation of oledDriver.hpp
//  See the .hpp for comments and descriptions and compare side by side to this
//   file for the best system-level view.

#include "oledDriver.hpp"

oledDriver::oledDriver(choreChartTracker *trackerObj)
{
    //first attach the trackerObj to the trackerObj pointer field
    this->trackerObject = trackerObj;

    //begin the local ug82 class instance
    this->u8g2.begin();

    //clear the buffer and set the font for startup report outs
    this->u8g2.clearBuffer();
    this->u8g2.setFont(u8g2_font_9x18_tr);

    //read if trackerObj has errors or not. If has errors display them
    String errors;
    if (this->trackerObject->getError(errors))
    {  
        u8g2.drawStr(0, 10, "StartUp");
        u8g2.drawStr(0, 25, "Errors");
        u8g2.drawStr(0, 40, "Present");
        u8g2.drawStr(0, 55, ":'(");

        delay(3000);

        //display error handling code here
        this->checkshowError();
    }
    else
    {
        u8g2.drawStr(0, 10, "StartUp");
        u8g2.drawStr(0, 25, "Errors");
        u8g2.drawStr(0, 40, "NOT Present");
        u8g2.drawStr(0, 55, ":)");
    }

    //finally send the buffer
    this->u8g2.sendBuffer();
    //small delay before moving on and doing anything else
    delay(3000);
}

void oledDriver::printToFData()
{
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_9x18_tr);
    char str[50];

    sprintf(str, "ToF_0: %d", this->trackerObject->getToFmillim(0));
    u8g2.drawStr(0, 10, str);
    sprintf(str, "ToF_1: %d", this->trackerObject->getToFmillim(1));
    u8g2.drawStr(0, 25, str);
    sprintf(str, "ToF_2: %d", this->trackerObject->getToFmillim(2));
    u8g2.drawStr(0, 40, str);
    sprintf(str, "ToF_3: %d", this->trackerObject->getToFmillim(3));
    u8g2.drawStr(0, 55, str);

    u8g2.sendBuffer();
}

// TODO:
// the errors are delineated with the ERDELIM macro. Fit all the error messages
// nicely into the screen. So firstly display "start up errors present", wait
// for 2 seconds, then display the first error, and then the next with the 
// same delay etc. If the error is way too long, either make the font smaller
// or do whatever idk, or cut the sentence short, append with '...', move
// to next screen and continue message but first prepending '...'. 
bool oledDriver::checkshowError()
{
    String errors;
    if (this->trackerObject->getError(errors))
    {
        u8g2.clearBuffer();
        u8g2.setFont(u8g2_font_9x18_tr);

        //display error handling code here

        return true;
    }

    return false;
}