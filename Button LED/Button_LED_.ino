//
const int buttonPin = 4;  // Pin that is connected to the pushbutton
const int LEDPin = 16;     // Pin that is connected to the LED

// variable for storing the pushbutton status
int buttonState = 0;

void setup() {
  Serial.begin(115200); 
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input
  pinMode(LEDPin, OUTPUT);  // initialize the LED pin as an output
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value
  Serial.println(buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH
  if (buttonState == HIGH) {
    // Turn the LED on
    digitalWrite(LEDPin, HIGH);
  } else {
    // Turn the LED off
    digitalWrite(LEDPin, LOW);
  }
}
