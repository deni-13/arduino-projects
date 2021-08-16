#include <Servo.h>
Servo mot;
int st=0;
int pot;

void setup() {

mot.attach(9); //bagli pin
}
void loop(){

  st=analogRead(A0);
  pot=map(st,0,1023,0,180);

  {mot.write(pot);}
//harekete gecicek kisim
  

}
