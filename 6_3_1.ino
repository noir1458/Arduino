int count = 0;
char input;
void setup() {
  pinMode(2, OUTPUT); 
  Serial.begin(9600); 
  //컴퓨터랑 9600bps의 속도로 통신
}
void loop() {
  
  input = Serial.read(); // 문자를 1개 읽어서 input에 저장
  
  if(Serial.available()>0) //만약 입력된 문자가 있다면
  {
  	input = Serial.read(); //그 문자를 1개 읽어서 input에 저장하고
    if (input == 'a')
    {
      //컴퓨터로 LED ON 이란 문자를 전송해라
      digitalWrite(2, 1);
      Serial.println("LED ON");
      delay(1000);
      //컴퓨터로 LED OFF 란 문자를 전송해라
      digitalWrite(2, 0);
      Serial.println("LED OFF");
      delay(1000); 

      count = count + 1;
      Serial.println(count);
    }
  }
}

/*
Serial.begin(9600);
형식 : Serial.begin(통신속도) , 첫 글자 S는 대문자!
- 초당 몇 비트의 속도로 통신을 할지 시리얼 통신을 설정한다. 
- 데이터의 전송속도 단위는 초(second)당 보낼 수 있는 비트(bits) 수인 ‘bps‘를 사용
- 전송 속도는 보통 9600 bps를 사용하며, 이를 보 레이트(baud rate)라고 한다.
- 아두이노 보드와 PC가 시리얼 모니터를 통해 통신할 수 있도록, 통신속도인 보 레이트를
동일하게 설정해야 통신을 할 수 있다. 

Serial.println(“hello”);
형식 : Serial.println(변수 or 보낼 데이터) 첫 글자 S는 대문자!
- 아두이노 보드가 ( )안의 변수의 값이나 보낼 데이터를 PC로 보내는 명령어. 
- 시리얼 통신을 통해 데이터를 출력한다. 
- print함수와 동일하며 출력 이후 줄 바꿈인 개행 문자(\n)를 추가로 출력한다.
- Serial.println(“Hello Pc”); 와 같이 문자열을 보내거나,
- Serial.println(pr); 과 같이 pr 변수에 값을 메시지를 보내기도 한다.

Serial.read( )
프로그램 안에서 이 함수를 만날 때마다 시리얼 버퍼 128바이트 중에서 가장 먼저
도착한 1바이트 데이터(예: 문자 1개)를 읽어온다. 
• 시리얼 버퍼가 비었다면 -1을 반환한다. 
• 읽은 데이터는 지워진다.
[참고] 변수 타입에 따라서 함수가 달라집니다.
char a = Serial.read(); // 문자 1개를 읽어서 a에 저장
int a = Serial.parseInt(); // 정수 1개를 읽어서 a에 저장
float a=Serial.parseFloat(); // 실수 1개를 읽어서 a에 저장
String a = Serial.readString(); // 문자열 1개 읽어서 a에 저장

Serial.available( )
아두이노에 데이터가 수신되면 시리얼 수신 버퍼에 저장된다. 
• 시리얼 수신 버퍼(총 128바이트)에 저장되어 있는 데이터의 바이트 수를 반환한다. 
즉, 쉽게 말해 아두이노가 받은 문자의 개수(몇 개 받았는지)를 반환하는데
만약, 받은 문자가 없을 경우에는 0을 반환한다
• 수신된 데이터가 있는지 확인할 때나( Serial.available() > 0 ), 
수신된 모든 데이터의 개수(바이트 수)를 알고 싶을 때 사용할 수 있다. 
(참고로 a, b 등 문자 1개인 char형 변수의 크기는 8비트인 1바이트이다)
*/