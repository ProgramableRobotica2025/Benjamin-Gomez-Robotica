int green = 9;
int red = 8;
int blue = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  luces()
}
void luces() {
  digitalWrite(red, HIGH);
  digitalWrite(red, LOW);
  delay(300)
  digitalWrite(green,HIGH);
  digitalWrite(green, LOW);
  delay(300);
  digitalWrite(blue, HIGH);
  digitalWrite(blue, LOW);
  delay(300); 
}
