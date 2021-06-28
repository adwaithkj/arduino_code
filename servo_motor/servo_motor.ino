#include <Servo.h>

Servo s;

void setup() {
 s.attach(3); // put your setup code here, to run once:
 s.write(0);

}
void loop() {
 int i=0;
for(i=0;i<180;i++)
{s.write(i);
delay(10);}
for(i=180;i>0;i--)
{s.write(i);
delay(10);}

}
