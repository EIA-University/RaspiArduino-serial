#include <TVout.h>
#include <fontALL.h>
#include "schematic.h"
#include "TVOlogo.h"

TVout TV;

int incomingByte = 0;
void setup() {
  Serial.begin(115200);
  
  TV.begin(NTSC,120,96);
  TV.clear_screen();
  TV.select_font(font6x8);
 // intro();
  TV.println("I am the TVout\nlibrary running on a freeduino\n");
  TV.clear_screen();
}

void loop() {
  TV.clear_screen();
   if (Serial.available()) {
      incomingByte = Serial.read();
      Serial.write("Recibi datos");
      TV.print(incomingByte);
  }
  else{
      Serial.write("Hola Raspberry\n");
      delay(1000);
      TV.print("hello, world!");
  }
  delay(100000);
}
