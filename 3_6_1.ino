// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(2,1);
  delay(300);
  digitalWrite(2,0);
  delay(300);
    
  digitalWrite(3,1);
  delay(300);
  digitalWrite(3,0);
  delay(300);
  
  digitalWrite(11,1);
  delay(300);
  digitalWrite(11,0);
  delay(300);
    
  digitalWrite(3,1);
  delay(300);
  digitalWrite(3,0);
  delay(300);
  //빨강 노랑 초록 노랑 순서대로 반복해서 LED가 켜지게 된다.
}