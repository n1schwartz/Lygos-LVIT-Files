void setup() {
  Serial.begin(9600);  // Initialize serial communication at 9600 baud
}

void loop() {
  int voltage = analogRead(A2);  // Read voltage value from analog pin A0
  float voltageVolts = voltage * (10 / 1023.0);  // Convert analog reading to voltage in volts
  //Serial.print("Voltage: ");
  Serial.println(voltageVolts, 5);  // Print voltage to 2 decimal places

  //Serial.println("V");
  delay(50);  // Wait for 1 second before taking another reading
}

