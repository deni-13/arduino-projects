int a=11;
int b=7;
int c=11;

void setup() {

Serial.begin(9600);
}

void loop() {
  
if (a==b){

Serial.println("equal");
}

else {

  Serial.println("not");

}

///////

if (a<b){

  Serial.println("less");
}

else {
  Serial.println("greater");
  
  }
}
