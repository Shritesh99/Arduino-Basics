const int ledpin = 13;
const int inputpin = 2;

void setup() {
 pinMode(ledpin, OUTPUT);
 pinMode(inputpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int val = digitalRead(inputpin);
 if(val == HIGH){
  digitalWrite(ledpin, HIGH);
  }
 else{
  digitalWrite(ledpin, LOW);
  }
}
