void setup() {

pinMode(A0,INPUT);
pinMode(3,OUTPUT);

}

void loop() {
int pot =0;
pot =analogRead(A0);
pot=map(pot,0,1023,0,255);

analogWrite(3,pot);

}
