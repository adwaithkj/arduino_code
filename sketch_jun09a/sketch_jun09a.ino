void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);}

void loop() {
  int p=analogRead(A0);
  Serial.println(p);
int q=100;
  digitalWrite(13,LOW);
  delay(q);
  
  if(p>500)
  {digitalWrite(13,HIGH);
   q=q /2;}
   else
   digitalWrite(13,LOW);
  // put your main code here, to run repeatedly:

}
