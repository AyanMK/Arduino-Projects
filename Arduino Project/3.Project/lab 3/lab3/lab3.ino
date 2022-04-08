void setup() {
  for(int i=10;i<=12;i++)
  {
    pinMode(i,OUTPUT);  //i=led
  }
}
void loop() {
  for(int i=10;i<=12;i++)
  {
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
    delay(1000);
  }
  for(int i=12;i>=10;i--)
  {
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
    delay(1000);
  }
}
