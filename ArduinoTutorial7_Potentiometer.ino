int potentioPin = A0;
int LEDpin = 9;
int readValue, writeValue;

void setup() {
  pinMode(potentioPin, INPUT);
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(potentioPin);
  writeValue = 255.0/1023.0 * readValue;
  Serial.println(writeValue);
  analogWrite(LEDpin, writeValue);
  delay(200);
}
