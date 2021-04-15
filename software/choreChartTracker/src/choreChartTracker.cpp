// implementation of choreChartTracker.hpp
//  See the .hpp for comments and descriptions and compare side by side to this
//   file for the best system-level view.

#include "choreChartTracker.hpp"

///////////////////////// PRIVATE METHODS //////////////////////////////////////
void choreChartTracker::peripheralHealthCheck() 
{
    
}

///////////////////////// PUBLIC METHODS ///////////////////////////////////////

choreChartTracker::choreChartTracker(std::vector<tofUnit> &tofArray_in, 
                                        std::vector<choreDoer> &choreDoers_in) 
{
    //1. check for critical tofArray_in constraints
    
    //3. check if DS1307 is present on i2c bus

    //4. check if SD card present on SPI bus

    //5. check and set values for VL53L0X sensors
    // for (size_t i = 0; i < tofArray_in.size(); i++)
    // {
    //     pinMode(tofArray_in[i].xShutPort, OUTPUT);
    //     digitalWrite(tofArray_in[i].xShutPort, LOW);
    // }
    // delay(10);
    // for (size_t i = 0; i < tofArray_in.size(); i++)
    // {
    //     digitalWrite(tofArray_in[i].xShutPort, HIGH);
    // }
    // delay(10);
    // for (size_t i = 0; i < tofArray_in.size(); i++)
    // {
    //     digitalWrite(tofArray_in[i].xShutPort, HIGH);
    //     for (size_t j = 0; j < tofArray_in.size(); j++)
    //     {
    //         if (j != i)
    //             digitalWrite(tofArray_in[j].xShutPort, LOW);
    //     }
    //     if (!this->sens0.begin(tofArray_in[i].address)) {
    //         this->errorPresent = true;
    //         this->errorDescription.append(std::to_string(tofArray_in[i].address) 
    //             + " ToF address failed to initialize" + ERDELIM);
    //     }
    //     delay(10);
    // }

    //6. set all private variables
    if (!this->errorPresent)
    {
        this->tofArray = tofArray_in;
        this->choreDoers = choreDoers_in;
    }

    this->constructorDone = true;
}

void const choreChartTracker::getError(bool &errorFlag, String &errorMessage)
{
    errorFlag = this->errorPresent;
    errorMessage = errorDescription;
}