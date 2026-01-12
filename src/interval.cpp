#include <Arduino.h>
#include "interval.h"

int ledPin = 9;

int ledState = LOW;

unsigned long previousMillis = 0;

const long interval = 1000;

void init_interval() {
    pinMode(ledPin,OUTPUT);

}

void loop_interval() {
    // track current time
    unsigned long currentMillis = millis();

    // save new state as it changes
    if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;
        
        // if on switch to off and vice versa
        if (ledState == LOW) {
            ledState = HIGH;
        } else {
            ledState = LOW;
        }
        digitalWrite(ledPin,ledState);
    }
    
}