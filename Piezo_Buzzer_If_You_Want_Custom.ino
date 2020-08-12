#define Do 261
#define Re 293
#define Mi 329
#define Fa 349
#define Sol 391
#define Ra 440
#define Si 493
#define hDo 523
// 더 많은 음을 연주하고 싶으시다면 강의 영상이나 추가 자료에 첨부드린 주파수 표를 참고하셔서 넣어주시면 됩니다


int Piezo = 12;
int Button = 3;
int numTones = 8; //음계의 길이에 따라 왼쪽 8 대신 사용하신 음의 갯수만큼 바꿔 주시면 됩니다!

int tones[] = {
  // 이 부분에는 음계를 작성해 주시면 됩니다
};

void setup() {
  pinMode(Button, INPUT_PULLUP);
  pinMode(Piezo, OUTPUT);
}

void loop() {
   if(digitalRead(Button) == HIGH)
    {
      for(int i=0; i < numTones; i++)
      {
        tone(Piezo, tones[i]);
        delay(1000); // 재생 속도를 조절하시려면 1000 대신 100 이나 500 정도로 조절하시면 됩니다 :)
      }
      noTone(Piezo);
    }
  }
