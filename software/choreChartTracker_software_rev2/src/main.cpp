/*
  Mihir Savadi
  started 7th July 2021

  The aim for this software revision is to reduce the superfluousness and ultra-
  tight integration from rev1. The current ESP32 also doesn't like the old
  revision for whatever reason - its too complicate to debug in a reasonable 
  amount of time relative to the priority of this project.
  rev1 was built with robust error handling and
  chore/doer expandability - these are hardly required for an arduino based
  on-off project like this. Hence, rev2 will try to keep everything in one
  file, with a clear flow of commands.
*/

/* include dependencies here */
#include <Arduino.h>
#include <Adafruit_VL53L0X.h>
#include <RTClib.h>
#include <SD.h>
#include <U8g2lib.h>
#include <SPI.h>
#include <Wire.h>

/* define pin macros here */
#define SPI_CS 5
#define CARD_DETECT 9
#define SPI_CLK 18
#define MISO 19
#define MOSI 23

#define SDA 21
#define SCL 22

#define XSHUT_0 10
#define XSHUT_1 14
#define XSHUT_2 25
#define XSHUT_3 26

/* string to hold all errors. */
String errorMessage = "";
#define ERDELIM String("; ") //seperator between error messages

/* define objects for all peripherals here */
Adafruit_VL53L0X VL53l0X_0 = Adafruit_VL53L0X();
Adafruit_VL53L0X VL53l0X_1 = Adafruit_VL53L0X();
Adafruit_VL53L0X VL53l0X_2 = Adafruit_VL53L0X();
Adafruit_VL53L0X VL53l0X_3 = Adafruit_VL53L0X(); 

