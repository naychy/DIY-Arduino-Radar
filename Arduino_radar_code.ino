#include <Servo.h>                      

const int trigPin = 12;   
const int echoPin = 11;
const int servoPin = 10;

long duration;
int distance;

Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(115200); 
  myServo.attach(servoPin); 
}

void loop() {
 
  for(int i=20; i<=160; i+=2){  
    myServo.write(i);
    delay(30);
    distance = calculateDistance();
    
    Serial.print(i); 
    Serial.print(","); 
    Serial.print(distance); 
    Serial.println("."); 
  }
  
  for(int i=160; i>=20; i-=2){  
    myServo.write(i);
    delay(30);
    distance = calculateDistance();
    
    Serial.print(i);
    Serial.print(",");
    Serial.print(distance);
    Serial.println(".");
  }
}

int calculateDistance(){ 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH, 50000); 
  
  if (duration == 0) {
    distance = 40;
  } else {
    distance = duration * 0.034 / 2;
  }
  
  return distance;
}
