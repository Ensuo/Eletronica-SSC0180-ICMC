
#include <Servo.h>
byte phres[2] = {A0, A1};


int i = 0;
int val;


Servo servo_1;
Servo servo_2;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  servo_1.attach(9);
  servo_2.attach(10);
  Serial.begin(9600);
  randomSeed(analogRead(A3));
  i = random(0, 2);
  servo_1.write(50);
  servo_2.write(50);
}


void loop()
{
  val = analogRead(phres[i]);

  if (val > 200) {
    if (i == 0){
      servo_1.write(0);
    }else{
      servo_2.write(0);
    }
    Serial.print(val);  
  } else {
    servo_1.write(50);
    servo_2.write(50);
    i = random(0,2);
    Serial.print(val);
  }
  Serial.print(" ");
  
  
  delay(1000);
}
