void setup() {
  // Set the digital pin 13 as an OUTPUT
  pinMode(12, OUTPUT);
}

void loop() {
  // Turn the LED ON (HIGH)
  digitalWrite(12, HIGH);
  
  // Wait for 1 second (1000 milliseconds)
  delay(1000);

  // Turn the LED OFF (LOW)
  digitalWrite(12, LOW);
  
  // Wait for 1 second (1000 milliseconds)
  delay(1000);
}
