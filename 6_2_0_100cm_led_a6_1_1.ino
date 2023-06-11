int dist;
void setup()
{
	pinMode(13, OUTPUT); // 초음파 출력
	pinMode(12, INPUT); // 초음파 입력
	pinMode(8, OUTPUT); // LED 출력
}
void loop()
{
  digitalWrite(13, HIGH); // 초음파 발사
  delayMicroseconds(10); // 10 millisecond(s)
  digitalWrite(13, LOW); // 초음파 멈춤
  
  dist=pulseIn(12, HIGH)/58.2 ; // 총 시간 ÷ 58.2
  
  if(dist<100) digitalWrite(8, 1); // 100보다 작으면 LED 켠다
  else digitalWrite(8, 0); // 아니면 LED 끈다
}