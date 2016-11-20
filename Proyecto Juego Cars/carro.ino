/* LCD custom character demo */

// include the library code:
#include <LiquidCrystal.h>
int estado=0;
int bandera=0;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// make some custom characters:
byte carroDef[8] = {
   0b00000,
   0b11000,
   0b11110,
   0b01111,
   0b01111,
   0b11110,
   0b11000,
   0b00000
};

byte pillDef[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b01100,
  0b01100,
  0b00000,
  0b00000,
  0b00000
};

const byte carro = 0x0;
const byte pill = 0x2;
const int del = 250;

int x = 15;
int y = 0;
int px = 0;
int py = 0;
int z ;
void setup() {
  
  lcd.createChar(0, carroDef);
  lcd.createChar(2, pillDef);  
  lcd.begin(16, 2);
  pinMode(7,INPUT);
  lcd.write(carro);
 
}

void loop() {
  z=random(0,2);
  mover();
  anim();
  x--;
  if(x==-1){
    x=15;
  }

}


void fill()
{
 
  lcd.setCursor(15,z);
  lcd.write(pill);
  
}

// character animation
void anim()
{
 
  lcd.setCursor(px,py);
  lcd.write(" ");
  lcd.setCursor(x,z);
  lcd.write(pill);

  delay(del);
  
  px = x;
  py = z;
}

void mover()
{
  
  estado=digitalRead(7);
  delay(80);
  estado=digitalRead(7);
  if(estado == HIGH)
  {
    if(bandera==0)
    {
      bandera=1;
      lcd.setCursor(0,0);
      lcd.write(" ");
      lcd.setCursor(0,1);
      lcd.write(carro);
    }else{
      bandera=0;
      lcd.setCursor(0,1);
      lcd.write(" ");
       lcd.setCursor(0,0);
      lcd.write(carro);
    
    }
  }
}



