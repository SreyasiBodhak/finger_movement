#include <Servo.h>

Servo Index;
Servo Ring;
Servo Middle;
Servo Pinky;
Servo Thumb;



void setup() {

  Index.attach(9);
  Ring.attach(3);
  Middle.attach(5);
  Pinky.attach(6);
  Thumb.attach(10);
  

}

void loop() {

//  opens fingers

  Index.write(0);
  delay(300);
  Ring.write(0);
  delay(300);
  Middle.write(0);
  delay(300);
  pinky.write(0);
  delay(300);
  Thumb.write(0);
  delay(300);

// closes fingers
  Index.write(180);
  delay(300);
  Ring.write(180);
  delay(300);
  Middle.write(180);
  delay(300);
  pinky.write(180);
  delay(300);
  Thumb.write(180);
  delay(300);









}
