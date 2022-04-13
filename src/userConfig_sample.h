/**
 * @file    userConfig_sample.h
 * @brief   Values must be configured by the user
 * @version 3.0.1 Alpha
 *
 */

/**
 * Define area, do not change anything here
 */
#ifndef _userConfig_H
#define _userConfig_H

// firmware version (must match with definitions in the main source file)
#define USR_FW_VERSION    3
#define USR_FW_SUBVERSION 0
#define USR_FW_HOTFIX     1
#define USR_FW_BRANCH     "ALPHA"

// List of supported machines
enum MACHINE {
    RancilioSilvia,   // MACHINEID 0
    RancilioSilviaE,  // MACHINEID 1
    Gaggia,           // MACHINEID 2
    QuickMill         // MACHINEID 3
};

/**
 * Preconfiguration
 */

// Machine
#define MACHINEID 0                // see above list of supported machines

// Display
#define OLED_DISPLAY 2             // 0 = deactivated, 1 = SH1106 (e.g. 1.3 "128x64), 2 = SSD1306 (e.g. 0.96" 128x64)
#define OLED_I2C 0x3C              // I2C address for OLED, 0x3C by default
#define DISPLAYTEMPLATE 3          // 1 = Standard Display Template, 2 = Minimal Template, 3 = only Temperatur, 4 = Scale Template, 20 = vertical Display see git Handbook for further information
#define DISPLAYROTATE U8G2_R0      // rotate display clockwise: U8G2_R0 = no rotation; U8G2_R1 = 90°; U8G2_R2 = 180°; U8G2_R3 = 270°
#define SHOTTIMER 1                // 0 = deactivated, 1 = activated 2 = with scale
#define HEATINGLOGO 0              // 0 = deactivated, 1 = Rancilio, 2 = Gaggia
#define OFFLINEGLOGO 1             // 0 = deactivated, 1 = activated
#define BREWSWITCHDELAY 3000       // time in ms
#define LANGUAGE 1                 // LANGUAGE = 0 (DE), LANGUAGE = 1 (EN), LANGUAGE = 2 (ES)

// Connectivity
#define CONNECTMODE 1              // 0 = offline 1 = WIFI-MODE 2 = AP-MODE (not working in the moment)
#define MQTT 0                     // 1 = MQTT enabled, 0 = MQTT disabled
#define INFLUXDB 0                // 1 = INFLUX enabled, 0 = INFLUX disabled

// PID & Hardware
#define ONLYPID 1                  // 1 = Only PID, 0 = PID and preinfusion
#define ONLYPIDSCALE 0             // 0 = off , 1= OnlyPID with Scale
#define BREWMODE 1                 // 1 = NORMAL preinfusion ; 2 = Scale with weight
#define BREWDETECTION 1            // 0 = off, 1 = Software (Onlypid 1), 2 = Hardware (Onlypid 0), 3 = Sensor/Hardware for Only PID
#define BREWSWITCHTYPE 1           // 1 = normal Switch, 2 = Trigger Switch
#define COLDSTART_PID 1            // 1 = default coldstart values, 2 = custom values
#define TRIGGERTYPE HIGH           // LOW = low trigger, HIGH = high trigger relay
#define VOLTAGESENSORTYPE HIGH     // BREWDETECTION 3 configuration
#define PINMODEVOLTAGESENSOR INPUT // Mode INPUT_PULLUP, INPUT or INPUT_PULLDOWN_16 (Only Pin 16)
#define PRESSURESENSOR 0           // 1 = pressure sensor connected to A0; PINBREWSWITCH must be set to the connected input!

//Weight SCALE
#define SCALE_WEIGHTSETPOINT 30             // In grams
#define SCALE_SAMPLES 2                     // Load cell sample rate
#define SCALE_CALIBRATION_FACTOR 3195.83    // Raw data is divided by this value to convert to readable data


/* Pressure sensor
 *
 * measure and verify "offset" value, should be 10% of ADC bit reading @supply volate (3.3V)
 * same goes for "fullScale", should be 90%
 */
#define OFFSET      102            // 10% of ADC input @3.3V supply = 102
#define FULLSCALE   922            // 90% of ADC input @3.3V supply = 922
#define MAXPRESSURE 200

/// Wifi
#define HOSTNAME "wifi-hostname"
#define D_SSID "myssid"
#define PASS "mypass"
#define MAXWIFIRECONNECTS 5        // maximum number of reconnection attempts, use -1 to deactivate
#define WIFICINNECTIONDELAY 10000  // delay between reconnects in ms

