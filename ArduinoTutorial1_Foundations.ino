int LED_onboard = 13;
int time_on = 1000;
int time_off = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_onboard, OUTPUT);    //Bumpy Text
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_onboard, LOW);
  delay(time_off);
  digitalWrite(LED_onboard, HIGH);
  delay(time_on);
}
