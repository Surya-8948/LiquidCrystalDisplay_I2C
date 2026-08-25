//PRINTING TEXT ON LCD DISPLAY (16*2)
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

String message = " Hellow Every one Welcome to the World Of Embedded System , warmly welcomes you & wishing you for the best from the best";
int scrollspeed = 300;
void setup() 
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(5,0);
  lcd.print("Welcome ");
}
void loop()
 {
 scrolltext(message,0,1);

}

void scrolltext(String data, int col, int row)
{
 if(data.length()<=16)
 {
 lcd.setCursor(col,row);
 lcd.print(data);
delay(1000);
 return;
 } 

for(int i= 0;i<data.length()-15;i++)
{
lcd.setCursor(col,row);
lcd.print(data.substring(i,i+16));
delay(scrollspeed);
}
}
