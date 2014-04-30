// sketch for wearables workshop. Uses a switch-case to put in different algorithms
// and variables for each changeable thing to make it easier to teach.
// also uses commenting and uncommenting to make it accessible for slow typists/make sure everything's correct.
 
#include <Adafruit_NeoPixel.h>
 
#define PIN 1
 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(2, PIN);

uint32_t color[1]={0x4E89C7}; // girl guiding blue!
//uint32_t color[1]={0xFFFF00}; // yellow!
//uint32_t color[1]={0xFF0000}; //red
//uint32_t color[1]={0xFF4F01}; //orange
//uint32_t color[1]={0x00FF00}; // green
//uint32_t color[6]={0x1D6FEE,0xD5442F,0xFFB706,0x1D6FEE,0x009350,0xD5442F}; // multi coloured!
uint8_t i=0;
uint8_t bright=30;
//uint8_t bright=50; // really bright!
uint8_t pix=2;
uint8_t neg=-1;
uint8_t timeToDelay=60;
//uint8_t timeToDelay=100; //longer delay!
//uint8_t timeToDelay=10; //very short delay!
uint8_t col=0;

//uint8_t pattern=1; // change pattern
uint8_t pattern=2;
//uint8_t pattern=3;
void setup() {
  pixels.begin();
  pixels.setBrightness(bright); // 1/3 brightness
  uint8_t i=0;
    for(i=0;i<pix;i++)
  {
    pixels.setPixelColor(i,color[0]);
  }
  pixels.show();
}
 
void loop() {
  switch(pattern)
  {
    case 1:
      if(col<sizeof(color)/sizeof(color[0]))
       {
         col++;
       }
     if(col==sizeof(color)/sizeof(color[0]))
       {
         col=0;
       }
      for(i=0;i<pix;i++)
      {
      pixels.setPixelColor(i,color[col]);
      }
      pixels.show();
      delay(timeToDelay);
  
      for(i=0;i<pix;i++)
      {
        pixels.setPixelColor(i,0x000000);
      }
      pixels.show();
      delay(timeToDelay);
      break;
      //col++;
   case 2:
     if(col<sizeof(color)/sizeof(color[0]))
       {
         col++;
       }
     if(col==sizeof(color)/sizeof(color[0]))
       {
         col=0;
       }
     pixels.setPixelColor(i,color[col]);
     pixels.show();
     delay(timeToDelay);
     pixels.setPixelColor(i,0x000000);
     delay(timeToDelay);
     i++;
     if(i>=pix-1)
     {
       i=0;
     }
     break;
   case 3:
     if(bright>30)
      {
      neg=-1;
      if(col>=sizeof(color)/sizeof(color[0]))
        {
        col=0;
        }
      if(col<sizeof(color)/sizeof(color[0])-1)
       {
       col++;
       }
      }
      if(bright<5)
      {
      neg=1;
      }
     
     bright+=neg;
     pixels.setBrightness(bright);
     pixels.setPixelColor(i,color[col]);
     pixels.show();
     delay(timeToDelay);
     if(i<pix-1)
     {
       i++;
     }
     else
     {
       i=0;
     }
     break;
     
  }
}
