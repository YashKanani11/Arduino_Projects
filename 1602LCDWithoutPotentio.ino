#include <LiquidCrystal.h>
int Contrast = 75;
int Potentio_Replace_PIN=11;  // must be a pwm pin as we need to control/change it for optimaum viewing
LiquidCrystal lcd(10, 12, 9, 8, 7, 6, 5, 4, 3, 2);
// RS pin => 10
// E pin => 12
// 9 to 3 are data pins

void setup() {
  analogWrite(Potentio_Replace_PIN, Contrast);
  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("HELLO WORLD!");
}
void loop() {

  lcd.setCursor(0, 1);
  lcd.print("LOST KID YASH");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("             ");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Subscribe :/");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("           ");
  delay(1000);
}


// other functions one can try
// 1. cursor(): Displays the LCD cursor.
// 2. noCursor(): Hides the LCD cursor.
// 3. blink(): Displays the blinking LCD cursor.
// 4. noBlink(): Hides the blinking LCD cursor.
// 5. clear(): Clears the LCD screen and positions the cursor in the upper-left corner.
// 6. home(): Positions the cursor in the upper-left corner.
// 7. noDisplay(): Turns off the LCD screen.
// 8. scrollDisplayLeft(): Scrolls the contents of the display to the left.
// 9. scrollDisplayRight(): Scrolls the contents of the display to the right.
// 10. autoscroll(): Turns on automatic scrolling of the LCD.
// 11. noAutoscroll(): Turns off automatic scrolling of the LCD.