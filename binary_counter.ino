int ledPins[] = {12,11,10,9}; 
int count = 0; 

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  
  for (int i = 0; i < 16; i++) {
    displayBinary(i);
    delay(1000); 
  }
}

void displayBinary(int value) {
  for (int i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], (value >> i) & 0x01);
  }
}
