#include <LiquidCrystal.h>
LiquidCrystal lcd(10,9,7,6,5,4);
float value;
float milivolt;
int temp;

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(A2);
milivolt= (value*5000)/1024;
temp=milivolt/10;
lcd.setCursor(1,0);
lcd.print("Digital thermometer ");
lcd.setCursor(1,1);
lcd.print("Temp is = ");
lcd.print(temp);
lcd.print("* C");
}
