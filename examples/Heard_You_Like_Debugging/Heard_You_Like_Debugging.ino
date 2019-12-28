#include "ESP32_Debug.h"

ESP32_Debug* debug;

void setup(){
  debug = new ESP32_Debug();
}

void loop(){
    debug->serial->println("Yo dawg!");
    debug->serial->println("I heard you like debugging.");
    debug->serial->println("So I put a bug in your debugger,");
    debug->serial->println("so you can debug");
    debug->serial->println("while you're debugging!");
    delay(1000);
}
