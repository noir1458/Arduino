// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //초음파 신호 송신
  pinMode(9,OUTPUT);
  digitalWrite(9,LOW); //트리거 초기화
  delayMicroseconds(2);//잠시대기
  digitalWrite(9,HIGH);//트리거 신호준비
  delayMicroseconds(5);//트리거 신호생성(이후 초음파발생)
  digitalWrite(9,LOW);//트리거초기화
  //초음파 신호 수신
  pinMode(9,INPUT); //에코 초기화
  double duration = pulseIn(9,HIGH);//에코의 HIGH값 측정
  double cm = duration * 340/10000/2;
  //측정거리 출력
  Serial.println(cm);
}