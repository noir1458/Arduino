// C++ code
//
void setup()
{
}

void loop()
{
  analogWrite(3,0); //led 꺼짐
  analogWrite(5,0);
  analogWrite(6,0);
  //초음파 신호 송신
  pinMode(9,OUTPUT);
  digitalWrite(9,LOW);//트리거 초기화
  delayMicroseconds(2);//잠시대기
  digitalWrite(9,HIGH);//트리거 신호준비
  delayMicroseconds(5);//트리거 신호생성(이후 초음파 발생)
  digitalWrite(9,LOW);//트리거 초기화
  //초음파 신호 수신 및 3색 led제어
  pinMode(9,INPUT);//에코 초기화
  double duration = pulseIn(9,HIGH);//에코의 HIGH값 측정
  double cm = duration*340/10000/2;
  if(cm<10){
    analogWrite(6,255);}//빨
  else if(cm<20){
    analogWrite(3,255);}//녹
  else if(cm<30){
    analogWrite(5,255);}//파
  delay(100);
}