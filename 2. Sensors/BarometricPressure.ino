#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;

void setup(){
  Serial.begin(9600);
  if(!bmp.begin()){
   Serial.println("Could not find a valid BMP085 sensor, check wiring!");
   while(1){}
  }
}
void loop(){
  Serial.print("Humidity: ");
    
  Serial.print(bmp.readPressure());
    
  Serial.print(" Pa");
    
  Serial.print("Temprature: ");
     
  Serial.print(bmp.readTemprature());
  Serial.println(" *C");
  Serial.print("Altitude: ");
    
  Serial.print(bmp.readAltitude());
    
  Serial.println(" meters");
  Serial.print("Real altitude: ");
    
  Serial.print(bmp.readAltitude(101500));

  Serial.println(" meters");
}