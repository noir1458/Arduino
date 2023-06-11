// C++ code
//
int value;
void setup()
{
  pinMode(11, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  value = digitalRead(11);
  if(value == 1){
    //1초씩 차례대로 LED 켰다 끄기
    digitalWrite(3,1);
    delay(1000);
    digitalWrite(4,1);
    delay(1000);
    digitalWrite(5,1);
    delay(1000);
    digitalWrite(3,0);
    delay(1000);
    digitalWrite(4,0);
    delay(1000);
    digitalWrite(5,0);
    delay(1000);
  }
  else{
    //동시에 LED 켰다 1초 후 동시에 LED끄기
    digitalWrite(5,1);
    digitalWrite(4,1);
    digitalWrite(3,1);
    delay(1000);
    digitalWrite(5,0);
    digitalWrite(4,0);
    digitalWrite(3,0);
    delay(1000);
  }
}