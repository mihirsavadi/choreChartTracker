// implementation of oledDriver.hpp
//  See the .hpp for comments and descriptions and compare side by side to this
//   file for the best system-level view.

#include "oledDriver.hpp"

////////////////////////////// PUBLIC METHODS //////////////////////////////////

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
        this->u8g2.drawStr(0, 10, "StartUp");
        this->u8g2.drawStr(0, 25, "Errors");
        this->u8g2.drawStr(0, 40, "Present");
        this->u8g2.drawStr(0, 55, ":'(");

        delay(3000);

        //display error handling code here
        this->checkshowError();
    }
    else
    {
        this->u8g2.drawStr(0, 10, "StartUp");
        this->u8g2.drawStr(0, 25, "Errors");
        this->u8g2.drawStr(0, 40, "NOT Present");
        this->u8g2.drawStr(0, 55, ":)");
    }

    //finally send the buffer
    this->u8g2.sendBuffer();

    //small delay before moving on and doing anything else
    delay(3000);
}

void oledDriver::printToFData()
{
    this->u8g2.clearBuffer();
    this->u8g2.setFont(u8g2_font_9x18_tr);
    char str[50];

    sprintf(str, "ToF_0: %d", this->trackerObject->getToFmillim(0));
    this->u8g2.drawStr(0, 10, str);
    sprintf(str, "ToF_1: %d", this->trackerObject->getToFmillim(1));
    this->u8g2.drawStr(0, 25, str);
    sprintf(str, "ToF_2: %d", this->trackerObject->getToFmillim(2));
    this->u8g2.drawStr(0, 40, str);
    sprintf(str, "ToF_3: %d", this->trackerObject->getToFmillim(3));
    this->u8g2.drawStr(0, 55, str);

    this->u8g2.sendBuffer();
}

void oledDriver::loopdedoop()
{
    String errors;
    if (this->trackerObject->getError(errors))
    {
        this->checkshowError();
    }
    else
    {
        // TODO:
        // put normal display stuff d2d here.
        // follow wireframe design if we ever end up discussing that.
        // ideally at the bottom should be "X X X X" where each X corresponds
        // to which person's row the choreToken is currently in, so for us
        // it could either be L, M, V, or N.
        // Then above should display current time in YYYY:MM:DD:HH:MM:SS 
        // as well as the set log time ever day in HH:MM:SS
        // Then aside from this we can do whatever we want
        // If you cant do anything cos there is no appropriate method from
        // the choreChartTracker class then let me know Ill (mihir) integrate it.
    }
}

////////////////////////////// PRIVATE METHODS /////////////////////////////////

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
        this->u8g2.clearBuffer();
        this->u8g2.setFont(u8g2_font_9x18_tr);

        //display error handling code here

        this->u8g2.sendBuffer();
        return true;
    }

    return false;
}