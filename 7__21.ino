// C++ code
//
int value;
int i;
int delayTime = 200;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(3, INPUT);
}

void loop()
{
  value = digitalRead(3);
  if(value==1){
    // 1번 차례대로 켜졌다 끄기
    digitalWrite(13,1);
    delay(delayTime);
    digitalWrite(12,1);
    delay(delayTime);
    digitalWrite(11,1);
    delay(delayTime);
    digitalWrite(10,1);
    delay(delayTime);
    digitalWrite(13,0);
    delay(delayTime);
    digitalWrite(12,0);
    delay(delayTime);
    digitalWrite(11,0);
    delay(delayTime);
    digitalWrite(10,0);
    delay(delayTime);
    // 동시에 켜졌다 꺼지기 3번 반복(반복문 이용)
    for(i=0;i<3;i++){
      digitalWrite(13,1);
      digitalWrite(12,1);
      digitalWrite(11,1);
      digitalWrite(10,1);
      delay(delayTime);
      digitalWrite(13,0);
      digitalWrite(12,0);
      digitalWrite(11,0);
      digitalWrite(10,0);
      delay(delayTime);
    }
    // 추가 코드
    digitalWrite(13,1);
    delay(delayTime);
    digitalWrite(13,0);
    delay(delayTime);
    digitalWrite(11,1);
    delay(delayTime);
    digitalWrite(11,0);
    delay(delayTime);
    digitalWrite(12,1);
    delay(delayTime);
    digitalWrite(12,0);
    delay(delayTime);
    digitalWrite(10,1);
    delay(delayTime);
    digitalWrite(10,0);
    delay(delayTime);
    
    digitalWrite(10,1);
    delay(delayTime);
    digitalWrite(10,0);
    delay(delayTime);
    digitalWrite(11,1);
    delay(delayTime);
    digitalWrite(11,0);
    delay(delayTime);
    digitalWrite(12,1);
    delay(delayTime);
    digitalWrite(12,0);
    delay(delayTime);
    digitalWrite(13,1);
    delay(delayTime);
    digitalWrite(13,0);
    delay(delayTime);
    
    digitalWrite(13,1);
    delay(delayTime);
    digitalWrite(13,0);
    delay(delayTime);
    digitalWrite(12,1);
    delay(delayTime);
    digitalWrite(12,0);
    delay(delayTime);
    digitalWrite(11,1);
    delay(delayTime);
    digitalWrite(11,0);
    delay(delayTime);
    digitalWrite(10,1);
    delay(delayTime);
    digitalWrite(10,0);
    delay(delayTime);
    
  }
  else{
    // LED 모두 끄기
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,0);
    digitalWrite(10,0);
  }
}