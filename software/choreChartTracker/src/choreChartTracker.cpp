// implementation of choreChartTracker.hpp
//  See the .hpp for comments and descriptions and compare side by side to this
//   file for the best system-level view.

#include "choreChartTracker.hpp"


choreChartTracker::choreChartTracker(tofUnit *tofArray_in, uint8_t tofArray_size, 
                          choreDoer *choreDoers_in, uint8_t choreDoers_size)
{
    if (tofArray_in != nullptr && choreDoers_in != nullptr)
    {
        //1. check for critical tofArray_in constraints. then assign objects.
        for (uint8_t i = 0; i < tofArray_size; i++)
        {
            if (tofArray_in[i].address == 0x68 || tofArray_in[i].address == 0x3C ||
                tofArray_in[i].address < 0x30 || tofArray_in[i].address > 0x3F)
            {
                this->errorPresent = true;
                this->errorDescription.concat(String(tofArray_in[i].address) + 
                    " is bad" + ERDELIM);
            }
        }

        //2. check and set values for VL53L0X sensors
        for (uint8_t i = 0; i < tofArray_size; i++)
        {
            pinMode(tofArray_in[i].xShutPort, OUTPUT);
            digitalWrite(tofArray_in[i].xShutPort, LOW);
        }
        delay(10);
        for (uint8_t i = 0; i < tofArray_size; i++)
        {
            digitalWrite(tofArray_in[i].xShutPort, HIGH);
        }
        delay(10);
        for (uint8_t i = 0; i < tofArray_size; i++)
        {
            digitalWrite(tofArray_in[i].xShutPort, HIGH);
            for (uint8_t j = 0; j < tofArray_size; j++)
            {
                if (j > i)
                    digitalWrite(tofArray_in[j].xShutPort, LOW);
            }
            if (!tofArray_in[i].sensorObject.begin(tofArray_in[i].address)) {
                this->errorPresent = true;
                this->errorDescription.concat("ToF address " + 
                String(tofArray_in[i].address) + " failed to initialize" + ERDELIM);
            }
            delay(10);
        }
    }
    else
    {
        this->errorPresent = true;
        this->errorDescription.concat("choreChartTracker object passed a nullpointer for ToFarray and choreDoer array" + ERDELIM);
    }

    //3. check if DS1307 is present on i2c bus

    //4. check if SD card present on SPI bus

    //5. set all private variables
    if (!this->errorPresent)
    {
        this->tofArray = tofArray_in;
        this->tofArray_size = tofArray_size;
        this->choreDoers = choreDoers_in;
        this->choreDoers_size = choreDoers_size;
    }

    this->constructorDone = true;
}

bool const choreChartTracker::getConstructorDoneFlag()
{
    return this->constructorDone;
}

bool const choreChartTracker::getError(String &errorMessage)
{
    errorMessage = errorDescription;
    return this->errorPresent;
}

uint16_t const choreChartTracker::getToFmillim(uint8_t sensorIndex)
{
    if (sensorIndex > this->tofArray_size)
    {
        this->errorPresent = true;
        this->errorDescription.concat("reading requested from sensor indexbeyond what is present" + ERDELIM);
        return 0;
    }

    this->tofArray[sensorIndex].sensorObject.rangingTest(
        &this->tofArray[sensorIndex].sensorMeasureObject, 
        false
    );
    return this->tofArray[sensorIndex].sensorMeasureObject.RangeMilliMeter;
}

VL53L0X_RangingMeasurementData_t const choreChartTracker::getAllToFData(
                                                            uint8_t sensorIndex)
{
    if (sensorIndex > this->tofArray_size)
    {
        this->errorPresent = true;
        this->errorDescription.concat("details requested from sensor index beyond what is present" + ERDELIM);
        return VL53L0X_RangingMeasurementData_t();
    }

    return this->tofArray[sensorIndex].sensorMeasureObject;
}

uint8_t const choreChartTracker::whichChoreInWhosRow(String *doersArray)
{
    String doersArrayToSend[this->tofArray_size];

    for(uint8_t  i = 0; i < this->tofArray_size; i++)
    {
        for (uint8_t j = 0; j < this->choreDoers_size; j++)
        {
            uint16_t distance = this->getToFmillim(i);
            if (distance >= this->choreDoers[j].upperBound && 
                    distance <= this->choreDoers[j].lowerBound)
            {
                doersArrayToSend[i] = this->choreDoers[j].name;
            }
        }
    }
    
    doersArray = doersArrayToSend;

    return this->tofArray_size;
}