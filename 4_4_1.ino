// C++ code
//
void setup()
{
  pinMode(8, INPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  int value = digitalRead(8);
  int value2 = digitalRead(2);
  
  if (value == HIGH) {
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(2,HIGH);
    // 2개의 LED가 1초 간격으로 차례대로 켜지고
	delay(1000);
    if (value2 == HIGH) {
      digitalWrite(3,LOW);
      delay(1000);
      digitalWrite(2,LOW);
      delay(1000);
      
    }
    // 모두 켜지면 차례대로 꺼진다
  } else {
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    // 버튼을 누르지 않으면 2개의 LED가 동시에 꺼진다
  }
}