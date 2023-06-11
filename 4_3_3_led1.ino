// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  analogWrite(11,20);
  delay(1000);
  analogWrite(11,0);
  analogWrite(10,20);
  delay(1000);
  analogWrite(10,0);
  analogWrite(9,20);
  delay(1000);
  analogWrite(9,0);
}

// 틴커캐드의 3색 LED는 analogWrite() 사용할때 0-75 사이 값을 입력해야 한다.
// 225 쓸 경우 저항 사용하지 않으면 LED파손됨