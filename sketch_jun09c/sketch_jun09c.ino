int q=1000;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  // put your setup code here, to run once:
  
}

void loop() {
  int p = analogRead(A0);
  q=p;
  Serial.print(p);
  digitalWrite(13, HIGH);
  delay(q);
  digitalWrite(13, LOW);
  delay(q);// put your main code here, to run repeatedly:
  

}
