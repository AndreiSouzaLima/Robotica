LiquidCrystal lcd(12,11,5,4,3,2);
  
void setup()
{
  lcd.begin(16,2);
}

void loop()
{
  lcd.setCursor(2,0);
  lcd.print("Bem-vindo de");
  lcd.setCursor(5, 1);
  lcd.print("volta");
}