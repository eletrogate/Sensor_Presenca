#define acionarele 7 
#define LesensorPIR 8

int LeituraSensor; 
 
void setup()
{
   pinMode(acionarele, OUTPUT); 
   pinMode(LesensorPIR, INPUT); 
   Serial.begin(9600);
}
 
void loop()
{
  //Le o sensor de presenca
  LeituraSensor = digitalRead(LesensorPIR);
 
  //Nao ha deteccao de movimento
   if (LeituraSensor == LOW) 
   {
     digitalWrite(acionarele, LOW);
   }
   //Ha movimento detectado - acende lampada
   else 
   {
      digitalWrite(acionarele, HIGH);
   }
   delay(20)
}