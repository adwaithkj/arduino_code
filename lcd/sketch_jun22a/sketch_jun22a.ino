#include <LiquidCrystal.h>
LiquidCrystal s(12,11,5,4,3,2); //rs,e,,d4,d5,d6,d7
void setup() {
  // put your setup code here, to run once:
s.begin(16,2);


}

void loop() {
 
int i;
 for(i=0;i<9;i++)
 {s.print(" pinging");
  s.print("");
  s.setCursor(i,0);
  delay(400);
  
 }
 s.setCursor(0,0);
 s.print("               ");                  
}
