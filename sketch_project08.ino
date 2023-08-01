/*
Arduino Training Series by UniKidz
Robotic Programming Your Engineer
This code can be downloaded from https://github.com/efadzli/arduino_beginners
*/

int trigPin = 11;
int echoPin = 10;
int buzpin = 13;

void setup(){
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop(){
  long duration, inches, cm, mm;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2000);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  cm = duration/29/2;
  Serial.print("The distance is (cm): ");
  Serial.println(cm);

  if(cm < 10){
    tone(buzpin, 262);
    delay(500);
    noTone(buzpin);
    delay(500);
  } else {
    noTone(buzpin);
    delay(200);
  }

}
