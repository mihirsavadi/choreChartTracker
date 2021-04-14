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

    //first is value, second is count.
    std::map<uint8_t, uint8_t> xshutCountMap;
    std::map<std::string, uint8_t> choreNameCountMap;

    for (size_t i = 0; i < tofArray_in.size(); i++) {
        if (tofArray_in[i].address == 0x68)
            usedaddy68 = true;
        else if (tofArray_in[i].address == 0x3C)
            usedaddy3C = true;

        //insert pair into map. insert returns pair whose first is an iterator to 
        // new item or existing item, and second is a flag which is false if item 
        // already exists. 
        auto xshutResult = xshutCountMap.insert(
            std::pair<uint8_t, uint8_t>(tofArray_in[i].xShutPort, 1)
        );
        if (xshutResult.second == false)
            xshutResult.first->second++;

        auto choreNameResult = choreNameCountMap.insert(
            std::pair<std::string, uint8_t>(tofArray_in[i].choreName, 1)
        );
        if (choreNameResult.second == false)
            choreNameResult.first->second++;
    }
    for (auto elem : xshutCountMap) {
        if (elem.second > 1) {
            xshutRepeated = true;
            break;
        }
    }
    for (auto elem : choreNameCountMap) {
        if (elem.second > 1) {
            choreNameRepeated = true;
            break;
        }
    }

    if (usedaddy68) {
        this->errorPresent = true;
        this->errorDescription.append("i2c 0x68 address used, reserved for DS1307" + ERDELIM);
    }
    if (usedaddy3C) {
        this->errorPresent = true;
        this->errorDescription.append("i2c 0x3C address used, reserved for SSD1306 OLED driver chip" + ERDELIM);
    }
    if (addyRepeated) {
        this->errorPresent = true;
        this->errorDescription.append("ToF address repeated" + ERDELIM);
    }
    if (xshutRepeated) {
        this->errorPresent = true;
        this->errorDescription.append("ToF xshut pin repeated" + ERDELIM);
    }
    if (choreNameRepeated) {
        this->errorPresent = true;
        this->errorDescription.append("choreName repeated" + ERDELIM);
    }

    //2. check for choreDoers_in constaints
    bool doerNameRepeat = false, thresholdsOverlap = false;

    std::map<std::string, uint8_t> doerNameCount;

    struct threshold {
        uint16_t upper, lower;
    };
    std::vector<threshold> orderedThresholds;

    for (size_t i = 0; i < choreDoers_in.size(); i++) {
        auto choreDoerResult = doerNameCount.insert(
            std::pair<std::string, uint8_t>(choreDoers_in[i].name, 1)
        );

        if (choreDoerResult.second == false)
            choreDoerResult.first->second++;
        
        threshold toInsert;
        toInsert.upper = choreDoers_in[i].upperBound;
        toInsert.lower = choreDoers_in[i].lowerBound;
        orderedThresholds.push_back(toInsert);
    }
    std::sort(orderedThresholds.begin(), orderedThresholds.end(),
        [](threshold t1, threshold t2) ->bool {
            return (t1.upper < t2.upper) ? true : false;
        }
    );

    for (size_t i = 1; i < orderedThresholds.size(); i++) {
        if (orderedThresholds[i-1].lower > orderedThresholds[i].lower) {
            thresholdsOverlap = true;
            break;
        }
    }

    for (auto elem : doerNameCount) {
        if (elem.second > 1) {
            doerNameRepeat = false;
            break;
        }
    }

    if (doerNameRepeat)
    {
        this->errorPresent = true;
        this->errorDescription.append("choreDoer names repeated" + ERDELIM);
    }
    if (thresholdsOverlap)
    {
        this->errorPresent = true;
        this->errorDescription.append("choreDoer token distance thresholds overlapping" + ERDELIM);
    }

    

    //3. check if DS1307 is present on i2c bus

    //4. check if SD card present on SPI bus

    //5. check if only 4 sensors

    //6. set all private variables
    if (!this->errorPresent)
    {

    }
}