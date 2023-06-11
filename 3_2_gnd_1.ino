// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  // 아두이노에는 프로그래밍 적으로 제어가 가능한 오른쪽 14개 I/O단자 외에
  // 무조건 0V를 내보내주는 GND(그라운드,0V)단자도 있습니다.
  // 좌측 2개 우측 1개 있습니다.
  digitalWrite(2,1);
}

void loop()
{
 
}