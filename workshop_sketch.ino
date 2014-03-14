// Low power NeoPixel earrings example.  Makes a nice blinky display
// with just a few LEDs on at any time...uses MUCH less juice than
// rainbow display!
 
#include <Adafruit_NeoPixel.h>
 
#define PIN 0
 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(2, PIN);

//uint32_t color[1]={0x4E89C7}; // girl guiding blue!
//uint32_t color[1]={0xFFFF00}; // yellow!
//uint32_t color[1]={0xFF0000}; //red
//uint32_t color[1]={0xFF4F01}; //orange
//uint32_t color[1]={0x00FF00}; // green
uint32_t color[6]={0x1D6FEE,0xD5442F,0xFFB706,0x1D6FEE,0x009350,0xD5442F}; // multi coloured!
uint8_t i=0;
uint8_t bright=30;
//uint8_t bright=50; // really bright!
uint8_t pix=0;
uint8_t neg=-1;
uint8_t timeToDelay=60;
//uint8_t timeToDelay=100; //longer delay!
//uint8_t timeToDelay=10; //very short delay!
uint8_t col=0;

//uint8_t pattern=1; // change pattern
//uint8_t pattern=2;
uint8_t pattern=2;
void setup() {
  pixels.begin();
  pixels.setBrightness(bright); // 1/3 brightness
  uint8_t i=0;
    for(i=0;i<2;i++)
  {
    pixels.setPixelColor(i,color[0]);
  }
  pixels.show();
}
 
void loop() {
  switch(pattern)
  {
    case 1:
      if(col<sizeof(color))
       {
         col++;
       }
     if(col==sizeof(color))
       {
         col=0;
       }
      for(i=0;i<2;i++)
      {
      pixels.setPixelColor(i,color[col]);
      }
      pixels.show();
      delay(timeToDelay);
  
      for(i=0;i<2;i++)
      {
        pixels.setPixelColor(i,0x000000);
      }
      pixels.show();
      delay(timeToDelay);
  
      //col++;
   case 2:
     if(col<sizeof(color))
       {
         col++;
       }
     if(col==sizeof(color))
       {
         col=0;
       }
     pixels.setPixelColor(i,color[col]);
     pixels.show();
     delay(timeToDelay);
     pixels.setPixelColor(i,0x000000);
     delay(timeToDelay);
     i++;
     if(i>=2)
     {
       i=0;
     }
   case 3:
     if(bright>30)
      {
      neg=-1;
      }
      if(bright<5)
      {
      neg=1;
      }
     if(col==sizeof(color))
      {
      col=0;
      }
     if(col<sizeof(color)-1)
     {
       col++;
     }
     bright+=neg;
     pixels.setBrightness(bright);
     pixels.setPixelColor(i,color[col]);
     pixels.show();
     delay(timeToDelay);
     if(i<2)
     {
       i++;
     }
     else
     {
       i=0;
     }
     
  }
}
