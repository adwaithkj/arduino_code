#include <Servo.h>
Servo s;
  

int rmp = 10;
int rmn = 11;
int lmp = 5;
int lmn = 6;
int e = 15, t = 14;
void setup() {
  s.attach(3);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);

}

void loop() {
  
digitalWrite(rmp, HIGH);

    digitalWrite(rmn, LOW);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, HIGH);
  int i = 0;
  for (i = 0; i < 180; i++)
  { s.write(i);
    delay(10);

    
    digitalWrite(t, HIGH);
  delayMicroseconds(5);
  digitalWrite(t, LOW);
  delayMicroseconds(2);
  digitalWrite(t, HIGH);
  int p = pulseIn(e, HIGH); // put your main code here, to run repeatedly:
  int q = p * 0.017;
 
  if (q < 10)
  
  { digitalWrite(rmp, LOW);
    digitalWrite(rmn, HIGH);
    digitalWrite(lmp, HIGH);
    digitalWrite(lmn, LOW);
    delay(1000);
    digitalWrite(rmp, HIGH);
    digitalWrite(rmn, LOW);
    digitalWrite(lmp, HIGH);
    digitalWrite(lmn, LOW);
    delay(1500);
  }
  else{digitalWrite(rmp, HIGH);

    digitalWrite(rmn, LOW);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, HIGH);
  }
}}
