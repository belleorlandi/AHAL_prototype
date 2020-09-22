#ifndef MY_LED_H
#define MY_LED_H
#include <Arduino.h>

class LED {
  
  private:
    byte pin;
    
  public:
    LED(byte pin);
    void init();
    void on();
    void off();
};
#endif
