#include "led.h"

LED::LED(byte pin) {
  // Use 'this->' to make the difference between the
  // 'pin' attribute of the class and the 
  // local variable 'pin' created from the parameter.
  this->pin = pin;
  init();
}

void LED::init() {
  pinMode(pin, OUTPUT);
  off();
}

void LED::on() {
  digitalWrite(pin, HIGH);
}

void LED::off() {
  digitalWrite(pin, LOW);
}
