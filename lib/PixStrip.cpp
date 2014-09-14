
#include <Adafruit_NeoPixel.h>

#include "PixStrip.h"
#include<string>;

Pixels::Pixels(uint16_t n, uint8_t p, uint8_t t) : Adafruit_NeoPixel(n,p,t)
{
  begin();
  setBrightness(40); // 1/3 brightness
};
void Pixels::SetPink(uint16_t id)
{
setPixelColor(id,0xff66ff);
show();
}

void Pixels::SetBlue(uint16_t id)
{
setPixelColor(id,0x0000ff);
show();
}
void Pixels::SetRed(uint16_t id)
{
setPixelColor(id,0xff0000);
show();
}
void Pixels::SetGreen(uint16_t id)
{
setPixelColor(id,0x00ff00);
show();
}
void Pixels::SetYellow(uint16_t id)
{
setPixelColor(id,0xffff00);
show();
}
void Pixels::SetCustom(uint16_t id, uint32_t col)
{
setPixelColor(id,col);
show();
}

void Pixels::SetWhite(uint16_t id)
{
setPixelColor(id,0xffffff);
show();
}

void Pixels::TurnOffLight(uint16_t id)
{
  setPixelColor(id,0x000000);
  show();
}

void Pixels::SetBright(uint8_t bright)
{
  setBrightness(bright);
  show();
}


