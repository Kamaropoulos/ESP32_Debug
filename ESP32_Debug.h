#ifndef ESP32_Debug_h
#define ESP32_Debug_h

#include "Arduino.h"

#define RXD2 16
#define TXD2 17
#define BAUDRATE_DEFAULT 115200

class ESP32_Debug{
    public:
        ESP32_Debug();
        ESP32_Debug(int baudRate);
        ESP32_Debug(int baudRate, int RX, int TX);

        // template<typename T>
        // void println(T arg);

        HardwareSerial* serial;

    // private:
        // void ensureInit();
        // bool initialized = false;
};

#endif