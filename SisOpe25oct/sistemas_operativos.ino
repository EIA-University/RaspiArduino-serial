int incomingByte = 0;
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(115200);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  //lcd.print("hello, world!");
}
 
void loop() {
  lcd.setCursor(0, 1);
  if (Serial.available()) {
      incomingByte = Serial.read();
      Serial.write("Recibi datos");
      lcd.print(incomingByte);
  }
  else{
      Serial.write("Hola Raspberry\n");
      delay(1000);
      lcd.print("hello, world!");
  }
  delay(5000);
}

