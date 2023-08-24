// Define the pin for the built-in LED
int led1 = LED_BUILTIN;

// Define the pin for the push button
int buttonPin = 2;

// Flag to keep track of button press
bool isButtonPressed = false;

void setup() {
  // Set the LED pin as an output
  pinMode(led1, OUTPUT);

  // Set the button pin as an input with internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() 
{
  // Check if the button has been pressed
  if (isButtonPressed) {
    resetName(); // Call the function to reset the name display
    isButtonPressed = false; // Reset the button press flag
  }

  // Blink the Morse code pattern for "Samridh"
  
  // S
  blinkDot(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(500);

  // a
  blinkDot(); delay(500);
  blinkDash(); delay(1000);

  // m
  blinkDash(); delay(1000);
  blinkDash(); delay(1000);

  // r
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(500);

  // i
  blinkDot(); delay(1000);
  blinkDot(); delay(500);

  // d
  blinkDash(); delay(1000);
  blinkDot(); delay(500);
  blinkDot(); delay(500);

  // h
  blinkDot(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(500);

  delay(2000);  // Gap between words
}

// Function to blink a dot
void blinkDot() {
  digitalWrite(led1, HIGH);
  delay(200);
  digitalWrite(led1, LOW);
  delay(200);
}

// Function to blink a dash
void blinkDash() {
  digitalWrite(led1, HIGH);
  delay(600);
  digitalWrite(led1, LOW);
  delay(200);
}

// Function to reset the name display
void resetName() {
  digitalWrite(led1, LOW); // Turn off the LED
  delay(1000);
  digitalWrite(led1, HIGH); // Turn on the LED
  delay(1000);
  digitalWrite(led1, LOW); // Turn off the LED
  delay(1000);
}