#define led1 10
#define led2 9
#define led3 8
#define led4 7
#define led5 6
#define led6 5
#define led7 4

#define ledR 11
#define ledY 12
#define ledG 13
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledG, OUTPUT);
}
void loop() {
  //9
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,1);
  digitalWrite(led5,0);
  digitalWrite(led6,1);
  digitalWrite(led7,1);
  
  digitalWrite(ledR,1);
  digitalWrite(ledY,0);
  digitalWrite(ledG,0);
  delay(1000);
  //8
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,1);
  digitalWrite(led5,1);
  digitalWrite(led6,1);
  digitalWrite(led7,1);
  
  digitalWrite(ledR,1);
  digitalWrite(ledY,0);
  digitalWrite(ledG,0);
  delay(1000);
  //7
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);

  digitalWrite(ledR,1);
  digitalWrite(ledY,0);
  digitalWrite(ledG,0);
  delay(1000);
  //6
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  digitalWrite(led4,1);
  digitalWrite(led5,1);
  digitalWrite(led6,1);
  digitalWrite(led7,1);

  digitalWrite(ledR,0);
  digitalWrite(ledY,1);
  digitalWrite(ledG,0);
  delay(1000);
  //5
  digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  digitalWrite(led4,1);
  digitalWrite(led5,0);
  digitalWrite(led6,1);
  digitalWrite(led7,1);

  digitalWrite(ledR,0);
  digitalWrite(ledY,1);
  digitalWrite(ledG,0);
  delay(1000);
  //4
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,1);
  digitalWrite(led7,1);

  digitalWrite(ledR,0);
  digitalWrite(ledY,1);
  digitalWrite(ledG,0);
  delay(1000);
  //3
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,1);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,1);

  digitalWrite(ledR,0);
  digitalWrite(ledY,0);
  digitalWrite(ledG,1);
  delay(1000);
  //2
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  digitalWrite(led4,1);
  digitalWrite(led5,1);
  digitalWrite(led6,0);
  digitalWrite(led7,1);

  digitalWrite(ledR,0);
  digitalWrite(ledY,0);
  digitalWrite(ledG,1);
  delay(1000);
  //1
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,0);
  digitalWrite(led5,0);
  digitalWrite(led6,0);
  digitalWrite(led7,0);

  digitalWrite(ledR,0);
  digitalWrite(ledY,0);
  digitalWrite(ledG,1);
  delay(1000);
  //0
  digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  digitalWrite(led4,1);
  digitalWrite(led5,1);
  digitalWrite(led6,1);
  digitalWrite(led7,0);

  digitalWrite(ledR,1);
  digitalWrite(ledY,1);
  digitalWrite(ledG,1);
  delay(1000);
}
