const int ledPin = 13; // Pin for the LED

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == '1') {
      digitalWrite(ledPin, HIGH); // Turn on LED
    } else if (command == '0') {
      digitalWrite(ledPin, LOW); // Turn off LED
    }
  }
}
