
int melody[] = {392,392,440,440,392,392,330,392,392,330,330,294,392,392,440,440,392,392,330,392,330,294,330,262};
int segmentPin[] = {2,3,4,5,6,7,8}; 
int digitPin[4]= {A0, A1,A3,A4}; 

int digit[10][7]= {
  {0,0,0,0,0,0,1}, 
  {1,0,0,1,1,1,1},
  {0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0},
  {1,0,0,1,1,0,0},
  {0,1,0,0,1,0,0},
  {0,1,0,0,0,0,0},
  {0,0,0,1,1,1,1},
  {0,0,0,0,0,0,0},
  {0,0,0,0,1,0,0}
  };

int timerOn = 0;
int readTime = 0;
int time_set = 15;
int time;
int minute = 0;
int second = 0;

int d1 = 0;
int d2 = 0;
int d3 = 0;
int d4 = 0;

extern volatile unsigned long timer0_millis;

int startTime = 0; 

void setup() 
{ 
  for(int i=0; i<7; i++) {
    pinMode(segmentPin[i], OUTPUT);
  }
  pinMode(digitPin[0], OUTPUT);
  pinMode(digitPin[1], OUTPUT);
  pinMode(digitPin[2], OUTPUT);
  pinMode(digitPin[3], OUTPUT);
  
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(12)==HIGH)
  {
    if(timerOn==0)
    {
      timerOn = 1;
      startTime = millis(); 
    }
    else
    {
      timerOn = 0;
    }
  }
  Serial.println(timerOn);
  
  if(timerOn == 1){
    readTime = (millis() - startTime) / 1000; 
    time = time_set - (readTime); 
    minute = time / 60;
    second = time % 60;
  
    d1 = minute % 10; 
	  d2 = (minute / 10); 
	  segOutput(1, d1); 
    if(minute >= 10){
      segOutput(0, d2);
    }
  
    d3 = second % 10;
    d4 = (second / 10); 
	  segOutput(3, d3); 
    if(second >= 10){
      segOutput(2, d4);
    }
  
    if(time==0){
      timer0_millis=0;
      timerOn = 0;
      delay(100);
      segOutput(0, 8);
      segOutput(1, 8);
      segOutput(2, 8);
      segOutput(3, 8);
      MelodyOn(13);
      timer0_millis=0;
    }
  }
}

void segClear() 
{ 
  for(int i=0; i<7; i++) {
    digitalWrite(segmentPin[i], HIGH);
  }
}

void segOutput(int d, int number)
{ 
  segClear();
  digitalWrite(digitPin[d], HIGH);
  for(int i=0; i<7; i++) {
    digitalWrite(segmentPin[i], digit[number][i]);
  }
  delayMicroseconds(1000);
  digitalWrite(digitPin[d], LOW);
}

void MelodyOn(int Pin_num)
{
  for(int i=0;i<24;i++){
    tone(Pin_num,melody[i],250);
    delay(400);
    noTone(Pin_num);
  }
}
