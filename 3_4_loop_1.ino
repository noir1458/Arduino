// C++ code
//
void setup()
{
  pinMode(2,OUTPUT);
}

void loop()
{
 digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
  delay(1000);
  //1초 간격으로 LED가 깜빡이게 된다.
}