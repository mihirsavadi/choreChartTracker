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
        if (! rtc.begin())
        {
            this->errorPresent = true;
            this->errorDescription.concat("Could not find RTC" + ERDELIM);
        }
        if (!rtc.isrunning())
        {
            this->errorPresent = true;
            this->errorDescription.concat("RTC not running. Need to set time.");
            this->autoSetRTCtime();
            // this->setLogTime(0, 0, 0); //use this if auto doesnt suffice.
        }
        
    //4. check if SD card present on SPI bus
        //TODO!

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

    uint8_t readMax = 5;
    uint16_t readValue = 0;
    for (uint8_t i = 0; i < readMax; i++)
    {
        this->tofArray[sensorIndex].sensorObject.rangingTest(
            &this->tofArray[sensorIndex].sensorMeasureObject, 
            false
        );
        // see https://documentation.help/VL53L0X-API/RangeStatusPage.html
        // 1,2,3,4,5 are various different error messages.
        // typical mm readouts are above 20ish anyway.
        if (this->tofArray[sensorIndex].sensorMeasureObject.RangeStatus != 0)
        {
            return this->tofArray[sensorIndex].sensorMeasureObject.RangeStatus;
        }
        readValue = readValue + 
                this->tofArray[sensorIndex].sensorMeasureObject.RangeMilliMeter;
    }

    return readValue/readMax;
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

uint8_t const choreChartTracker::tokenInWhichRow(String *doersArray, 
                                                        String *choreNameArray)
{
    String doersArrayToSend[this->tofArray_size];
    String choreNameToSend[this->tofArray_size];

    for(uint8_t  i = 0; i < this->tofArray_size; i++)
    {
        choreNameToSend[i] = this->tofArray[i].choreName;
        doersArrayToSend[i] = String("choreTokenInvalidPosition");
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
    choreNameArray = choreNameToSend;

    return this->tofArray_size;
}

void choreChartTracker::setRTCtime(uint16_t year, uint8_t month, uint8_t date, 
                uint8_t hour, uint8_t min, uint8_t sec)
{    
    DateTime adjustTime(year, month, date, hour, min, sec);
    this->rtc.adjust(adjustTime);
}

void choreChartTracker::autoSetRTCtime()
{
    this->rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
}

void choreChartTracker::setLogTime(uint8_t hour, uint8_t min, uint8_t sec)
{
    this->logHour = hour;
    this->logMin = min;
    this->logSec = sec;
}

String const choreChartTracker::getLogTime()
{
    return this->logHour + String(":") + this->logMin + String(":") + this->logSec;
}

String const choreChartTracker::getCurrentTimeDate()
{
    DateTime now = this->rtc.now();

    String currentTime(now.year() + String(":") + now.month() + String(":") + now.day() + 
        String(":") + now.hour() + String(":") + now.minute() + String(":") + 
        now.second());

    return currentTime;
}

String const choreChartTracker::getMostRecentLog()
{
    return String("dummy");
}

//TODO
String const choreChartTracker::getEntireLog()
{
    return String("dummy");
}

//TODO
void choreChartTracker::logIfLogTime()
{

}

bool const choreChartTracker::isLoggingIn30()
{
    DateTime now = rtc.now();

    if (now.hour() == this->logHour && now.minute() == this->logMin)
    {
        return true;
    }

    return false;
}