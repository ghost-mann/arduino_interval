 #include <Arduino.h>
 #include "interval.h"

int analogledPin = 9;

 void init_led() {
    pinMode(analogledPin,OUTPUT);

 }

 void loop_led() {
    for(int value = 0; value <= 255; value += 5) {
        analogWrite(analogledPin,value);
        delay(30);
    } 

 }