// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
  delay(1000);
  
  digitalWrite(10,1);
  delay(1000);
  digitalWrite(10,0);
  delay(1000);
}