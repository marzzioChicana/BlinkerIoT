#include "blinker.h"

Blinker ledBlinker(12);

void setup() {
  // put your setup code here, to run once:
  ledBlinker.setupLed();
}

void loop() {
  // put your main code here, to run repeatedly:
  ledBlinker.blinkOnce();
}