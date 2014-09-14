Basic library, called "Pixels", which is a class wrapping around Adafruit Neopixel library. Mainly made so that code can be more understandable for children, and so that I don't have unnecessary variables all over the place.

Usage:
------------------------------------------------------------------------------------------------------------
Initialise the class using:
<pre>#include "PixStrip.h"
#include "Adafruit_NeoPixel.h"

Pixels P = Pixels(NUMBER,PIN,NEO_GRB + NEO_KHZ800,STARTING_COLOR)</pre>

Methods included:
setBright(int): sets the pixel brightness to the param and updates pixels.

TurnOnLight(id): turns on the selected pixel

TurnOffLight(id): turns off the selected pixel

setCol(id,col): sets the selected pixel to a particular colour

Example:
<pre>
void setup()
{
// all the setup for the pixels is now done inside the class
}

void loop()
{
P.TurnOnLight(0);
delay(40);
P.TurnOffLight(0);
}</pre>
Fairly simple, just tidies up a lot of code I didn't really need to show the kids.
