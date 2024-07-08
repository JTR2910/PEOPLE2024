// Define the pins for each IR sensor
const int irSensorLPin = A1;  // Analog pin for sensor 1
const int irSensorRPin = A0;  // Analog pin for sensor 2

// Variables to store sensor readings
int sensorLValue = 0;
int sensorRValue = 0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read sensor values
  sensorLValue = analogRead(irSensorLPin);
  sensorRValue = analogRead(irSensorRPin);

  // Print sensor values to serial monitor
  Serial.print("Sensor L: ");
  Serial.print(sensorLValue);
  Serial.print("\tSensor R: ");
  Serial.println(sensorRValue);

  // Optional delay for readability (adjust as needed)
  delay(100); 
}
