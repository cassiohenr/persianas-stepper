#include <IRremote.h>  
  
int RECV_PIN = 11;  
float armazenavalor;  
int time = 10;  
  
IRrecv irrecv(RECV_PIN);  
decode_results results;  

  
void setup()  
{  
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  
  
  Serial.begin(9600);  
  irrecv.enableIRIn(); // Inicializa o receptor IR  
}  
   
void loop()  
{  
  if (irrecv.decode(&results))  
  {  
    Serial.print("Valor lido : ");  
    Serial.println(results.value, HEX);  
    armazenavalor = (results.value);  
    
    if(armazenavalor == 0x2FDC13E) //Verifica se a tecla down foi acionada  
    {  
      for(int i=0; i<120;i++)
      {
      digitalWrite(9,HIGH);
      delay(time);
      digitalWrite(9,LOW);
      delay(time);
      digitalWrite(8,HIGH);
      delay(time);
      digitalWrite(8,LOW);
      delay(time);
      digitalWrite(7,HIGH);
      delay(time);
      digitalWrite(7,LOW);
      delay(time);
      digitalWrite(6,HIGH);
      delay(time);
      digitalWrite(6,LOW);
      delay(time);
      }
     }
     
    if(armazenavalor == 0x2FD41BE) //Verifica se a tecla down foi acionada  
    {  
      for(int i=0; i<120;i++)
      {
      digitalWrite(6,HIGH);
      delay(time);
      digitalWrite(6,LOW);
      delay(time);
      digitalWrite(7,HIGH);
      delay(time);
      digitalWrite(7,LOW);
      delay(time);
      digitalWrite(8,HIGH);
      delay(time);
      digitalWrite(8,LOW);
      delay(time);
      digitalWrite(9,HIGH);
      delay(time);
      digitalWrite(9,LOW);
      delay(time);
      }
    }
    
     if(armazenavalor == 0x2FD12ED) //Verifica se a tecla down foi acionada  
     {  
      for(int i=0; i<480;i++)
      {
      digitalWrite(9,HIGH);
      delay(time);
      digitalWrite(9,LOW);
      delay(time);
      digitalWrite(8,HIGH);
      delay(time);
      digitalWrite(8,LOW);
      delay(time);
      digitalWrite(7,HIGH);
      delay(time);
      digitalWrite(7,LOW);
      delay(time);
      digitalWrite(6,HIGH);
      delay(time);
      digitalWrite(6,LOW);
      delay(time);
      }
     }
     
     if(armazenavalor == 0x2FDD22D ) //Verifica se a tecla azul foi acionada  
     {  
      for(int i=0; i<480;i++)
      {
      digitalWrite(6,HIGH);
      delay(time);
      digitalWrite(6,LOW);
      delay(time);
      digitalWrite(7,HIGH);
      delay(time);
      digitalWrite(7,LOW);
      delay(time);
      digitalWrite(8,HIGH);
      delay(time);
      digitalWrite(8,LOW);
      delay(time);
      digitalWrite(9,HIGH);
      delay(time);
      digitalWrite(9,LOW);
      delay(time);
      }
     }
          
     
        
  irrecv.resume(); //Le o prÃ³ximo valor  
  }  
}  
