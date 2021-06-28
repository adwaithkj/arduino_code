void setup() {
  // put your setup code here, to run once:sERAIL.BEIN
Serial.begin(9600);
}

void loop() {
int p=analogRead(A0);
int q=analogRead(A1);

Serial.print("x coordinate ");

Serial.print(p);
Serial.print("   y coordinate");

Serial.println(q);// put your main code here, to run repeatedly:

}
