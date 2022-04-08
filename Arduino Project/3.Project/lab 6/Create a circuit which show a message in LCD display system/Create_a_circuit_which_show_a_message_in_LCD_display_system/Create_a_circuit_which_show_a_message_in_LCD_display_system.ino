#include <LiquidCrystal.h>
const int rs=9, en=8, d4=3, d5=2, d6=1, d7=0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  lcd.begin(16,2);
  lcd.print("CPI Lab Class!");
}
void loop() {
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
}
