int LED_green = 9, LED_red = 8;
int RED_on = 300, RED_off = 200, GREEN_on = 100, GREEN_off = 250;
int green_blink = 6, red_blink = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_green, OUTPUT);
  pinMode(LED_red, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i, j;
  Serial.println("Green Counter");
  digitalWrite(13, LOW);
  for (i = 0; i < green_blink; i++) {
    Serial.println(i);
    digitalWrite(LED_green, HIGH);
    delay(GREEN_on);
    digitalWrite(LED_green, LOW);
    delay(GREEN_off);
    }
  Serial.println("Red Counter");
  digitalWrite(LED_green, LOW);
  for (j = 0 ; j < red_blink; j++) {
    Serial.println(j);
    digitalWrite(LED_red, HIGH);
    delay(RED_on);
    digitalWrite(LED_red, LOW);
    delay(RED_off);
    }
  Serial.println();
}
