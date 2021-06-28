
int rmp = 10;
int rmn = 11;
int lmp = 5;
int lmn = 6;
int t=3,e=2;
void setup() {

pinMode(t,OUTPUT);
pinMode(e,INPUT);// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 
 digitalWrite(t,HIGH);
  delayMicroseconds(5);
  digitalWrite(t,LOW);
  delayMicroseconds(2);
  digitalWrite(t,HIGH);
  int p=pulseIn(e,HIGH);
  
  int q=p*0.017;
  Serial.println(q);
  
    if(q>10)
    {  digitalWrite(rmp, HIGH);
  
    digitalWrite(rmn, LOW);
    digitalWrite(lmp, LOW);
    digitalWrite(lmn, HIGH);
  }

    else
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

  
  ;
  
  // put your main code here, to run repeatedly:

}
