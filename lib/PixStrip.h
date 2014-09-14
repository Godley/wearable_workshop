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
    Pixels(uint16_t n, uint8_t p, uint8_t t);
	void SetPink(uint16_t id);
	void SetBlue(uint16_t id);
	void SetRed(uint16_t id);
	void SetGreen(uint16_t id);
	void SetYellow(uint16_t id);
	void SetWhite(uint16_t id);
	void SetCustom(uint16_t id, uint32_t col);
    void TurnOffLight(uint16_t id);
    void SetBright(uint8_t bright);
};
