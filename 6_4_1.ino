void setup() {
  // Trig 단자 연결
  pinMode(2, OUTPUT);
  // Echo 단자 연결
  pinMode(3, INPUT);
  // 통신 속도 설정
  Serial.begin(9600);
}
void loop() {
  digitalWrite(2, HIGH); //Trig에서 10μs 동안 초음파 출력
  delayMicroseconds(10); 
  digitalWrite(2, LOW);
  
  // Echo에서 초음파가 장애물에 의해 반사된 시간을 저장
  long duration = pulseIn(3, HIGH);
  
  // 초음파가 일정시간까지 돌아오지 않으면, 현 loop를 종료하고 새로운 loop 시작
  if (duration == 0) { return; } 
  
  long distance = duration / 58.2; // 물체와의 거리 계산
  
  // 물체와의 거리를 시리얼 모니터에 보여준다.
  Serial.print("distance = "); 
  Serial.print(distance);
  Serial.println(" cm");
}