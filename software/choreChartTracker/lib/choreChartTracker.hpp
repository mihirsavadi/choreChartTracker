/*
Mihir Savadi 
started 11th April 2021

Class that wraps up all the essential peripherals for the functioning of the 
choreChartTracker as intended in its most basic form:
    - vl53L0X array of sensors
    - DS1307 real time clock 
    - SD card reader.
OLED screen control is omitted. This class provides getter functions and returns
errors, which can be parsed and displayed on the OLED in main(){}.

TODO: 
    1. test all peripherals isolated first, understand their interfaces.
    2. create constructor with all peripheral interfacing and error handling and test.
    3. Get on other methods.
*/

#include <Arduino.h>

#include <string>
#include <vector>

/*
    Table for assigning data to each time of flight sensor
        Constraints:
            - address cannot be 0x68 which is reserved for DS1307
            - address cannot be 0x3C which is reserved for OLED
            - address cannot be which is reserved for any other peripheral
                that might be used.
            - choreNames cannot be repeated
*/
struct tofUnit {
    word address;           //address of ToFarray
    std::string choreName;  //name of assigned chore column
};
std::vector<tofUnit> tofArray;

/*
    Table for data for each chore doer
        constraints:
            - Upper and lower bounds of any two ore more choreDoers cannot coincide
            - Upper and lower bounds of any choreDoer cannot surpass vl53L0X limits.
            - Names of any chore doer cannot be repeated
*/
struct choreDoer {
    std::string name; //name of chore doer
    int upperBound;   //sensor upper bound for doer's row location
    int lowerBound;   //sensor lower bound for doers row location
};
std::vector<choreDoer> choreDoers;


/*
    Main class
*/
class choreChartTracker {
    public:
        //Only constructor. 
        //  Checks all inputs meets constraints.
        //  Checks DS1307 address of 0x68 is present on i2c bus.
        //  Checks if SD card present on i2c bus. 
        //  Sets private error fields set accordingly. 
        //  Multiple errors are concatenated, delineated with full-stops.
        choreChartTracker(std::vector<tofUnit> tofArray_in, 
                          std::vector<choreDoer> choreDoers_in);

        //  Getter for errors.
        void getError(bool &errorFlag, std::string &errorMessage);

        //  sets DS1307 time. shouldn't be called during normal operation
        void setRTCtime(uint8_t hour, uint8_t min, uint8_t sec,
                        uint8_t month, uint8_t date, uint8_t year);

        //  set log time
        void setLogTime(uint8_t hour, uint8_t min, uint8_t sec,
                        uint8_t year, uint8_t month, uint8_t date);

        //  gets log time as string in format "Hour, Min, Sec"
        std::string const getLogTime(); 

        //  checks if time to log once. Must be placed in infinite while loop
        //   in main function.
        //  Once called, within 30 seconds of log time, appropriate field should
        //   should be set.
        //  At log time, store all the following into one new line in the SD
        //   in the following format
        //  <year>, <month>, <date>, <choreDoer1>, <chore1>, <choreDoer2>, <chore2>, ..., <choreDoerX>, <choreX>
        void run();

        // getter for soon-to-log flag
        bool const loggingIn30();

    private:        
        //static variables
        bool errorPresent;            //1 for yes 0 for no
        std::string errorDescription; //default if no error

        std::vector<tofUnit> tofArray;
        std::vector<choreDoer> choreDoers;

        uint8_t logHour, logMin, logSec;

        bool loggingIn30;

        //helper functions
        void setToFaddresses();       //runs algo to set addy's to all ToF sensors
        void peripheralHealthCheck(); //checks if peripherals are gucci
};      