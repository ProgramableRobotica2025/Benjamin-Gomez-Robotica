int green = 9;
int red = 8;
int blue = 10;
int buzzer = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buzzer, OUTPUT);
void loop() {
  // put your main code here, to run repeatedly:
  luces_buzzer();
}
void luces_buzzer() {
  digitalWrite(red, HIGH);
  digitalWrite(red, LOW);
  analogWrite(buzzer, 720);
  delay(300);
  digitalWrite(green,HIGH);
  digitalWrite(green, LOW);
  analogWrite(buzzer, 520);
  delay(300);
  digitalWrite(blue, HIGH);
  digitalWrite(blue, LOW);
  analogWrite(buzzer, 827);
  delay(300); 
}
