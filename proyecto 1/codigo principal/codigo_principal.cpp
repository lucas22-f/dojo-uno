// C++ code
//
#define ROJO 13
#define AMARILLO 12
#define VERDE 11
#define BUZZER 10
void Encender(int led,int tiempo);
void EncenderBuzzer(int led);
void setup()
{
  pinMode(AMARILLO,OUTPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE,OUTPUT);
  pinMode(BUZZER,OUTPUT);
}

void loop()
{
  Encender(ROJO,30000);
  Encender(AMARILLO,5000);
  Encender(VERDE,45000);
  Encender(AMARILLO,5000);
}
void Encender(int led, int tiempo)
{
  digitalWrite(led, HIGH);
  delay(100);
  EncenderBuzzer(led);
  digitalWrite(led, LOW); 
  delay(100);
}
void EncenderBuzzer(int led)
{
  switch(led)
  {
      case ROJO:
          for(int i=0;i<30;i++)
        { 
          tone(10,600);
          delay(500);
          noTone(10);
          delay(500);
          }
        break;
    case AMARILLO:
        for(int i=0;i<2;i++)
        {
          tone(10,100);
          delay(1000);
          noTone(10);
          delay(1000);
        }
          break;
    case VERDE:
        noTone(10);
        delay(45000);
    }
}