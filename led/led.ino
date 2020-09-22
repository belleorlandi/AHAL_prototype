#include "led.h"

#define LED_1_PIN 12
#define LED_2_PIN 13

LED led1(LED_1_PIN);
LED led2(LED_2_PIN);

void setup() {
  
}

void loop() {
  led1.on();
  led2.off();
  delay(300);
  led1.off();
  led2.on();
  delay(300);
  
}
