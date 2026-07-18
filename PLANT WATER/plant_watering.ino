const int sensorPin = 34;    // Soil moisture analog pin
const int ledPin = 2;        // Built-in LED or external LED

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
}

void loop() {

  int moisture = analogRead(sensorPin);

  Serial.print("Moisture Value: ");
  Serial.println(moisture);

  // Adjust this value after testing your sensor
  if (moisture > 2500) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Soil is DRY! Water the plant.");
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("Soil is WET.");
  }

  delay(2000);
}