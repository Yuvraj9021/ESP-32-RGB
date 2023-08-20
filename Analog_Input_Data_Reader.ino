//
const int potPin = 4;

// Variable to store potentiometer value
int potValue = 0;

void setup() {

Serial.begin(9600); // Initialize serial communication for debugging

delay(1000); // Delay for 1 second to allow setup time
}

void loop() {

potValue = analogRead(potPin); // Read the analog value from the potentiometer

Serial.println(potValue); // Print the potentiometer value to the serial monitor

delay(500); // A delay to control the rate of output

}
