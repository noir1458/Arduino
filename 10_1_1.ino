// C++ code
//
int segmentPin[] = {2,3,4,5,6,7,8};

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
void setup()
{
  for(int i=0;i<7;i++){
    pinMode(segmentPin[i],OUTPUT);}
}

void loop()
{
  for(int i=0;i<10;i++){
    for(int j=0;j<7;j++){
      digitalWrite(segmentPin[j],digit[i][j]);
    }
    delay(1000);
  }
}