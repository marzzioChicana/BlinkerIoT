#ifndef blinker_h
#define blinker_h
class Blinker {
  private:
    int pin;

  public:
    Blinker(int pin);
    void setupLed();
    void turnOn();
    void turnOff();
    void makePause();
    void blinkOnce();
};
#endif