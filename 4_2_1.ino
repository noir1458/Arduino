// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

// 폴다운은 입력핀의 전압을 평상시(버튼 누르지 않을시) LOW로 고정시키는것
// 13번 핀은 신호를 입력받아야 하므로 평상시에는 LOW로 만들어져야 한다.
// 미약한 전류로 인해 문제가 생길수 있으므로 폴다운으로 제거해야한다.

// 10k옴 저항때문에 전류가 흐르기 어렵게 만들어 준다
// 버튼 누를시 전류 흐르기 쉬운 13번 핀 방향으로 간다.

// 13번 핀을 LOW로 만들기 위해 반드시 13번 핀과 그라운드는 연결되어 있어야 한다.

// 저항이 없다면 5V전류는 그라운드로 간다. 보드가 고장나게 됨. 버튼 연결시 저항이 필요하다.
