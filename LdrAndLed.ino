const int ldrPin = A0;
const int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ldrPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);

  if (ldrValue > 600) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  Serial.println(ldrValue);

  delay(100);
}
