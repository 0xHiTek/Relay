// Week 12: Relay Control (Arduino UNO)
// Author: 0xHitek

#define RELAY_PIN 7

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // relay off at start
}

void loop() {
  // Turn ON
  digitalWrite(RELAY_PIN, HIGH);
  delay(2000);

  // Turn OFF
  digitalWrite(RELAY_PIN, LOW);
  delay(2000);
}