RTC_DS3231 rtc;

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2 = 
            U8G2_SSD1306_128X64_NONAME_F_HW_I2C(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

/* Control sequence to assign each of the VL53l0X sensors a unique i2c address
 using their XSHUT pins */
void setup_VL53L0Xarray()
{
    //set all pins to output
    pinMode(XSHUT_0, OUTPUT);
    pinMode(XSHUT_1, OUTPUT);
    pinMode(XSHUT_2, OUTPUT);
    pinMode(XSHUT_3, OUTPUT);

    //reset all sensors by holding XSHUT low then high with delay(10) in between
    digitalWrite(XSHUT_0, LOW);
    digitalWrite(XSHUT_1, LOW);
    digitalWrite(XSHUT_2, LOW);
    digitalWrite(XSHUT_3, LOW);
    delay(10);
    digitalWrite(XSHUT_0, HIGH);
    digitalWrite(XSHUT_1, HIGH);
    digitalWrite(XSHUT_2, HIGH);
    digitalWrite(XSHUT_3, HIGH);
    delay(10);

    //one by one set i2c address by holding all XSHUT's to LOW except the target
    // sensor who's address is being set.
    //  1) setting sensor 0
    digitalWrite(XSHUT_0, HIGH);
    digitalWrite(XSHUT_1, LOW);
    digitalWrite(XSHUT_2, LOW);
    digitalWrite(XSHUT_3, LOW);
    if (!VL53l0X_0.begin(0x30))
    {
        errorMessage.concat("VL53l0X 0 (0x30 i2c addy) failed init." + ERDELIM);
    }
    delay(10);
    //  2) setting sensor 1
    digitalWrite(XSHUT_0, HIGH);
    digitalWrite(XSHUT_1, HIGH);
    digitalWrite(XSHUT_2, LOW);
    digitalWrite(XSHUT_3, LOW);
    if (!VL53l0X_1.begin(0x31))
    {
        errorMessage.concat("VL53l0X 1 (0x31 i2c addy) failed init." + ERDELIM);
    }
    delay(10);
    //  3) setting sensor 2
    digitalWrite(XSHUT_0, HIGH);
    digitalWrite(XSHUT_1, HIGH);
    digitalWrite(XSHUT_2, HIGH);
    digitalWrite(XSHUT_3, LOW);
    if (!VL53l0X_2.begin(0x32))
    {
        errorMessage.concat("VL53l0X 2 (0x32 i2c addy) failed init." + ERDELIM);
    }
    delay(10);
    //  4) setting sensor 3
    digitalWrite(XSHUT_0, HIGH);
    digitalWrite(XSHUT_1, HIGH);
    digitalWrite(XSHUT_2, HIGH);
    digitalWrite(XSHUT_3, HIGH);
    if (!VL53l0X_3.begin(0x33))
    {
        errorMessage.concat("VL53l0X 3 (0x32 i2c addy) failed init." + ERDELIM);
    }
    delay(10);
}

/* read VL53l0X sensor data */
struct vl53l0xArray {
    uint16_t vl53l0x_0;
    uint16_t vl53l0x_1;
    uint16_t vl53l0x_2;
    uint16_t vl53l0x_3;
};
vl53l0xArray get_mm_VL53l0X()
{
    vl53l0xArray outputArray;

    uint16_t range = VL53l0X_0.readRange();
    if (range > 8000)
    {
        range = VL53l0X_0.readRangeStatus();
    }
    outputArray.vl53l0x_0 = range;

    range = VL53l0X_1.readRange();
    if (range > 8000)
    {
        range = VL53l0X_1.readRangeStatus();
    }
    outputArray.vl53l0x_1 = range;

    range = VL53l0X_2.readRange();
    if (range > 8000)
    {
        range = VL53l0X_2.readRangeStatus();
    }
    outputArray.vl53l0x_2 = range;

    range = VL53l0X_3.readRange();
    if (range > 8000)
    {
        range = VL53l0X_3.readRangeStatus();
    }
    outputArray.vl53l0x_3 = range;

    return outputArray;
}

/* distance to choreDoer. ADJUST MARKER DISTANCES HERE*/
enum choreDoerEnum{LUCAS, MIHIR, NATHAN, VIGNESH, INVALID};
struct chartStat {
    const String chore0_name = "Dishes";
    choreDoerEnum chore0_doer;
    const String chore1_name = "EmptyDishwasher";
    choreDoerEnum chore1_doer;
    const String chore2_name = "Trash";
    choreDoerEnum chore2_doer;
    const String chore3_name = "Recycle";
    choreDoerEnum chore3_doer;
};
chartStat whoIsChoreDoer()
{
    vl53l0xArray sensorReadings = get_mm_VL53l0X();

    chartStat outputStat;

    uint16_t doer0_lower = 30;
    uint16_t doer0_upper = 100;
    uint16_t doer1_lower = 100;
    uint16_t doer1_upper = 200;
    uint16_t doer2_lower = 200;
    uint16_t doer2_upper = 300;
    uint16_t doer3_lower = 300;
    uint16_t doer3_upper = 400;


    if (sensorReadings.vl53l0x_0 > doer0_lower && sensorReadings.vl53l0x_0 <= doer0_upper)
    {
        outputStat.chore0_doer = LUCAS;
    }
    else if (sensorReadings.vl53l0x_0 > doer1_lower && sensorReadings.vl53l0x_0 <= doer1_upper)
    {
        outputStat.chore0_doer = MIHIR;
    }
    else if (sensorReadings.vl53l0x_0 > doer2_lower && sensorReadings.vl53l0x_0 <= doer2_upper)
    {
        outputStat.chore0_doer = NATHAN;
    }
    else if (sensorReadings.vl53l0x_0 > doer3_lower && sensorReadings.vl53l0x_0 <= doer3_upper)
    {
        outputStat.chore0_doer = VIGNESH;
    }
    else
    {
        outputStat.chore0_doer = INVALID;
    }

    if (sensorReadings.vl53l0x_1 > doer0_lower && sensorReadings.vl53l0x_1 <= doer0_upper)
    {
        outputStat.chore1_doer = LUCAS;
    }
    else if (sensorReadings.vl53l0x_1 > doer1_lower && sensorReadings.vl53l0x_1 <= doer1_upper)
    {
        outputStat.chore1_doer = MIHIR;
    }
    else if (sensorReadings.vl53l0x_1 > doer2_lower && sensorReadings.vl53l0x_1 <= doer2_upper)
    {
        outputStat.chore1_doer = NATHAN;
    }
    else if (sensorReadings.vl53l0x_1 > doer3_lower && sensorReadings.vl53l0x_1 <= doer3_upper)
    {
        outputStat.chore1_doer = VIGNESH;
    }
    else
    {
        outputStat.chore1_doer = INVALID;
    }

    if (sensorReadings.vl53l0x_2 > doer0_lower && sensorReadings.vl53l0x_2 <= doer0_upper)
    {
        outputStat.chore2_doer = LUCAS;
    }
    else if (sensorReadings.vl53l0x_2 > doer1_lower && sensorReadings.vl53l0x_2 <= doer1_upper)
    {
        outputStat.chore2_doer = MIHIR;
    }
    else if (sensorReadings.vl53l0x_2 > doer2_lower && sensorReadings.vl53l0x_2 <= doer2_upper)
    {
        outputStat.chore2_doer = NATHAN;
    }
    else if (sensorReadings.vl53l0x_2> doer3_lower && sensorReadings.vl53l0x_2 <= doer3_upper)
    {
        outputStat.chore2_doer = VIGNESH;
    }
    else
    {
        outputStat.chore2_doer = INVALID;
    }

    if (sensorReadings.vl53l0x_3 > doer0_lower && sensorReadings.vl53l0x_3 <= doer0_upper)
    {
        outputStat.chore3_doer = LUCAS;
    }
    else if (sensorReadings.vl53l0x_3 > doer1_lower && sensorReadings.vl53l0x_3 <= doer1_upper)
    {
        outputStat.chore3_doer = MIHIR;
    }
    else if (sensorReadings.vl53l0x_3 > doer2_lower && sensorReadings.vl53l0x_3 <= doer2_upper)
    {
        outputStat.chore3_doer = NATHAN;
    }
    else if (sensorReadings.vl53l0x_3> doer3_lower && sensorReadings.vl53l0x_3 <= doer3_upper)
    {
        outputStat.chore3_doer = VIGNESH;
    }
    else
    {
        outputStat.chore3_doer = INVALID;
    }

    return outputStat;
}

/* Setup RTC */
void setup_RTC()
{
    //start RTC. append to error string if have issues.
    if (!rtc.begin())
    {
        errorMessage.concat("Could not find RTC." + ERDELIM);
    }
    //If RTC detected to have recently lost power update the time.
    //This get triggered on new device, or after power loss (that includes back up batt)
    //This will only work if hooked to computer? Idk. Append to error string in case.
    if (rtc.lostPower())
    {
        errorMessage.concat("RTC lost power. Time reset was attempted." + ERDELIM);
        //the following line sets date and time to when sketch was compiled.
        rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
        //the following line sets an explicit date and time.
        // in this case we do July 27, 2021 at 11.30pm and 0 seconds.
        // rtc.adjust(DateTime(2021, 7, 27, 11, 30, 0));
    }
}

/* setup SD card */
void setup_SD()
{
    //make CS pin output, and cardDetect pin input
    pinMode(SPI_CS, OUTPUT);
    pinMode(CARD_DETECT, INPUT_PULLUP);

    //check if card is present and initializable
    if (digitalRead(CARD_DETECT) == LOW)
    {
        errorMessage.concat("Card is not inserted." + ERDELIM);
    }
    
    if (!SD.begin(SPI_CS))
    {
        if(SD.cardType() == CARD_NONE)
            errorMessage.concat("Card type detected as NONE." + ERDELIM);
        else if (SD.cardType() == CARD_MMC)
            errorMessage.concat("Card type detected as MMC." + ERDELIM);
        else if (SD.cardType() == CARD_SD)
            errorMessage.concat("Card type detected as SD." + ERDELIM);
        else if (SD.cardType() == CARD_SDHC)
            errorMessage.concat("Card type detected as SDHC." + ERDELIM);
        else if (SD.cardType() == CARD_UNKNOWN)
            errorMessage.concat("Card type detected as UNKOWN." + ERDELIM);

        errorMessage.concat("Card failed init." + ERDELIM);
    }

    //check if log.txt exists, if doesnt exist, create it. Then keep it open
    // for appending.
    File file = SD.open("/log.txt", FILE_APPEND);
    if (!file)
    {
        errorMessage.concat("Failed to open log.txt.");
        file.close();
    }
    file.close();
}

/* setup 0.96" OLED screen */
void setup_OLED()
{
    if (!u8g2.begin())
    {
        errorMessage.concat("OLED failed init." + ERDELIM);
    }
}

/* Checks to do while running, and throw errors otherwise */
void runtimechecks()
{
    //check SD card status
    if (digitalRead(CARD_DETECT) == LOW)
    {
        errorMessage.concat("Card is not inserted." + ERDELIM);
    }
    
    if (!SD.begin(SPI_CS))
    {
        if(SD.cardType() == CARD_NONE)
            errorMessage.concat("Card type detected as NONE." + ERDELIM);
        else if (SD.cardType() == CARD_MMC)
            errorMessage.concat("Card type detected as MMC." + ERDELIM);
        else if (SD.cardType() == CARD_SD)
            errorMessage.concat("Card type detected as SD." + ERDELIM);
        else if (SD.cardType() == CARD_SDHC)
            errorMessage.concat("Card type detected as SDHC." + ERDELIM);
        else if (SD.cardType() == CARD_UNKNOWN)
            errorMessage.concat("Card type detected as UNKOWN." + ERDELIM);

        errorMessage.concat("Card failed init." + ERDELIM);
    }

    //check RTC status
    if (!rtc.begin())
    {
        errorMessage.concat("Could not find RTC." + ERDELIM);
    }

    //TODO
    //check sensors status
}

/* shortcut to print error screen to OLED and serial monitor 
    returns true if error present, false if not.*/
bool printErrorMessage()
{
    if (errorMessage.length() != 0)
    {
        Serial.println("ERRORS PRESENT --> " + errorMessage);
        
        int sdCardErrorPos = errorMessage.indexOf("Card");
        if (sdCardErrorPos != -1)
        {
            u8g2.clearBuffer();
            u8g2.setFont(u8g2_font_9x18_tr);
            u8g2.drawStr(0, 15, "ERROR PRESENT!");
            u8g2.drawStr(0, 35, "SD card not in!");
            u8g2.drawStr(0, 55, "System Halted!");
            u8g2.sendBuffer();
        }
        else
        {
            u8g2.clearBuffer();
            u8g2.setFont(u8g2_font_9x18_tr);
            u8g2.drawStr(0, 15, "ERROR PRESENT!");
            u8g2.drawStr(0, 35, "CHECK SD CARD!");
            u8g2.drawStr(0, 55, "System Halted!");
            u8g2.sendBuffer();
        }

        return true;
    }

    return false;
}

/* Update google sheets with contents of SD card if have wifi connection.
    Return true if success */
bool updateGoogleSheets()
{
    //TODO
}

/* Detects when it is time to log. It returns a value in seconds to the next
    log time. Returns this value as an unsigned int.
    SET LOG TIME HERE */
uint32_t timeToLog()
{
    //log time is 5am everyday
    uint8_t log_hour = 14;
    uint8_t log_min  = 5;
    uint8_t log_sec  = 0;
    uint32_t log_daySec = log_sec + log_min*60 + log_hour*60*60;

    //get current time
    DateTime now = rtc.now();
    uint32_t now_daySec = now.second() + now.minute()*60 + now.hour()*60*60;

    //get difference between current time and next log time in seconds
    uint32_t timeDiff;
    if (now_daySec > log_daySec)
    {
        timeDiff = (86400-now_daySec)+log_daySec;
    }
    else
    {
        timeDiff = log_daySec - now_daySec;
    }

    return timeDiff;
}

/* log data in sd card. returns true if success, false if not. If log.txt
    doesnt exist, create it. If it does exist, append to it.
    <year>, <month>, <day>, <hour>, <min>, <sec>, <choredoer1>, <chore>,
        <choredoer2>, <chore>, <choredoer3>, <chore>, <choredoer4>, <chore>,
        <errors> */
void loggywoggy()
{
    if (timeToLog() == 0)
    {
        File file = SD.open("/log.txt", FILE_APPEND);
        if (!file)
        {
            errorMessage.concat("Failed to open log.txt for appending.");
            file.close();
        }

        chartStat choreStat = whoIsChoreDoer();

        DateTime now = rtc.now();
        String log = String(now.year()) + "," +
                    String(now.month()) + "," +
                    String(now.day()) + "," +
                    String(now.hour()) + "," +
                    String(now.minute()) + "," +
                    String(now.second()) + "," +
                    String(choreStat.chore0_name) + "," + 
                    String(choreStat.chore0_doer == LUCAS ? "Lucas" :
                            choreStat.chore0_doer == MIHIR ? "Mihir" :
                            choreStat.chore0_doer == NATHAN ? "Nathan" :
                            choreStat.chore0_doer == VIGNESH ? "Vignesh" : "Invalid"
                            ) + "," +
                    String(choreStat.chore1_name) + "," + 
                    String(choreStat.chore1_doer == LUCAS ? "Lucas" :
                            choreStat.chore1_doer == MIHIR ? "Mihir" :
                            choreStat.chore1_doer == NATHAN ? "Nathan" :
                            choreStat.chore1_doer == VIGNESH ? "Vignesh" : "Invalid"
                            ) + "," +
                    String(choreStat.chore2_name) + "," + 
                    String(choreStat.chore2_doer == LUCAS ? "Lucas" :
                            choreStat.chore2_doer == MIHIR ? "Mihir" :
                            choreStat.chore2_doer == NATHAN ? "Nathan" :
                            choreStat.chore2_doer == VIGNESH ? "Vignesh" : "Invalid"
                            ) + "," +
                    String(choreStat.chore3_name) + "," + 
                    String(choreStat.chore3_doer == LUCAS ? "Lucas" :
                            choreStat.chore3_doer == MIHIR ? "Mihir" :
                            choreStat.chore3_doer == NATHAN ? "Nathan" :
                            choreStat.chore3_doer == VIGNESH ? "Vignesh" : "Invalid"
                            ) + ",";
                    

        if (errorMessage.length() == 0)
            log.concat("NO ERRORS");
        else
            log.concat(errorMessage);


        Serial.println(log);
        file.println(log);

        file.close();
    }
}

/* function to display stuff on screen when not logging.
    Show time at the top, wifi connection, if have internet, and a meme or a 
    message that may or may not cycle. */
void displayNormal()
{
    // prepare time information
    DateTime now = rtc.now();

    String month;
    uint8_t month_num = now.month();
    if (month_num == 1)       month = "Jan";
    else if (month_num == 2)  month = "Feb";
    else if (month_num == 3)  month = "Mar";
    else if (month_num == 4)  month = "Apr";
    else if (month_num == 5)  month = "May";
    else if (month_num == 6)  month = "Jun";
    else if (month_num == 7)  month = "Jul";
    else if (month_num == 8)  month = "Aug";
    else if (month_num == 9)  month = "Sep";
    else if (month_num == 10) month = "Oct";
    else if (month_num == 11) month = "Nov";
    else if (month_num == 12) month = "Dec";

    String time = String(now.hour()) + ":" + String(now.minute()) + ":" + 
        String(now.second()) + " " + month + "/" + String(now.day()) + "/" + 
        String(now.year());
    char timeChar[40];
    time.toCharArray(timeChar, 40);

    //If 30 seconds to logging display countdown then flash screen
    // otherwise just display normal shit
    if (timeToLog() > 30)
    {
        chartStat curStat = whoIsChoreDoer();
        String pepol[5] = {"LUC", "MIH", "NAT", "VIG", "???"};

        String choreDoerLine = pepol[curStat.chore0_doer] + "  " + 
                               pepol[curStat.chore1_doer] + "  " +
                               pepol[curStat.chore2_doer] + "  " + 
                               pepol[curStat.chore3_doer];
        char choreDoerLineChar[20];
        choreDoerLine.toCharArray(choreDoerLineChar, 20);

        u8g2.clearBuffer();
        u8g2.setFont(u8g2_font_6x13_tr);
        u8g2.drawStr(0, 15, timeChar);
        u8g2.drawStr(0, 35, "Dish DWas Tras Recy");
        u8g2.drawStr(0, 55, choreDoerLineChar);
        u8g2.sendBuffer();
    }
    else
    {
        char timeToLogChar[20];
        sprintf(timeToLogChar, "%u seconds", timeToLog());

        u8g2.clearBuffer();
        u8g2.setFont(u8g2_font_6x13_tr);
        u8g2.drawStr(0, 15, timeChar);
        u8g2.drawStr(0, 35, "CAPTURING DATA IN:");
        u8g2.setFont(u8g2_font_6x13_tr);
        u8g2.drawStr(0, 55, timeToLogChar);
        u8g2.sendBuffer();
    }
}

void setup()
{
    //set this for serial monitor debug
    Serial.begin(9600);

    //setup peripherals
    Serial.println("Initializing!");

    setup_OLED();
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_9x18B_tf );
    u8g2.drawStr(0, 30, "Initializing");
    u8g2.drawStr(0, 45, "    Baby!");
    u8g2.sendBuffer();

    setup_VL53L0Xarray();
    setup_RTC();
    setup_SD();

    if (!printErrorMessage())
    {
        Serial.println("Initialization Done! No Errors!");
        u8g2.clearBuffer();
        u8g2.setFont(u8g2_font_9x18B_tf );
        u8g2.drawStr(0, 30, "Initialization");
        u8g2.drawStr(0, 45, "    done!");
        u8g2.drawStr(0, 60, " No Errors :)");
        u8g2.sendBuffer();
        delay(500);
    }

    //enter infinite while loop that contains the central functionality.
    while(1)
    {   
        /*Erder of operations:
            Within 60 seconds of set daily log time, start a countdown with
            a message on OLED and serial print saying COUNTDOWN TO LOG with 
            numbers counting down, then a message if log is successful. 
            If not successful, append message to errorMessage and display
            printErrorMessage().
            Otherwise, in normal times, if printErrorMessage() is false,
            run displayNormal()
        */

        //alert user of errors if any for immediate remedy. If error detected,
        // halt operation immediately.
        runtimechecks();
        if (!printErrorMessage()) 
        {
            displayNormal();
            loggywoggy();
        }
        else
        {
            while(1);
        }
    }
}

void loop()
{

}