#include <DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  delay(2500);  

}

void loop() {
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();


    Serial.print("Temp: ");
    Serial.print(temp);
    Serial.println(" Degrees C");
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
 
  delay(2500);

}
