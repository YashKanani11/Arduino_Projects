#include <LCD_I2C.h>

#define BRIGHNESS 9 // select your pwm pin here
int brValue = 50;   // control the brightness (0-255)
LCD_I2C lcd(0x27);  // if no resister added to ur I2C, watch video for more info

void setup() {
  pinMode(BRIGHNESS, OUTPUT);
  analogWrite(BRIGHNESS, brValue);
  lcd.begin();
  lcd.backlight();
  lcd.print("hello fam"); // set cursor not required bec by default it is already set to 0,0
}


void loop() {
  lcd.setCursor(0, 1);   // as want to print on second row only
  typeAnnimation("LOST KID YASH", 0, 1, 100);
  delay(1000);
  clearDisplayAnnimation(13, 1, 100);
  lcd.setCursor(0, 1);
  typeAnnimation("SUBSCRIBE ;]", 0, 1, 100);
  delay(1000);
  clearDisplayAnnimation(12, 1, 100);
  delay(1000);
}

void clearDisplayAnnimation(int lim, int row, int delaySec){

  for (int i=0;i<=lim;i++){
    lcd.print(" ");
    lcd.setCursor(i,row);
    delay(delaySec);
    delay(200);
  }
}

void typeAnnimation(const char* text, int col, int row, int delaySec){
  for(int i=0;i<strlen(text);i++){
    lcd.setCursor(col+i,row);
    lcd.print(text[i]);
    delay(delaySec);
  }
}


