// Resistance = 220 Ohm;

int LED_Green = 13;
int time_on = 1000, time_off = 500;   //ms

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_Green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_Green, HIGH);
  delay(time_on);
  digitalWrite(LED_Green, LOW);
  delay(time_off);
}
