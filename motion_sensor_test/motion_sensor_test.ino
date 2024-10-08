#define PIR_PIN 5

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);

  delay(2500);
}

void loop() {
  int pirState = digitalRead(PIR_PIN);

  if (pirState == HIGH) {
    Serial.println("Motion Detected!");
  } else{
    Serial.println("No Motion");
  }
  delay(2500);
}
