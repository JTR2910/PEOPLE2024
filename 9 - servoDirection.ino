#include <Servo.h>

Servo myServoR;  // Create a Servo object to control the servo motor
Servo myServoL; 

int servoPinR = 10;  // right servo
int servoPinL = 9;   // Left servo 


void setup(){
  Serial.begin(9600);  // Initialize serial communication at 9600 baud rate
  myServoR.attach(servoPinR);  // Attach the servo to the specified pin
  myServoL.attach(servoPinL);   
}


void loop(){
  myServoR.writeMicroseconds(1200);  // Set the servo to 1200 microseconds
  myServoL.writeMicroseconds(1800); 
  Serial.println("Forward"); 
  delay(2000);  // Wait for 1 second
  
  myServoR.writeMicroseconds(1800);  // Set the servo to 1200 microseconds
  myServoL.writeMicroseconds(1200); 
  Serial.println("Backward"); 
  delay(2000);  // Wait for 1 second
  // You can add additional actions or conditions here if needed
  
  delay(3000);  // Wait for 1 second before setting the servo again
}
