const int irSensor1Pin = 2;  // Digital pin for sensor 1
const int irSensor2Pin = 3;  // Digital pin for sensor 2
const int irSensor3Pin = 4;  // Digital pin for sensor 3
const int irSensor4Pin = 5;  // Digital pin for sensor 4
const int irSensor5Pin = 6;  // Digital pin for sensor 5

//test for different files


// Variables to store sensor readings
int sensor1State = 0;
int sensor2State = 0;
int sensor3State = 0;
int sensor4State = 0;
int sensor5State = 0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set IR sensor pins as inputs
  pinMode(irSensor1Pin, INPUT);
  pinMode(irSensor2Pin, INPUT);
  pinMode(irSensor3Pin, INPUT);
  pinMode(irSensor4Pin, INPUT);
  pinMode(irSensor5Pin, INPUT);
}

void loop() {
  // Read sensor states (HIGH or LOW)
  sensor1State = digitalRead(irSensor1Pin);
  sensor2State = digitalRead(irSensor2Pin);
  sensor3State = digitalRead(irSensor3Pin);
  sensor4State = digitalRead(irSensor4Pin);
  sensor5State = digitalRead(irSensor5Pin);

  // Print sensor states to serial monitor
  Serial.print("Sensor 1: ");
  Serial.print(sensor1State);
  Serial.print("\tSensor 2: ");
  Serial.print(sensor2State);
  Serial.print("\tSensor 3: ");
  Serial.print(sensor3State);
  Serial.print("\tSensor 4: ");
  Serial.print(sensor4State);
  Serial.print("\tSensor 5: ");
  Serial.println(sensor5State);

  // Optional delay for readability (adjust as needed)
  delay(100); 
}
