


#include <PixStrip.h>

#include <Adafruit_NeoPixel.h>

Pixels P = Pixels(2,1,NEO_GRB + NEO_KHZ800);

void setup()
{
}

void loop()
{
  P.SetWhite(1);
  P.SetPink(0);
  delay(500);
  P.SetYellow(0);
  P.SetPink(1);
  delay(500);
  P.SetBlue(0);
  P.SetYellow(1);
  delay(500);
  P.SetRed(0);
  P.SetBlue(1);
  delay(500);
  P.SetGreen(0);
  P.SetRed(1);
  delay(500);
  P.SetGreen(1)
  P.SetWhite(0);
  
  delay(500);
}
