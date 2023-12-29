#include <Servo.h>

Servo name_servo ;

int servo_position = 0;

void setup() {

  name_servo.attach(9);

}

void loop() {

  for (servo_position = 0; servo_position <=180; servo_position +=1){

    name_servo.write(servo_position);
    delay(10);
  }

  for (servo_position=180; servo_position >= 0; servo_position -=1){

    name_servo.write(servo_position);
    delay(10);
  }
}

