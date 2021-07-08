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

  TODO: why vl53l0x max distance so low. make longer.
  TODO: test and store max and min vl53l0x distances.
  TODO: why OLED is not working.
  TODO: test SD card with one plugged in
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

File dataFile;

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
uint16_t const get_mm_VL53l0X(uint8_t sensorIndex)
{
    if (sensorIndex > 3)
    {
        errorMessage.concat("sensor index greater than 3 requested, bad!" + ERDELIM);
        return 6;
    }
    else
    {
        VL53L0X_RangingMeasurementData_t sensorMeasureObject;
        (sensorIndex == 0) ? VL53l0X_0.rangingTest(&sensorMeasureObject, false):
        (sensorIndex == 1) ? VL53l0X_1.rangingTest(&sensorMeasureObject, false):
        (sensorIndex == 2) ? VL53l0X_2.rangingTest(&sensorMeasureObject, false):
        VL53l0X_3.rangingTest(&sensorMeasureObject, false);

        // see https://documentation.help/VL53L0X-API/RangeStatusPage.html
        // 1,2,3,4,5 are various different error messages.
        // typical mm readouts are above 20ish anyway.
        if (sensorMeasureObject.RangeStatus != 0)
        {
            return sensorMeasureObject.RangeStatus;
        }
        return sensorMeasureObject.RangeMilliMeter;
    }
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
//TODO: implement creating log file if doesnt exist, and append if it does.
// include examples from 
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
    else if (!SD.begin(SPI_CS))
    {
        errorMessage.concat("Card failed init." + ERDELIM);
    }
}

/* setup 0.96" OLED screen */
void setup_OLED()
{
    if (!u8g2.begin())
    {
        errorMessage.concat("OLED failed init." + ERDELIM);
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
    u8g2.setFont(u8g2_font_9x18_tr);
    u8g2.drawStr(0, 45, "Initializing Baby!");

    setup_VL53L0Xarray();
    setup_RTC();
    setup_SD();

    Serial.println("Initialization Done!");
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_9x18_tr);
    u8g2.drawStr(0, 25, "Initialization done");
    u8g2.drawStr(0, 45, "you impatient ho.");

    while(1)
    {
        Serial.println(String(get_mm_VL53l0X(0)) + ", " + String(get_mm_VL53l0X(1)) + ", " + String(get_mm_VL53l0X(2)) + ", " + String(get_mm_VL53l0X(3)));
    }

    //enter infinite while loop that contains the central functionality.
    while(1)
    {
        //if errors present, halt loop and and display on OLED.
        //Note that OLED should ALWAYS be displaying something. So if OLED is off then
        // there is an error with OLED.
        if (errorMessage.length() != 0)
        {
            Serial.println("ERRORS --> " + errorMessage);
            u8g2.clearBuffer();
            u8g2.setFont(u8g2_font_9x18_tr);
            u8g2.drawStr(0, 25, "ERROR PRESENT!");
            u8g2.drawStr(0, 45, "CHECK SD log.txt!");

            //TODO: add errors to last element is log.txt csv line
            
            while(1); //infinite blocker here.
        }
    }
}

void loop()
{

}