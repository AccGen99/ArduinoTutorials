int redTer = 3, greenTer = 5, blueTer = 6;
int redB = 0, greenB = 0, blueB = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redTer, OUTPUT);
  pinMode(greenTer, OUTPUT);
  pinMode(blueTer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redTer, redB);
  analogWrite(greenTer, greenB);
  analogWrite(blueTer, blueB);
}
