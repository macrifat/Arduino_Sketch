#include<LiquidCrystal.h>
LiquidCrystal lcd(10,9,7,6,5,4);
String a="I Love You Akhi";
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Stay_Home_&_Safe");
  lcd.setCursor(0,1);
  lcd.print(a);
  delay(500);
  lcd.clear();
  delay(500);
 

}