// OTA
#define OTA true                   // true = OTA activated, false = OTA deactivated
#define OTAHOST "ota_hostname"     // Name to be shown in ARUDINO IDE Port
#define OTAPASS "otapass"          // Password for OTA updtates

// MQTT
#define MQTT_USERNAME "mymqttuser"
#define MQTT_PASSWORD "mymqttpass"
#define MQTT_TOPIC_PREFIX "custom/Küche."  // topic will be "<MQTT_TOPIC_PREFIX><HOSTNAME>/<READING>"
#define MQTT_SERVER_IP "XXX.XXX.XXX.XXX"   // IP-Address of locally installed mqtt server
#define MQTT_SERVER_PORT 1883

// INFLUXDB
#define INFLUXDB_URL ""            // InfluxDB server address
#define INFLUXDB_AUTH_TYPE 1       // 1 = API Token , 2 = User/Pass
#define INFLUXDB_API_TOKEN ""
#define INFLUXDB_ORG_NAME ""
#define INFLUXDB_USER ""
#define INFLUXDB_PASSWORD ""
#define INFLUXDB_DB_NAME "coffee"  // InfluxDB bucket name
#define INFLUXDB_INTERVAL 5000     // Send interval in milliseconds

// System Parameters (default values)
#define SETPOINT 95                // brew temperatur setpoint
#define STEAMSETPOINT 120          // steam temperatur setpoint
#define BREWDETECTIONLIMIT 150     // brew detection limit, be carefull: if too low, then there is the risk of wrong brew detection and rising temperature
#define AGGKP 69                   // PID Kp (regular phase)
#define AGGTN 399                  // PID Tn (regular phase)
#define AGGTV 0                    // PID Tv (regular phase)
#define STARTKP 50                 // PID Kp (coldstart phase)
#define STARTTN 150                // PID Tn (coldstart phase)
#define STEAMKP 150                // PID kp (steam phase)
#define AGGBKP 50                  // PID Kp (brew detection phase)
#define AGGBTN 0                   // PID Tn (brew detection phase)
#define AGGBTV 20                  // PID Tv (brew detection phase)
#define BREW_TIME 25               // brew time in seconds
#define BREW_SW_TIMER 45           // brew software timer after detection in seconds
#define PRE_INFUSION_TIME 2        // pre-infusion time in seconds
#define PRE_INFUSION_PAUSE_TIME 5  // pre-infusion pause time in seconds

// Backflush values
#define FILLTIME 3000              // time in ms the pump is running
#define FLUSHTIME 6000             // time in ms the 3-way valve is open -> backflush
#define MAXFLUSHCYCLES 5           // number of cycles the backflush should run, 0 = disabled

// Pin Layout
#define ONE_WIRE_BUS 2             // Temp sensor pin
#define PINPRESSURESENSOR 99       // Pressuresensor 0: A0 (ESP8266), >0 ONLY ESP32
#define PINVALVE 12                // Output pin for 3-way-valve
#define PINPUMP 13                 // Output pin for pump
#define PINHEATER 14               // Output pin for heater
#define PINVOLTAGESENSOR  15       //Input pin for volatage sensor
#define PINETRIGGER 16             // PIN for E-Trigger relay
#define PINBREWSWITCH 0            // 0: A0 (ESP8266) ; >0 : DIGITAL PIN, ESP32 OR ESP8266: ONLY USE PIN15 AND PIN16!
#define PINSTEAMSWITCH 17          // STEAM active
#define LEDPIN    18               // LED PIN ON near setpoint
#define OLED_SCL 5                 // Output pin for dispaly clock pin
#define OLED_SDA 4                 // Output pin for dispaly data pin
#define HXDATPIN 99                // weight scale PIN
#define HXCLKPIN 99                // weight scale PIN
#define SCREEN_WIDTH 128           // OLED display width, in pixels
#define SCREEN_HEIGHT 64           // OLED display height, in pixels

// Historic (no settings)
#define PONE 1                     // 1 = P_ON_E (default), 0 = P_ON_M (special PID mode, other PID-parameter are needed)
#define TEMPSENSOR 2               // 2 = TSIC306 1=DS18B20

// Check BrewSwitch
#if (defined(ESP8266) && ((PINBREWSWITCH != 15 && PINBREWSWITCH != 0 && PINBREWSWITCH != 16 )))
  #error("WRONG Brewswitch PIN for ESP8266, Only PIN 15 and PIN 16");
#endif


// defined compiler errors
#if (PRESSURESENSOR == 1) && (PINPRESSURESENSOR == 0) && (PINBREWSWITCH == 0)
    #error Change PINBREWSWITCH or PRESSURESENSOR!
#endif

#endif
