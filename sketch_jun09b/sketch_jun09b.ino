
int rmp = 10;
int rmn = 11;
int lmp = 5;
int lmn = 6;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {

  if (Serial.available())
  {
    char p = Serial.read();
    if (p == 'f')
    { digitalWrite(rmp, HIGH);
      digitalWrite(rmn, LOW);
      digitalWrite(lmp, LOW);
      digitalWrite(lmn, HIGH);
      delay(2000);
    }
    if (p == 'r')
    { digitalWrite(rmp, LOW);
      digitalWrite(rmn, HIGH);
      digitalWrite(lmp, HIGH);
      digitalWrite(lmn, LOW);
      delay(2000);
    }
    if (p == 'a') 
      {digitalWrite(rmp, HIGH);
      digitalWrite(rmn, LOW);
      digitalWrite(lmp, HIGH);
      digitalWrite(lmn, LOW);
      delay(2000);}
    
    if (p == 'd') 
     { digitalWrite(rmp, LOW);
      digitalWrite(rmn, HIGH);
      digitalWrite(lmp, LOW);
      digitalWrite(lmn, HIGH);
     }
   if (p=='s')
   {digitalWrite(rmp,LOW);
    digitalWrite(rmn,LOW);
    digitalWrite(lmp,LOW);
    digitalWrite(lmn,LOW);
    }
  }
}
