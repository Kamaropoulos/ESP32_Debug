#include "Arduino.h"
#include "ESP32_Debug.h"

ESP32_Debug::ESP32_Debug(){
    this->serial = &Serial2;
    this->serial->begin(BAUDRATE_DEFAULT, SERIAL_8N1, RXD2, TXD2);
    // initialized = true;
}

ESP32_Debug::ESP32_Debug(int baudRate){
    this->serial = &Serial2;
    this->serial->begin(baudRate, SERIAL_8N1, RXD2, TXD2);
    // initialized = true;
}

ESP32_Debug::ESP32_Debug(int baudRate, int RX, int TX){
    this->serial = &Serial2;
    this->serial->begin(baudRate, SERIAL_8N1, RX, TX);
    // initialized = true;
}

// void ESP32_Debug::ensureInit(){
//     if(!this->initialized){
//         this->Initialize();
//     }
// }

// template<typename T>
// void ESP32_Debug::println(T arg){
//     this->ensureInit();
//     this->serial->println(arg);
// }
