/*
Mihir Savadi 
started 11th April 2021

Class that wraps up all the essential peripherals for the functioning of the 
choreChartTracker as intended in its most basic form. Sort of like an API.
    - vl53L0X array of sensors (default address of 0x29, needs to be reassigned on startup)
    - DS1307 real time clock 
    - SD card reader.
OLED screen control is omitted. This class provides getter functions and returns
errors, which can be parsed and displayed on the OLED in main(){}.

Only one instance of this class should be created before entering infinite loop.
I could make this a singleton class, but that adds extra semantic complexity that
I dont really want to deal with.

TODO: 
    1. test all peripherals isolated first, understand their interfaces.
    2. create constructor with all peripheral interfacing and error handling and test.
    3. Get on other methods.
*/

#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>

#include <Adafruit_VL53L0X.h>

#include <vector>

#define ERDELIM String(". ")

/*
    Table for assigning data to each time of flight sensor
        Constraints:
            - address cannot be 0x68 which is reserved for DS1307
            - address cannot be 0x3C which is reserved for OLED SSD1306 chip
            - address cannot be which is reserved for any other peripheral
                that might be used.
            - xshut ports cannot be repeated
            - addresses cannot be repeated
            - choreNames cannot be repeated
            - addresses must be between 0x30 and 0x3F
            - all address relted constraints are critical and must be checked!
*/
struct tofUnit {
    uint16_t address;  //address of ToF sensor. word is 16bit.
    uint8_t xShutPort; //arduino pin connected to sensor's xshut port
    String choreName;  //name of assigned chore column
    Adafruit_VL53L0X sensorObject = Adafruit_VL53L0X();
    VL53L0X_RangingMeasurementData_t sensorMeasureObject;
};

/*
    Table for data for each chore doer. If one the thresholds represent choreToken distance from sensor assuming sensor is placed at the top of the chore chart.
        constraints:
            - Upper and lower bounds of any two ore more choreDoers cannot coincide
            - Upper and lower bounds of any choreDoer cannot surpass vl53L0X limits.
            - Names of any chore doer cannot be repeated
*/
struct choreDoer {
    String name; //name of chore doer
    //sensor bounds for doers row location. upper is closer to sensor so lower.
    uint16_t upperBound, lowerBound;
};

/*
    Le class
*/
class choreChartTracker {
    public:
        //Only constructor. 
        //  Checks all inputs meets constraints.
        //  Checks DS1307 address of 0x68 is present on i2c bus.
        //  Checks if SD card present on SPI bus. 
        //  Current hardware only supports 4 ToF sensors so choreDoer vector
        //  must only be of size=4.
        //  Sets private error fields set accordingly.
        //  Multiple errors are concatenated, delineated with full-stops + space
        //  If no errors, initializes all peripherals.
        choreChartTracker(tofUnit *tofArray_in, uint8_t tofArray_size, 
                          choreDoer *choreDoers_in, uint8_t choreDoers_size);
        
        // getter for constructor done flag
        bool const getConstructorDoneFlag();

        //  Getter for errors. returns if errorflag is set or not. if not no
        // message will be present.
        bool const getError(String &errorMessage);

        // Get distance reading from each sensor in mm.
        // Sets ErrorFlag and returns 0 if sensorIndex invalid.
        uint16_t const getToFmillim(uint8_t sensorIndex);

        // get the entire VL53L0X_RangingMeasurementData_t struct to get
        //  whatever further detaiilsfrom.
        // Sets ErrorFlag and returns empty struct if sensorIndex invalid.
        VL53L0X_RangingMeasurementData_t const getAllToFData(uint8_t sensorIndex);

        //  sets DS1307 time. shouldn't be called during normal operation
        void setRTCtime(uint8_t year, uint8_t month, uint8_t date, 
                        uint8_t hour, uint8_t min, uint8_t sec);

        //  set time to log once a day
        void setLogTime(uint8_t hour, uint8_t min, uint8_t sec);

        //  gets log time as string in format "Hour, Min, Sec"
        String const getLogTime(); 

        //  checks if time to log once. Must be placed in infinite while loop
        //   in main function.
        //  Once called, within 30 seconds of log time, appropriate field should
        //   should be set.
        //  At log time, store all the following into one new line in the SD
        //   in the following format
        //  <year>, <month>, <date>, <choreDoer1>, <chore1>, <choreDoer2>, <chore2>, ..., <choreDoerX>, <choreX>
        void run();

        // getter for soon-to-log flag
        bool const isLoggingIn30();

    private:
        bool constructorDone = false;

        bool errorPresent = false;       //1 for yes 0 for no
        String errorDescription = ""; //default if no error

        tofUnit *tofArray;
        uint8_t tofArray_size;
        choreDoer *choreDoers;
        uint8_t choreDoers_size;

        uint8_t logHour, logMin, logSec;

        bool loggingIn30;

        //  HELPER FUNCTIONS
        //checks if peripherals are gucci
        void peripheralHealthCheck();
};      