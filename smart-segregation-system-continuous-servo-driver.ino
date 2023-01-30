#include <Servo.h>

Servo continuous_servo;

#define continuous_servo_pin 9

void setup() {
  // put your setup code here, to run once:

  continuous_servo.attach(continuous_servo_pin);
  continuous_servo.write(80);
//  continuous_servo.detach();
}

void loop() {
  // put your main code here, to run repeatedly:

}
