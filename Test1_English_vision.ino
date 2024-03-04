const int clockPin = 8; // defines the clock signal pin
const int signalHigh = 1; // represents a high level value
const int signalLow = 0; // represents a low level value

void setup() {
  pinMode(clockPin, OUTPUT); // set the pin to output mode
  Serial.begin(9600); // start serial communication
}

void loop() {
  digitalWrite(clockPin, HIGH); // set pin to high level
  Serial.println(signalHigh); // send a high level signal through the serial port
  delay(500); // 500 microseconds delay

  digitalWrite(clockPin, LOW); // set the pin to a low level
  Serial.println(signalLow); // send low signal through serial port
  delay(500); // 500 microseconds delay
}
