const int sensorPinR = Ax; // Analog input pin for right sensor
const int sensorPinL = Ay; // Analog input pin for left sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue1 = analogRead(sensorPinR); // Read sensor 1
  int sensorValue2 = analogRead(sensorPinL); // Read sensor 2

  Serial.print("Sensor R: ");
  Serial.print(sensorValue1); // Print R sensor value
  Serial.print("\tSensor L: ");
  Serial.println(sensorValue2); // Print L sensor value

  delay(100); // Delay between readings
}
