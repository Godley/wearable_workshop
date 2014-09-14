


#include <PixStrip.h>

#include <Adafruit_NeoPixel.h>

Pixels P = Pixels(1,1,NEO_GRB + NEO_KHZ800,0xFFFFFF);

void setup()
{
}

void loop()
{
  delay(100);
  P.TurnOffLight(0);
  delay(100);
  P.TurnOnLight(0);
  //P.SetCol(0,0x00FF00);
  /*delay(20);
  P.SetCol(0,0xffaaff);
  P.TurnOnLight(0);*/
}
