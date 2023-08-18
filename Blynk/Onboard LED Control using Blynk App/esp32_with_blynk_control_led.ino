
// *** MAIN SETTINGS ***
// Replace this block with correct template settings.
// You can find it for every template here:
//
//   https://blynk.cloud/dashboard/templates

#define BLYNK_TEMPLATE_ID "TMPL3D4Bh6Y" // add your template here
#define BLYNK_TEMPLATE_NAME "LED ESP32"
#define BLYNK_AUTH_TOKEN "tb-Y2h5o1wrmggq9JWhkSdKu5inn"   // add your token here

// Your WiFi credentials.
// Set password to "" for open networks.
#define WIFI_SSID "iot"
#define WIFI_PASS "123456789"

#define BLYNK_PRINT Serial  // Comment this out to disable serial monitor prints

// Adding the required libraries
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#define LED_PIN 2           // LED is usually connected to D2 pin. Change if needed.

BLYNK_WRITE(V0)
// V0 is a datastream used to transfer and store LED switch state.
// Evey time you use the LED switch in the app, this function
// will listen and update the state on device  
{
  int value = param.asInt();
  Serial.print("Value is ");
  Serial.println(value);
  // Local variable `value` stores the incoming LED switch state (1 or 0)
  // Based on this value, the physical LED on the board will be on or off:

  if (value == 1)
  {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED High");
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
    Serial.println("LED Low");
  }
}

void setup()
{
  // Debug console
  Serial.begin(115200);                         // Make sure you have the same baud rate in your serial monitor set up
  pinMode(LED_PIN, OUTPUT);                    // Setting LED PIN to control it

  Blynk.begin(BLYNK_AUTH_TOKEN, WIFI_SSID, WIFI_PASS);
}

void loop()
{
  Blynk.run(); // Blynk magic happens here
  //Serial.println("BLynk is Runningggggg");

}