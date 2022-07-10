//LEDs
const int ledGreen = 13;
const int ledRed = 12;

const int buzzer = 10;

//Buttons
const int buttonGreen = 8;
const int buttonRed = 7;

void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(buttonGreen, INPUT);

}

void loop() {
  delay(random(2000, 8000));
  tone(buzzer, 1000);
  while (true){
     if(digitalRead(buttonGreen) == HIGH){
      digitalWrite(ledGreen, HIGH);
      noTone(buzzer);
      break;
    }
    if(digitalRead(buttonRed) == HIGH){
      digitalWrite(ledRed, HIGH);
      noTone(buzzer);
      break;
    }
  }
  delay(500);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, LOW);
}
