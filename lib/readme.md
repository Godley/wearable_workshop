Basic library, called "Pixels", which is a class wrapping around Adafruit Neopixel library.

Usage:
------------------------------------------------------------------------------------------------------------
Initialise the class using:
Pixels P = Pixels(NUMBER,PIN,NEO_GRB + NEO_KHZ800,STARTING_COLOR)

Methods included:
setBright(int): sets the pixel brightness to the param and updates pixels.
TurnOnLight(id): turns on the selected pixel
TurnOffLight(id): turns off the selected pixel
setCol(id,col): sets the selected pixel to a particular colour

Fairly simple, just tidies up a lot of code I didn't really need to show the kids.
