#include <AFMotor.h>

AF_DCMotor motor_3(2, MOTOR12_64KHZ);  // create motor #2, 64KHz pwm
AF_DCMotor motor_1(3);
AF_DCMotor motor_2(1);

void setup() {
  Serial.begin(115200);  // start serial communication at 9600 baud
  motor_1.setSpeed(180);
  motor_2.setSpeed(180);
  motor_3.setSpeed(64);
}

void loop() {
  // Read and execute commands from serial port
  motor_1.run(RELEASE);
  motor_2.run(RELEASE);
  motor_3.run(RELEASE);
  if (Serial.available()) {  // check for incoming serial data
    char c = Serial.read();  // read command from serial port
                             // switch (c):
                             // case
    if (c == 'b') {
      motor_1.run(BACKWARD);
      motor_2.run(FORWARD);
      delay(30);
      // motor_1.run(RELEASE);
      //motor_2.run(RELEASE);
    } else if (c == 'f') {
      motor_1.run(FORWARD);
      motor_2.run(BACKWARD);
      delay(30);
      //motor_1.run(RELEASE);
      //motor_2.run(RELEASE);
    } else if (c == 'r') {
      motor_1.run(BACKWARD);
      motor_2.run(BACKWARD);
      delay(30);
      //motor_1.run(RELEASE);
      //motor_2.run(RELEASE);
    } else if (c == 'l') {
      motor_1.run(FORWARD);
      motor_2.run(FORWARD);
      delay(30);
      //motor_1.run(RELEASE);
      //motor_2.run(RELEASE);
      //else if (c == 's') {
      //motor_1.run(FORWARD);
      //motor_2.run(FORWARD);
      //delay(10);
      //motor_1.run(RELEASE);
      //motor_2.run(RELEASE);
    } else if (c == 'u') {
      motor_3.run(FORWARD);
      delay(20);
      //motor_3.run(RELEASE);
    } else if (c == 'i') {
      motor_3.run(BACKWARD);
      delay(20);
      //motor_3.run(RELEASE);
    } /*else if (c == 's') { 
         motor_1.run(RELEASE);
         motor_2.run(RELEASE);
         motor_3.run(RELEASE);  
      
   }*/
  }
}
