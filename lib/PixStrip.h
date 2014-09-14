#include "Adafruit_NeoPixel.h"
#include "Arduino.h"
#include <unwind-cxx.h>
#include <StandardCplusplus.h>
#include <system_configuration.h>
#include <utility.h>
#include <vector>

using namespace std;

class Pixels : Adafruit_NeoPixel
{
  public:
    Pixels(uint16_t n, uint8_t p, uint8_t t, uint32_t col);
    void SetCol(int id, int col);
    void TurnOnLight(int id);
    void TurnOffLight(int id);
    void SetBright(int bright);
  private:
    int *_lights;
    int _pin; 
};
