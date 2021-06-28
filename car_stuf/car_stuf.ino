
int rmp = 6;
int rmn = 5;
int lmp = 10;
int lmn = 11;
void setup() {
  
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(rmp, HIGH);
    digitalWrite(rmn, LOW);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, HIGH);
    delay(2000); 

}

void loop() {
int i1=digitalRead(3);//this is the middle sensor
int i2=digitalRead(2);//this is the sensor on the left
Serial.println(i1,"i1");
Serial.println(i2,"i2");
if(Serial.available())
{char a;
  
  
  
  
  
  if (a=='w')
  {digitalWrite(rmp, HIGH);
    digitalWrite(rmn, LOW);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, HIGH); 
    delay(2000);  }
  else if (a=='s')
  { digitalWrite(rmp, LOW);
    digitalWrite(rmn, HIGH);
    digitalWrite(lmp, HIGH);
    digitalWrite(lmn, LOW);
    delay(2000);
  }

  else if (a=='a')
  { digitalWrite(rmp, HIGH);
    digitalWrite(rmn, LOW);
    digitalWrite(lmp, HIGH);
    digitalWrite(lmn, LOW);
    delay(2000);
  }

  else if (a=='d')
  { digitalWrite(rmp, LOW);
    digitalWrite(rmn, HIGH);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, HIGH);
    delay(2000);}

  else if (a==' ')
   {digitalWrite(rmp, LOW);
    digitalWrite(rmn, LOW);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, LOW);
  delay(2000);}
  }

 
}
