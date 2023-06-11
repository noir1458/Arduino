// C++ code
//
void setup()
{
  pinMode(2,OUTPUT);
  
  digitalWrite(2,1);
  delay(1000);
  // 특정 시간동안 아두이노를 기다리게 하는 명령어
  // 단위는 ms(1000=1초)
  digitalWrite(2,0);
  delay(1000);
  
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
  delay(1000);
  
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
  delay(1000);
  //1초 간격으로 LED가 깜빡이게 된다.
}

void loop()
{
 
}