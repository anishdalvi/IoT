void setup() {
  // Set the digital pin 8 as an INPUT with internal pull-up resistor enabled
  // pinMode(3, INPUT_PULLUP);

  // 11 RED
  // 12 GREEN
  // 13 BLUE
  // Set the digital pin 12 as an OUTPUT
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
      digitalWrite(3, HIGH);
      delay(1000);

      digitalWrite(3, LOW);
      delay(1000);

      digitalWrite(4, HIGH);
      delay(1000);
  
      digitalWrite(4, LOW);
      delay(1000);
  

      digitalWrite(5, HIGH);
      delay(1000);
      digitalWrite(5,LOW);
      delay(1000);

      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);

  	delay(3000);

   	digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      delay(1000);

}
