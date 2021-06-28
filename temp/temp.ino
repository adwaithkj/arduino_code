#include <DHT.h>
#include <DHT_U.h>
DHT dht(A0, DHT22);

void setup() {
Serial.begin(9600);
dht.begin();
// put your setup code here, to run once:

}

void loop()
{delay(2000);
int h=dht.readHumidity();
int t=dht.readTemperature();// put your main code here, to run repeatedly:
Serial.print(h,"   ",t);
}
