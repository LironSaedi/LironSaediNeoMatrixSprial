
#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

#include <Adafruit_NeoPixel.h>
#include <Adafruit_NeoMatrix.h>
#include <gamma.h>

Adafruit_NeoMatrix matrix(8, 8, 5);
void setup()
{
 matrix.begin();
 matrix.setBrightness(40);
 matrix.clear();
}

int shift = 0;
void loop()
{
  //change color here

  for (int i = 0 + shift; i < 8 - shift; i++)
  {
    //start, end, and row change by 1
    matrix.drawPixel(i,shift,matrix.Color(255,0,0));
    matrix.show();
    delay(50);
  }

  //right
  //bottom
  //left


  shift++;
  if(shift == 8)
  {
    shift = 0;
  }
}
