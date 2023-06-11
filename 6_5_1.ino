// C++ code
//
char input;
int melody[] = {262,294,330};
void setup()
{
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()>0){
  input = Serial.read();
    
    if(input=='a'){
      digitalWrite(2,1);
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          tone(12,melody[j],250);
          delay(250);
          noTone(12);
        }
      }
    }
  }
}