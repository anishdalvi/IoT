#include <SimpleDHT.h>  // add simple DHT 11 library from include library

int pinDHT11 = A0;
SimpleDHT11 dht11(pinDHT11);

void setup() {
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity &    Temperature Sensor\n\n");
  delay(1000);
}

void loop() {
  byte temperature = 0;
  byte humidity = 0;

  dht11.read(pinDHT11, &temperature, &humidity, NULL);
  Serial.print(" Temperature & Humidity : ");
  Serial.print((int)temperature);
  Serial.print(" *C  ");
  Serial.print((int)humidity);
  Serial.println(" % H");
  delay(2000);
}