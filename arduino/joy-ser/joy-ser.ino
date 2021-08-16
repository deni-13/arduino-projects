#include <Servo.h>

Servo mot;

int v,angle;

void setup() {
  mot.attach(9);

}

void loop() {
  v=analogRead(A0); //servo vrx or vr where is connected

  angle=map(v,0,1023,0,180);

  mot.write(angle);

}
