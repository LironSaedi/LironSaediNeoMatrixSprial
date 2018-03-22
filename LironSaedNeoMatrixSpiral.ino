#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
Adafruit_NeoMatrix matrix(8, 8, 5);
void setup() {
  matrix.begin();
  matrix.setBrightness(40);
}

void loop() {
  matrix.clear();
  delay(50);
  for  (int row = 0; row < 8; row ++)
  {
    for (int col = 0; col < 8; col++)
    {
      matrix.drawPixel(col,row, matrix.Color(255,0,0));
      matrix.show();
      delay(50);
    }
  }
}
  

