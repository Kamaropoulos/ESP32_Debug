# ESP32_Debug
### Straight forward debugging for ESP32 with the use of Serial2.

So let's say you're working on a project with ESP32 and you want to check what's wrong in your code.

One quick solution would be to print some debug info out in the Serial and read it using a serial monitor.

But now what if you are already using that Serial for something else and can't really put out abstract messages because it would start breaking more things? Lucky for us, we can use the ESP32's second Serial interface, Serial2. But even that needs some initialization.

```cpp
#define RXD2 16
#define TXD2 17
 
void setup() {
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
}
 
void loop() {
  Serial2.println("Hello World!");
}
```

Okay, so that's not really that bad now, is it? But when you just want to test something real quick, even that adds up, looking for the pins, entering the correct numbers and all.

Enter ESP32_Debug! By just adding one simple include to your code, you can now print data on Serial2!

```cpp
#include "ESP32_Debug.h"

void setup() {

}

void loop() {
  ESP32Debug.println("Hello World!");
}
```

More configuration options should be coming soon too.
