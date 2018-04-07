
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
  matrix.setBrightness(30);
  matrix.clear();
}

int shift = 0;
void loop()
{
  //change color here


  
  //top
  for (int i = 0 + shift; i <= 7 - shift; i++)
  {
    //start, end, and row change by 1
    matrix.drawPixel(i, shift, matrix.Color(0, 0 , 255));
    matrix.show();
    delay(100);
  }

  //right
  for (int i = 0 + shift; i <= 7 - shift; i++)
  {
    //start, end, and row change by 1
    matrix.drawPixel(7 - shift, i, matrix.Color(0, 125, 125));
    matrix.show();
    delay(100);
  }

  // bottom

  for (int i = 7 - shift; i >= 0 + shift; i--)
  {
    //start, end, and row change by 1
    matrix.drawPixel( i, 7 - shift, matrix.Color(0, 255, 0));
    matrix.show();
    delay(100);
  }

  // left
  for (int i = 7 - shift; i >= 0 + shift; i--)
  {
    //start, end, and row change by 1
    matrix.drawPixel( shift, i, matrix.Color(255, 0 , 0));
    matrix.show();
    delay(100);
  }

matrix.drawPixel(0,6, matrix.Color(189,23,23));

  matrix.drawPixel(1,7, matrix.Color(0,234,234));

  /*
    for (int i = 0 + shift; i < 8 - shift; i++)
    {
    //start, end, and row change by 1
    matrix.drawPixel(shift, i, matrix.Color(255, 0, 0));
    matrix.show();
    delay(50);
    }
  */





  //bottom

  //left

  shift++;
  if (shift == 8)
  {
    shift = 0;
    matrix.clear();
  }
}
