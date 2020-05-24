#include <Servo.h>

Servo servo1;
Servo servo2;
const int servo1Pin = 9;
const int servo2Pin = 10;
const int buttonPin = 2;
bool servosState = false;


int pos = 0;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  pinMode(buttonPin, INPUT);

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
    Serial.println("servos on");
  } else {
    //turn off servos
    Serial.println("servos off");
  }
}
