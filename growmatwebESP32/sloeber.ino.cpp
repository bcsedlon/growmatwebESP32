#ifdef __IN_ECLIPSE__
//This is a automatic generated file
//Please do not modify this file
//If you touch this file your change will be overwritten during the next build
//This file has been generated on 2018-04-16 22:31:07

#include "Arduino.h"
#include "Arduino.h"
#include "driver/touch_pad.h"
#include "soc/rtc_cntl_reg.h"
#include "soc/sens_reg.h"
extern const char* TAG;
#define TOUCH_THRESH_NO_USE   (0)
#define TOUCH_THRESH_PERCENT  (99)
extern bool s_pad_activated[];
extern uint32_t s_pad_init_val[];
#define DEVICES_NUM 8
#define OUTPUT_BIT 0
#define MANUAL_BIT 1
#define CMD_BIT 2
#define UNACK_BIT 3
extern float temperature;
extern float analogIn;
extern float temperatureDHT;
extern IPAddress deviceIP;
extern bool isAP;
extern bool checkin;
#include <Wire.h>
#include "libraries/OLED/SSD1306.h"
#include "libraries/OLED/OLEDDisplayUi.h"
#include "images.h"
#define OLED_ADDRESS 0x3c
#define OLED_SDA 5
#define OLED_SCL 4
extern SSD1306 display;
#define ARDUINO_RUNNING_CORE 1
extern bool error;
#define X2 128
extern FrameCallback frames[];
extern int frameCount;
extern OverlayCallback overlays[];
extern int overlaysCount;
extern int lastFrameNo;
extern String lastMessage;
#include "WiFi.h"
#include <DNSServer.h>
#include <WebServer.h>
#include "libraries/WiFiManager/src/WiFiManager.h"
#include <HTTPClient.h>
#include <ESPmDNS.h>
#include <ArduinoOTA.h>
extern WebServer server;
extern const char* host;
extern const char* update_path;
extern char* htmlHeader;
extern char* htmlFooter;
extern const char* www_username;
extern char www_password[];
extern char serverName[];
extern char writeApiKey[];
extern unsigned int talkbackID;
extern char talkbackApiKey[];
extern HTTPClient http;
extern int httpCode;
extern unsigned int errorCounter;
#include <WiFiUdp.h>
#include <EEPROM.h>
extern unsigned int r1Off;
extern unsigned int r1On;
extern unsigned int r2Off;
extern unsigned int r2On;
extern unsigned int r3Off;
extern unsigned int r3On;
extern unsigned int r4Off;
extern unsigned int r4On;
extern unsigned int rAllOff;
extern unsigned int rAllOn;
#include "libraries/RCSwitch.h"
extern RCSwitch rcSwitch;
#define RFTX_PIN 22
#include <WiFiUdp.h>
#include "libraries/NTPClient.h"
extern WiFiUDP ntpUDP;
extern NTPClient timeClient;
#include "libraries/interval.h"
extern Interval minInterval;
extern unsigned long secCounter;
extern unsigned long cyclerSecCounter;
extern bool secOverflow;
#include "libraries/Timezone.h"
extern TimeChangeRule CEST;
extern TimeChangeRule CET;
extern Timezone CE;
#define CONFIG_WIFI_PIN 17
#define ONEWIREBUS_PIN 21
#define LED0_PIN 16
#include "libraries/OneWire.h"
#include "libraries/DallasTemperature.h"
extern OneWire oneWire;
extern DallasTemperature oneWireSensors;
#define DHT_PIN 12
#include "libraries/DHT.h"

static void tp_example_set_thresholds(void) ;
static void tp_example_read_task(void *pvParameter) ;
static void tp_example_rtc_intr(void * arg) ;
static void tp_example_touch_pad_init() ;
void loop1(void *pvParameters) ;
void msOverlay(OLEDDisplay *display, OLEDDisplayUiState* state) ;
void drawFrame1(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrame2(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrame3(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrameA1(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
String deviceToString(struct Device device);
void drawFrameD1(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrameD2(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrameD3(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrameM1(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrameM2(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrameM3(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrameM4(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrameM5(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawFrameM6(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) ;
void drawDisplay(OLEDDisplay *display) ;
void drawDisplay(OLEDDisplay *display, int frame) ;
void drawMessage(OLEDDisplay *display, String msg) ;
String getDeviceForm(int i, struct Device devices[]) ;
void handleRoot();
void saveApi() ;
void saveInstruments() ;
void startWiFiAP() ;
void setup() ;
void loop() ;

#include "growmatwebESP32.ino"


#endif
