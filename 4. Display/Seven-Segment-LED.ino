const int latchPin = 9;
const int clockPin = 10;
const int dataPin = 8;

const byte CHAR_COUNT = 10;

const byte symbols[CHAR_COUNT] = {
B10000001, // 0
B11101101, // 1
B01000011, // 2 
B01001001, // 3
B00101101, // 4 
B00011001, // 5
B00010001, // 6 
B11001101, // 7
B00000001, // 8 
B00001001  // 9
};

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pattern1();


}

void pattern1()
{
  int i=0;
  while(i<CHAR_COUNT)
  {
    Serial.print(i);
    Serial.print(" - ");
    Serial.print(symbols[i],BIN);
    Serial.print(" ");
    Serial.print(symbols[i+1],BIN);
    writeLeds(symbols[i]);
    i = i+1;    
    delay(500);  
  }
}

void writeLeds(byte pattern)
{
  digitalWrite(latchPin, LOW);
  Serial.println(pattern,BIN);

  shiftOut(dataPin, clockPin, MSBFIRST, pattern);

  digitalWrite(latchPin, HIGH);
  }
