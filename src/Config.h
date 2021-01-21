#ifndef config_h
#define config_h

#include "Arduino.h"
#include "IotWebConf.h"
#include "IotWebConfESP32HTTPUpdateServer.h"



class MyConfig {
public:
    
    IotWebConf iotWebConf;


    private:
#ifdef ESP8266
  ESP8266HTTPUpdateServer httpUpdater;
#elif defined(ESP32)
  HTTPUpdateServer httpUpdater;
#endif
    

};

#endif