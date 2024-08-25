// Define LED pins
const int redLight = 2;
const int yellowLight = 3;
const int greenLight = 4;

void setup() {
  // Set the LED pins as OUTPUT
  pinMode(redLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
}

void loop() {
  // Red Light ON for 5 seconds
  digitalWrite(redLight, HIGH);
  delay(5000);
  
  // Red Light OFF, Green Light ON for 5 seconds
  digitalWrite(redLight, LOW);
  digitalWrite(greenLight, HIGH);
  delay(5000);
  
  // Green Light OFF, Yellow Light ON for 2 seconds
  digitalWrite(greenLight, LOW);
  digitalWrite(yellowLight, HIGH);
  delay(2000);
  
  // Yellow Light OFF
  digitalWrite(yellowLight, LOW);
}
