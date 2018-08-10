int potentiometerPin = 0;
int ledPin = 13;
int potentiometerVal = 0;

void setup()
{
  Serial.begin(9600);          //  setup serial
}

void loop()
{
  potentiometerVal = analogRead(potentiometerPin);
 
 int mappedVal = map(potentiometerVal,0,1023,0,255);
 Serial.print(potentiometerVal);
 Serial.print(" - ");
 Serial.println(mappedVal);
 analogWrite(ledPin,mappedVal);
 delay(10); 
}

