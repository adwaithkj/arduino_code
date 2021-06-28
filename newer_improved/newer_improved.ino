#include <Servo.h>


int rmp = 10;
int rmn = 11;
int lmp = 5;
int lmn = 6;
int i;
int e = 15, t = 14;
Servo s;

void setup() {

  pinMode(t, OUTPUT);
  pinMode(e, INPUT); // put your setup code here, to run once:
  Serial.begin(9600);
  s.attach(3);
}

void loop() {

  digitalWrite(t, HIGH);
  delayMicroseconds(5);
  digitalWrite(t, LOW);
  delayMicroseconds(2);
  digitalWrite(t, HIGH);
  int p = pulseIn(e, HIGH);

  int q = p * 0.017;
  Serial.println(q);

  if (q > 5)
  { digitalWrite(rmp, HIGH);

    digitalWrite(rmn, LOW);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, HIGH);
  }

  else
  { digitalWrite(rmp, LOW);
    digitalWrite(rmn, LOW);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, LOW);
    delay(900);
    for(i=90;i>0;i--)
    {s.write(i);
     delay(10);
    }
     delay(900);
    
     
    digitalWrite(t, HIGH);
    delayMicroseconds(5);
    digitalWrite(t, LOW);
    delayMicroseconds(2);
    digitalWrite(t, HIGH);
    p = pulseIn(e, HIGH);

    q = p * 0.017;
    delay(900);
    if(q<5)
    {digitalWrite(rmp, LOW);
    digitalWrite(rmn, HIGH);
    digitalWrite(lmp, HIGH);
    digitalWrite(lmn, LOW);
    delay(1000);
    digitalWrite(rmp, HIGH);
    digitalWrite(rmn, LOW);
    digitalWrite(lmp, HIGH);
    digitalWrite(lmn, LOW);
    delay(1500);}

    else
    {digitalWrite(rmp, LOW);
    digitalWrite(rmn, HIGH);
    digitalWrite(lmp, HIGH);
    digitalWrite(lmn, LOW);
    delay(1000);
   digitalWrite(rmp, LOW);
    digitalWrite(rmn, HIGH);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, HIGH);
    delay(500);}
  
  
  
  }


  

  // put your main code here, to run repeatedly:

}
