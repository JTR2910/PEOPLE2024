void readLFSsensors()
{
  // Read digital sensors
  LFSensor[0] = digitalRead(lineFollowSensor0);
  LFSensor[1] = digitalRead(lineFollowSensor1);
  LFSensor[2] = digitalRead(lineFollowSensor2);
  LFSensor[3] = digitalRead(lineFollowSensor3);
  LFSensor[4] = digitalRead(lineFollowSensor4);
  
  // Read analog sensors
  farRightSensor = analogRead(farRightSensorPin);
  farLeftSensor = analogRead(farLeftSensorPin);
  
  // Determine mode based on sensor readings
  if ((LFSensor[0] == 1) && (LFSensor[1] == 1) && (LFSensor[2] == 1) && (LFSensor[3] == 1) && (LFSensor[4] == 1)) {
    mode = CONT_LINE;
    error = 0;
  }
  else if ((LFSensor[0] == 0) && (farRightSensor < 860)) {
    mode = RIGHT_TURN;
    error = 0;
  }
  else if ((farLeftSensor < 860) && (LFSensor[4] == 0)) {
    mode = LEFT_TURN;
    error = 0;
  }
  else if ((LFSensor[0] == 0) && (LFSensor[1] == 0) && (LFSensor[2] == 0) && (LFSensor[3] == 0) && (LFSensor[4] == 0)) {
    mode = NO_LINE;
    error = 0;
  }
  else if ((LFSensor[0] == 0) && (LFSensor[1] == 0) && (LFSensor[2] == 0) && (LFSensor[3] == 0) && (LFSensor[4] == 1)) {
    mode = FOLLOWING_LINE;
    error = 4;
  }
  // ... Similar conditions for other FOLLOWING_LINE cases

  // Print sensor readings and current mode and error
  Serial.print(farLeftSensor);
  Serial.print(" <== LEFT  RIGH==> ");
  Serial.print(farRightSensor);
  Serial.print("  mode: ");
  Serial.print(mode);
  Serial.print("  error:");
  Serial.println(error);
}
