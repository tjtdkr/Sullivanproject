#define Do 261
#define Re 293
#define Mi 329
#define Fa 349
#define Sol 391
#define Ra 440
#define Si 493
#define hDo 523

int Piezo = 12;
int Button = 3;

int tones[] = {
  Do, Re, Mi, Fa, Sol, Ra, Si, hDo
};

void setup() {
  pinMode(Button, INPUT_PULLUP);
  pinMode(Piezo, OUTPUT);
}

void loop() {
   if(digitalRead(Button) == HIGH)
    {
      for(int i=0; i < 8; i++)
      {
        tone(Piezo, tones[i]);
        delay(1000);
      }
      noTone(Piezo);
    }
  }
