#include <Servo.h>

Servo mouthServo;
Servo armsServo;
const int mouthPin = 9;
const int armsPin = 10;
const int buttonPin = 2;
bool servosState = false;

int mouthServoPos = 90;
int armsServoPos = 90;
int mouthServoDir = 1;
int armsServoDir = 1;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  mouthServo.attach(mouthPin);
  armsServo.attach(armsPin);
  pinMode(buttonPin, INPUT);

  mouthServo.write(mouthServoPos);
  armsServo.write(armsServoPos);
  buttonState = digitalRead(buttonPin);
  while(!buttonState) {
    Serial.println("initial setup");
    buttonState = digitalRead(buttonPin);
  }
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState) {
    while(buttonState) {
      buttonState = digitalRead(buttonPin);
    }
    servosState = !servosState;
  }
  if(servosState) {
    //turn on servos
    if(mouthServoDir) {
      mouthServoPos++;
      if(mouthServoPos >= 110) {
        mouthServoDir = !mouthServoDir;
      }
    } else {
      mouthServoPos--;
      if(mouthServoPos <= 45) {
        mouthServoDir = !mouthServoDir;
      }
    }
    if(armsServoDir) {
      armsServoPos--;
      if(armsServoPos <= 55) {
        armsServoDir = !armsServoDir;
      }
    } else {
      armsServoPos++;
      if(armsServoPos >= 125) {
        armsServoDir = !armsServoDir;
      }
    }
    mouthServo.write(mouthServoPos);
    armsServo.write(armsServoPos);
    delay(15);
    Serial.println("servos on");
  } else {
    //turn off servos
    mouthServo.write(mouthServoPos);
    armsServo.write(armsServoPos);
    delay(15);
    Serial.println("servos off");
  }
}
