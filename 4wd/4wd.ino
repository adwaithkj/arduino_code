
int rmp = 13;
int rmn = 12;
int lmp = 10;
int lmn = 9;
int i;
char p;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  if (Serial.available())
  {
    p = Serial.read();

    if (p == 'F')
    { digitalWrite(rmp, HIGH);
      digitalWrite(rmn, LOW);
      digitalWrite(lmp, LOW);
      digitalWrite(lmn, HIGH);
      

    }
    else if (p == 'B')
    { digitalWrite(rmp, LOW);
      digitalWrite(rmn, HIGH);
      digitalWrite(lmp, HIGH);
      digitalWrite(lmn, LOW);
      ;
    }

    else if (p == 'L')
    { digitalWrite(rmp, HIGH);
      digitalWrite(rmn, LOW);
      digitalWrite(lmp, HIGH);
      digitalWrite(lmn, LOW);
      

    }

    else if (p == 'R')
    { digitalWrite(rmp, LOW);
      digitalWrite(rmn, HIGH);
      digitalWrite(lmp, LOW);
      digitalWrite(lmn, HIGH);
      }

    else if (p == 'S')
    { digitalWrite(rmp, LOW);
      digitalWrite(rmn, LOW);
      digitalWrite(lmp, LOW);
      digitalWrite(lmn, LOW);
      }
  }
}
