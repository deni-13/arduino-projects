
void setup() {
 Serial.begin(9600);
 pinMode(11,OUTPUT);
}
int val;

void loop() {
  val=analogRead(A0); // ldr 0-1023 
  Serial.print("values---->");
  Serial.println(val);
  delay(500);


if (val < 20){

  digitalWrite(11,HIGH);
 
}
 else {
  digitalWrite(11,LOW);
  
 }
 }
