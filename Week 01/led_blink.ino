#define PIN 15

void setup() {
  pinMode(PIN, OUTPUT);
  Serial.begin(9600); 
}
void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN, HIGH);
    Serial.print("HIGH\n");
    delay(2000);
    digitalWrite(PIN, LOW);
    Serial.print("LOW\n");
    delay(2000);
  }
  delay(5000);
}
