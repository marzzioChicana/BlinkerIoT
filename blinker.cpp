#include "blinker.h"
#include "Arduino.h"

Blinker::Blinker(int pin) {
  this->pin = pin;
}

void Blinker::setupLed() {
  pinMode(pin, OUTPUT);
}

void Blinker::turnOn() {
  digitalWrite(pin, HIGH);
}

void Blinker::turnOff() {
  digitalWrite(pin, LOW);
}

void Blinker::makePause() {
  delay(1000);
}

void Blinker::blinkOnce() {
  turnOn();
  makePause();
  turnOff();
  makePause();
}