// C++ code
//

int segmentPin[] = {2,3,4,5,6,7,8}; //A-G연결 핀
int digitPin[2] = {A0,A1};//공통 애노드 연결 핀

//애노드 {A,B,C,D,E,F,G}순으로 불을 켤때 LOW(0)
int digit[10][7] = {
  {0,0,0,0,0,0,1}, //0
  {1,0,0,1,1,1,1}, //1
  {0,0,1,0,0,1,0}, //2
  {0,0,0,0,1,1,0}, //3
  {1,0,0,1,1,0,0}, //4
  {0,1,0,0,1,0,0}, //5
  {0,1,0,0,0,0,0}, //6
  {0,0,0,1,1,1,1}, //7
  {0,0,0,0,0,0,0}, //8
  {0,0,0,0,1,0,0}  //9
};

unsigned long readTime = 0; //현재 시간 저장
int d1 = 0; //1의 자리 저장 변수
int d2 = 0; //10의 자리 저장 변수

void setup()
{
  for(int i=0;i<7;i++){
    pinMode(segmentPin[i],OUTPUT);}
  pinMode(digitPin[0],OUTPUT);
  pinMode(digitPin[1],OUTPUT);
}

void loop()
{
  //시간 갱신
  readTime = millis()/1000; //현재 시간
  d1 = readTime%10; //1의 자리
  d2 = (readTime/10); //10의 자리
  
  segOutput(1,d1);//1의자리 출력함수 호출
  if(readTime >= 10){
    segOutput(0,d2);//10의자리 출력함수 호출
  }
}

//세그먼트를 초기화 상태로 되돌리는 함수
//각 세그먼트에 불이 들어오기 전에 초기화 작업을 해야 겹치는 LED의 문제를 해결할 수 있다.
void segClear(){
  for(int i=0;i<7;i++){
    //segmentPin[] = {2,3,4,5,6,7,8};
    //LED에 남아있는 값을 지우기 위한 5V 전원
    digitalWrite(segmentPin[i],HIGH);
	}
}

// d - digit(자리수 위치), number - 출력되는 숫자
//세그먼트 핀에 원하는 숫자를 LED로 표시하기 위해 쓰기
void segOutput(int d, int number){
  segClear();
  //digitPin[2] = {A0,A1};
  digitalWrite(digitPin[d],HIGH);//5v 전원
  for(int i=0;i<7;i++){
    //segmentPin[i],digit[number][i]);
  }
  delayMicroseconds(1000);
  digitalWrite(digitPin[d],LOW); //0v 전원
}