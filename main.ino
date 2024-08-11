unsigned int adc_rd;
char txt[12];
float a;
char *text;
void main()
{
ADCON1 = 0x02;
TRISA = 0xFF;
TRISD.F0=0;
PORTD.F0=0;
Pwm1_Init(1000);
Pwm1_Start();
while (1) {
adc_rd = ADC_read(0);
a= adc_rd ;
a=a*0.4887;
if(a>=0 && a<=35)
{
PORTD.F0=1;
}
delay_ms(1000);
}
}
#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_A 440
#define NOTE_B 493
#define ACTIVATED LOW
const int PIEZO = 11;
const int BUTTON_C = 10;
const int BUTTON_D = 9;
const int BUTTON_E = 6;
const int BUTTON_A = 7;
const int BUTTON_B = 8;
void setup()
{
pinMode(BUTTON_C, INPUT);
digitalWrite(BUTTON_C,HIGH);
pinMode(BUTTON_D, INPUT);
digitalWrite(BUTTON_D,HIGH);
pinMode(BUTTON_E, INPUT);
digitalWrite(BUTTON_E,HIGH);
pinMode(BUTTON_A, INPUT);
digitalWrite(BUTTON_A,HIGH);
pinMode(BUTTON_B, INPUT);
digitalWrite(BUTTON_B,HIGH);
}
void loop()
{
while(digitalRead(BUTTON_C) == ACTIVATED)
{
tone(PIEZO,NOTE_C);
}
while(digitalRead(BUTTON_D) == ACTIVATED)
{
tone(PIEZO,NOTE_D);
}
while(digitalRead(BUTTON_E) == ACTIVATED)
{
tone(PIEZO,NOTE_E);
}
while(digitalRead(BUTTON_A) == ACTIVATED)
{
tone(PIEZO,NOTE_A);
}
while(digitalRead(BUTTON_B) == ACTIVATED)
{
tone(PIEZO,NOTE_B);
}
noTone(PIEZO);
}
