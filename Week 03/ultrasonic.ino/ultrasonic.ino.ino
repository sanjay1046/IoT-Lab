#define led1 13
#define led2 12
#define led3 14

const int trigPin = 5;
const int echoPin = 18;
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  if (distance <=10){
    digitalWrite(led1,HIGH);
    delay(1000);
    digitalWrite(led1,LOW);
  }
  else if(distance <30 && distance > 10){
    digitalWrite(led2,HIGH);
    delay(1000);
    digitalWrite(led2,LOW);
  }
  else{
    digitalWrite(led3,HIGH);
    delay(1000);
    digitalWrite(led3,LOW);
  }
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(500);
}