#include <Servo.h>
byte phres[3] = {A0, A1, A2};
 
int sensorValue = 0;
int index = 0;
int score = 0;
 
Servo servo_A3;
Servo servo_A4;
Servo servo_A5;
Servo S[3] = {servo_A3, servo_A4, servo_A5};
 
void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  servo_A3.attach(9);
  servo_A4.attach(10);
  servo_A5.attach(11);
  pinMode(13, OUTPUT);
  S[0].write(0);
  S[1].write(0);
  S[2].write(0);
  Serial.begin(9600);
  randomSeed(analogRead(A3));
  index = random(0,3);
  rand_up(index);
}
 
void rand_up(int index){
  S[index].write(90);
}
 
void rand_down(int index){
  S[index].write(0);
}
 
void loop()
{
  sensorValue = analogRead(phres[index]);
  if(sensorValue > 150){
    digitalWrite(13, HIGH);
    rand_down(index);
    delay(1000);
    score = score + 1;
    Serial.print(score);
    digitalWrite(13, LOW);
    index = random(0,3);
    rand_up(index);
  }
  Serial.print(sensorValue);
  delay(1000); 
}
