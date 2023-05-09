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
  Ring.write(0);
  Middle.write(0);
  Pinky.write(0);
  Thumb.write(0);
  delay(350);

// closes fingers

  Index.write(180);
  Ring.write(180);
  Middle.write(180);
  Pinky.write(180);
  Thumb.write(180);
  delay(350);



// sre


}
