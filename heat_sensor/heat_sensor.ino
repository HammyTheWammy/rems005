#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 7

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(115200);
  sensors.begin();
  delay(2500);

}

void loop() {
  sensors.requestTemperatures();

  float tempC1 = sensors.getTempCByIndex(0);
  float tempC2 = sensors.getTempCByIndex(1);
  float tempC3 = sensors.getTempCByIndex(2);
  float temp_avg = (tempC1 + tempC2 + tempC3) / 3;

  
    Serial.print("Temperature: ");
    Serial.print(temp_avg);
    Serial.println(" °C");
  
delay(2500);
}
