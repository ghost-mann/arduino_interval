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
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;

        if (ledState == LOW) {
            ledState = HIGH;
        } else {
            ledState = LOW;
        }
        digitalWrite(ledPin,ledState);
    }
    
}