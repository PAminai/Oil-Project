int redPin= 3;
int greenPin = 6;
int bluePin = 5;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop() {
//  
//  for(int i=254;i>0;i=i-10)
//  {
//    for(int j=254;j>0;j=j-10)
//    {
      for(int k=254;k>0;k=k-1)
      {
          setColor(0,0, k); // Red Color
          delay(100);
          
      }
//    }
//  }
//setColor(100,100,100); // Red Color
}
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
