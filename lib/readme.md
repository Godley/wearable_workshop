Basic library, called "Pixels", which is a class wrapping around Adafruit Neopixel library. Mainly made so that code can be more understandable for children, and so that I don't have unnecessary variables all over the place.

Usage:
------------------------------------------------------------------------------------------------------------
Initialise the class using:
<pre>#include "PixStrip.h"
#include "Adafruit_NeoPixel.h"

Pixels P = Pixels(NUMBER_LEDS,PIN,NEO_GRB + NEO_KHZ800)</pre>

Methods included:
setBright(int): sets the pixel brightness to the param and updates pixels.

Set<Pink,Red,Green,Blue,Yellow>(id): turns on the selected pixel to <color> and updates strip

SetCustom(id,hex_color): turns on the selected pixel to hex_color
TurnOffLight(id): turns off the selected pixel


Example:
<pre>
#include "PixStrip.h"
#include "Adafruit_NeoPixel.h"

Pixels P = Pixels(2,1,NEO_GRB + NEO_KHZ800)
void setup()
{
// all the setup for the pixels is now done inside the class
}

void loop()
{
P.SetRed(0);
delay(40);
P.TurnOffLight(0);
}</pre>
Fairly simple, just tidies up a lot of code I didn't really need to show the kids.
