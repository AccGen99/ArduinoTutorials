int LED_green = 9, LED_red = 8;
int RED_on = 300, RED_off = 200, GREEN_on = 100, GREEN_off = 250;
int green_blink, red_blink;
String GreenMsg = "Green LED is Blinking!";
String RedMsg = "Red LED is Blinking!";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_green, OUTPUT);
  pinMode(LED_red, OUTPUT);
  pinMode(13, OUTPUT);

    // Reading in #Red Blinks
  Serial.println("Input numer of Red blinks - ");
  while( Serial.available()==0 ) {}
  red_blink = Serial.parseInt();

  // Reading in #Green Blinks
  Serial.println("Input number of Green blinks - ");
  while( Serial.available()==0 ) {}
  green_blink = Serial.parseInt();
}

void loop() {
  int i, j;
  Serial.println(GreenMsg);
  digitalWrite(13, LOW);
  for (i = 0; i < green_blink; i++) {
    Serial.println(i);
    digitalWrite(LED_green, HIGH);
    delay(GREEN_on);
    digitalWrite(LED_green, LOW);
    delay(GREEN_off);
    }
  Serial.println(RedMsg);
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
