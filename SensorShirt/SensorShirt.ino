/*
  Sensor Shirt
  Kylie Dale and Michael Guida
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(300);
}
