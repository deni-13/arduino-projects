int but;
void setup() {
  // put your setup code here, to run once:
pinMode(9,INPUT);
pinMode(8,OUTPUT);
}

void loop() {
  but =digitalRead(9);
  if (but==HIGH)
  {
    digitalWrite(8,HIGH);
    
    }
    else 
    {
      digitalWrite(8,LOW);
      }

}
