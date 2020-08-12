//설리번 프로젝트 IoT 1팀 4일차 교육자료_버튼 LED 코드 예제입니다

int led = 3;
int button = 6;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(button) == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}
