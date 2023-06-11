// C++ code
//
void setup()
{
  pinMode(2, OUTPUT); //Trig 단자 연결
  pinMode(3, INPUT); //Echo 단자 연결
}

void loop()
{
  analogWrite(9,0); //파랑
  analogWrite(10,0); //초록
  analogWrite(11,0); //빨강
  
  digitalWrite(2,HIGH); //10마이크로세컨드 트리거 펄스
  delayMicroseconds(10);
  digitalWrite(2,LOW);
  
  long duration = pulseIn(3,HIGH); //총시간반환
  if(duration==0){return;} //loop로 돌아감
  
  long distance = duration/58.2; //거리계산
  if(distance < 10){analogWrite(11,255);}
  else if(distance < 20){analogWrite(10,255);}
  else if(distance < 30){analogWrite(9,255);}
  delay(100);
}

/* 
delayMicroseconds(1000000);
delay(1000); 과 단위가 다르다


long duration = pulseIn(3,HIGH); // 총 반환시간을 duration에 저장
// 초음파가 일정시간까지 돌아오지 않으면, 현 loop을 종료하고 새로운 loop시작
if(duration==0) {return;}

LOW 였던 echo는 초음파가 들어온것을 감지하면 HIGH로 바뀌는데,
이때 pulseIn은 HIGH가 될때까지 걸린 시간을 반환 값으로 받아 옴
설정한 핀은 pinMode 함수에서 입력 모드로 설정해야 한다.
반환되는 시간은 마이크로 초 단위이며 int가 아닌 long 변수에 저장
1초를 기다렸는데도 반사된 초음파가 없으면 0이라는 반환 값을 얻게 된다.

long duration = pulseIn(3,HIGH);
//3번 핀의 전압이 HIGH가 될 때까지 걸린 시간을 duration 변수에 저장


#왕복시간 거리 계산하기
long distance = duration / 58.2; 
// 거리 계산(29.1*2 = 58.2 초음파가 반사되어 돌아온 왕복시간이므로)

#삼색 led 불빛 색 결정하기
if(distance < 10){analogWrite(11,255);} // 거리가 10센티 미만이면 빨강
else if(distance < 20){analogWrite(10,255);} //거리가 20센티 미만이면 초록
else if(distance < 30){analogWrite(9,255);} //거리가 30센티 미만이면 파랑

*/

