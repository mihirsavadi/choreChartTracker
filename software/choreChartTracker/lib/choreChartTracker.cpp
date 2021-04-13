// implementation of choreChartTracker.hpp
//  See the .hpp for comments and descriptions and compare side by side to this
//   file for the best system-level view.

#include "choreChartTracker.hpp"

///////////////////////// PRIVATE METHODS //////////////////////////////////////
void choreChartTracker::setToFaddresses() 
{

}

void choreChartTracker::peripheralHealthCheck() 
{
    
}



///////////////////////// PUBLIC METHODS ///////////////////////////////////////

choreChartTracker::choreChartTracker(std::vector<tofUnit> tofArray_in, 
                                        std::vector<choreDoer> choreDoers_in) 
{
    //1. check for tofArray_in constraints
    bool usedaddy68 = false, usedaddy3C = false, addyRepeated = false, 
            xshutRepeated = false, choreNameRepeated = false;

    for (int i = 0; i < tofArray_in.size(); i++)
    {
        if (tofArray_in[i].address == 0x68)
            usedaddy68 = true;
        else if (tofArray_in[i].address == 0x3C)
            usedaddy3C = true;
        
        for (int j = i+1; j < tofArray.size(); j++)
        {
            if (tofArray_in[j].address == tofArray_in[i].address)
                addyRepeated = true;
            if (tofArray_in[j].xShutPort == tofArray_in[i].xShutPort)
                xshutRepeated = true;
            if (tofArray_in[j].choreName == tofArray_in[i].choreName)
                choreNameRepeated = true;
        }
    }

    if (usedaddy68)
    {
        this->errorPresent = true;
        this->errorDescription.append("i2c 0x68 address used, reserved for DS1307" + ERDELIM);
    }
    if (usedaddy3C)
    {
        this->errorPresent = true;
        this->errorDescription.append("i2c 0x3C address used, reserved for SSD1306 OLED driver chip" + ERDELIM);
    }
    if (addyRepeated)
    {
        this->errorPresent = true;
        this->errorDescription.append("ToF address repeated" + ERDELIM);
    }
    if (xshutRepeated)
    {
        this->errorPresent = true;
        this->errorDescription.append("ToF xshut pin repeated" + ERDELIM);
    }
    if (choreNameRepeated)
    {
        this->errorPresent = true;
        this->errorDescription.append("choreName repeated" + ERDELIM);
    }

    //2. check for choreDoers_in constaints
    bool doerNameRepeat = false, thresholdsOverlap = false;

    for (int i = 0; i < choreDoers_in.size(); i++)
    {
        
    }

    //3. check if DS1307 is present on i2c bus

    //4. check if SD card present on SPI bus

    //5. check if only 4 sensors

    //6. set all private variables
    if (!this->errorPresent)
    {

    }
}