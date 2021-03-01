int LEDgreen = 8, LEDred = 9;
int delay_red = 250, delay_green = 500, num_green_blinks = 6;
int LED_onboard = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDred, OUTPUT);
  pinMode(LED_onboard, OUTPUT);
}

void loop() {
  int i;
  // put your main code here, to run repeatedly:
  digitalWrite(LED_onboard, LOW);
  digitalWrite(LEDred, LOW);
  for( i = 0; i<num_green_blinks ; i++ ) {
    digitalWrite(LEDgreen, HIGH);
    delay(delay_green);
    digitalWrite(LEDgreen, LOW);
    delay(delay_green);
    }
  
  digitalWrite(LEDred, HIGH);
  delay(delay_red);
  digitalWrite(LEDred, LOW);
}
