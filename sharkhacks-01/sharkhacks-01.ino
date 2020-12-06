//SHARKHACKS - JANETCHOI 20201206
//ROTATE MIRROR SERVOS

#include <Servo.h>

Servo myservo;
Servo myservoe;

int pos = 0;  
int steps = 2; 

void setup() {
  myservo.attach(9);
  myservoe.attach(10);
}

void loop() {
  for (pos = 0; pos <= 15; pos += steps) {
    // in steps of 1 degree
    myservo.write(pos);             
    delay(5);
    myservoe.write(180-pos);
    delay(100);//
  }
  for (pos = 15; pos >= 0; pos -= steps) {
    myservo.write(pos);             
    delay(5); 
    myservoe.write(180-pos);
    delay(100);
  }
}
