//####################################
//# Listato mBot - Robot dance       #
//####################################

#include <MeMCore.h>
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

MeLEDMatrix ledMtx_1(1);
MeDCMotor motor_9(9);
MeDCMotor motor_10(10);
MeBuzzer buzzer;

void move(int direction, int speed) {
  int leftSpeed = 0;
  int rightSpeed = 0;
  if(direction == 1) {
    leftSpeed = speed;
    rightSpeed = speed;
  } else if(direction == 2) {
    leftSpeed = -speed;
    rightSpeed = -speed;
  } else if(direction == 3) {
    leftSpeed = -speed;
    rightSpeed = speed;
  } else if(direction == 4) {
    leftSpeed = speed;
    rightSpeed = -speed;
  }
  motor_9.run((9) == M1 ? -(leftSpeed) : (leftSpeed));
  motor_10.run((10) == M1 ? -(rightSpeed) : (rightSpeed));
}

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  ledMtx_1.setColorIndex(1);
  ledMtx_1.setBrightness(6);

  ledMtx_1.showClock(12, 0, true);

  move(1, 50 / 100.0 * 255);
  _delay(1);
  move(1, 0);

  move(2, 50 / 100.0 * 255);
  _delay(1);
  move(2, 0);

  buzzer.tone(262, 0.25 * 1000);
  _delay(0.02);

  move(4, 100 / 100.0 * 255);
  _delay(0.3);
  move(4, 0);

  move(3, 100 / 100.0 * 255);
  _delay(0.3);
  move(3, 0);

  buzzer.tone(65, 0.25 * 1000);
  _delay(0.02);

  move(4, 100 / 100.0 * 255);
  _delay(0.3);
  move(4, 0);

  move(3, 100 / 100.0 * 255);
  _delay(0.3);
  move(3, 0);

  buzzer.tone(262, 0.25 * 1000);
  _delay(0.02);

  move(4, 100 / 100.0 * 255);
  _delay(0.3);
  move(4, 0);

  move(3, 100 / 100.0 * 255);
  _delay(0.3);
  move(3, 0);

  buzzer.tone(65, 0.25 * 1000);
  _delay(0.02);

  move(4, 100 / 100.0 * 255);
  _delay(0.3);
  move(4, 0);

  move(3, 100 / 100.0 * 255);
  _delay(0.3);
  move(3, 0);

  buzzer.tone(262, 0.25 * 1000);
  _delay(0.02);

  move(4, 100 / 100.0 * 255);
  _delay(0.3);
  move(4, 0);

  move(3, 100 / 100.0 * 255);
  _delay(0.3);
  move(3, 0);
  motor_9.run(0);
  motor_10.run(0);

}

void _loop() {
}

void loop() {
  _loop();
}