#include<Servo.h>
Servo sm1,sm2,sm3,sm4;
int pos = 0;
void setup() {
  sm1.attach(9);
  sm2.attach(10);
  sm3.attach(11);
  sm4.attach(12);
}
void loop() {
  for(pos=0;pos<=180;pos++)
  {
    {
    sm1.write(pos);
    sm2.write(pos);
    delay(60);
    }
    {
    sm3.write(pos);
    sm4.write(pos);
    delay(25);
    }
  }
  for(pos=180;pos>=0;pos--)
  {
    sm1.write(pos);
    sm2.write(pos);
    delay(60);
    }
    {
    sm3.write(pos);
    sm4.write(pos);
    delay(25);
    }
}
