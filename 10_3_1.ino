// C++ code
//
int count = 0;
int digits[10][7]= {
{0,0,0,0,0,0,1}, //0
{1,0,0,1,1,1,1}, //1
{0,0,1,0,0,1,0}, //2
{0,0,0,0,1,1,0}, //3
{1,0,0,1,1,0,0}, //4
{0,1,0,0,1,0,0}, //5
{0,1,0,0,0,0,0}, //6
{0,0,0,1,1,1,1}, //7
{0,0,0,0,0,0,0}, //8
{0,0,0,0,1,0,0} //9
};

void setup()
{
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  for (int i=2;i<10;i++){
    pinMode(i,OUTPUT);}
}

void loop()
{
  if(digitalRead(12)==HIGH){
    ++count;
    if(count>9){count=0;}
  }
  if(digitalRead(11)==HIGH){
    --count;
    if(count<0){count=9;}
  }
  for(int i=0;i<7;i++){
    digitalWrite(i+2,digits[count][i]);
  }delay(200);
}