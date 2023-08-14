void setup() {
  // Set the digital pin 8 as an INPUT with internal pull-up resistor enabled
  pinMode(8, INPUT_PULLUP);
  // Set the digital pin 12 as an OUTPUT
  pinMode(12, OUTPUT);
}

void loop() {
  // Check if the switch is pressed (LOW due to the pull-up resistor)
  if (digitalRead(8) == HIGH) {
    // Turn the LED ON (HIGH)
    digitalWrite(12, HIGH);
  } else {
    // Turn the LED OFF (LOW)
    digitalWrite(12, LOW);
  }
}
