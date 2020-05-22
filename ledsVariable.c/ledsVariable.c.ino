
int potIn = A0;
int potValue = 0;
int count = 6;
int leds[] = {13, 12, 11, 10, 9, 8};
bool flag = HIGH;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < count; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for (int i = 0; i < count; i++) {
    potValue = analogRead(potIn);
    digitalWrite(leds[i], HIGH);
    delay(potValue);
    digitalWrite(leds[i], LOW);
  }

  for (int i = (count - 1); i >= 0; i--) {
    potValue = analogRead(potIn);
    digitalWrite(leds[i], HIGH);
    delay(potValue);
    digitalWrite(leds[i], LOW);
  }

}
