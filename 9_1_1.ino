// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop()
{
  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  
  long duration = pulseIn(3,HIGH);
  
  if(duration==0){
    return;}
  
  long distance = duration/58.2;
  if(distance<10){
    tone(8,262,1000);
    delay(1000);
  }
  else if(distance<20){
    tone(8,330,1000);
    delay(1000);
  }
  else if(distance<30){
    tone(8,392,1000);
    delay(1000);
  }
  delay(100);
}