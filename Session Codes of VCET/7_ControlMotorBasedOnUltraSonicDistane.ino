// defines pins numbers
const int trigPin = 7;
const int echoPin = 8;

// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
// Clears the trigPin
digitalWrite(10, HIGH);
digitalWrite(11, LOW);

digitalWrite(trigPin, LOW);
delayMicroseconds(1);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH); // pulse in function gives time duration in micro second
Serial.print(duration);

// Calculating the distance
distance= duration*0.034/2; 

 //340 Meter/S speed of sound,34000 cm/s, 0.034 cm/us

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay(1000);

}