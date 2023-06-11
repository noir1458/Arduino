// C++ code
//
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop()
{
  int value = digitalRead(8);
  // 정수형 변수 value를 만들어 8핀으로 입력받는 값을 저장한다.
  if(value == HIGH) {
    // 8번 핀이 눌리면 5V전기가 들어온다(5V == HIGH)
    digitalWrite(13,HIGH);
  } else {
    digitalWrite(13,LOW);
  }
}