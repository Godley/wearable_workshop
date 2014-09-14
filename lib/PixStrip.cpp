
#include <Adafruit_NeoPixel.h>

#include "PixStrip.h"


Pixels::Pixels(uint16_t n, uint8_t p, uint8_t t,uint32_t col) : Adafruit_NeoPixel(n,p,t)
{
  int *_lights=new int[n];
  for(int i=0;i<n;i++)
  {
    _lights[i]=col;
  }
  begin();
  setBrightness(40); // 1/3 brightness
  uint8_t i=0;
  for(i=0;i<n;i++)
    {
    setPixelColor(i,_lights[i]);
    }
  show();
    
};
void Pixels::SetCol(int id, int col)
{
  _lights[id]=col;
};

void Pixels::TurnOnLight(int id)
{
  setPixelColor(id,_lights[id]);
  show();
};

void Pixels::TurnOffLight(int id)
{
  setPixelColor(id,0x000000);
  show();
}

void Pixels::SetBright(int bright)
{
  setBrightness(bright);
  show();
}
