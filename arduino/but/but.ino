void setup() {

pinMode(13,OUTPUT);
pinMode(2,INPUT);


}

void loop() {
  //boolean 
boolean bas =false;

bas=digitalRead(2);
if (bas ==true) {

  digitalWrite(13,HIGH);
  
}else {
  digitalWrite(13,HIGH);
  }
}
