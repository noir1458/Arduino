// C++ code
//
int melody[] = {392,392,440,440,392,392,330,392,392,330,330,294,392,392,440,440,392,392,330,392,330,294,330,262};
int times[] = {250,250,250,250,250,250,500,250,250,250,250,1000,250,250,250,250,250,250,500,250,250,250,250,1000};

void setup()
{
  for(int i=0;i<24;i++){
    tone(8,melody[i],times[i]);
	delay(times[i]*2);
    // 자연스러운 연주를 위해서 times[i]*2 로 작성했습니다.
  	noTone(8);
  }
}

void loop()
{
}