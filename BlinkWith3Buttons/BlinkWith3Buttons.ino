
/*
* @author Ionésio Junior
*/

//Variaveis para ligar os leds
const int redLed = 8;
const int yellowLed = 9;
const int greenLed = 10;

//Variaveis para leitura dos botoes
const int BotaoRed = 2; 
const int BotaoYellow = 3;
const int BotaoGreen = 4;

//Estado de cada botao (0/LOW - Desligado , 1/HIGH - Ligado)
int EstadoBotaoRed = 0; 
int EstadoBotaoYellow = 0;
int EstadoBotaoGreen = 0;

void setup(){  
  //Definindo Saídas (leds)
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(greenLed,OUTPUT);

  //Definindo entradas (Botoes)
  pinMode(BotaoRed, INPUT);
  pinMode(BotaoYellow,INPUT);
  pinMode(BotaoGreen,INPUT);
}

void loop(){
  EstadoBotaoYellow = digitalRead(BotaoYellow);
  EstadoBotaoRed = digitalRead(BotaoRed);
  EstadoBotaoGreen = digitalRead(BotaoGreen);
  
  if(EstadoBotaoYellow == HIGH){
        digitalWrite(yellowLed,HIGH);   
   }else{
        digitalWrite(yellowLed,LOW);   
   }
   
   if(EstadoBotaoRed == HIGH){
         digitalWrite(redLed,HIGH);
    }else{
        digitalWrite(redLed,LOW);  
    }

  if(EstadoBotaoGreen == HIGH){
      digitalWrite(greenLed,HIGH);  
  }else{
      digitalWrite(greenLed,LOW);  
  }
}
