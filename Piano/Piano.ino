/*
* @author Ionésio Junior
*/

//Variaveis para ligar os leds
const int redLed = 8;
const int yellowLed = 9;
const int greenLed = 10;

const int buzzer = 11;
int tom = 0;

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
  pinMode(buzzer,OUTPUT);
  
  //Definindo entradas (Botoes)
  pinMode(BotaoRed, INPUT);
  pinMode(BotaoYellow,INPUT);
  pinMode(BotaoGreen,INPUT);
}

void loop(){
  EstadoBotaoYellow = digitalRead(BotaoYellow);
  EstadoBotaoRed = digitalRead(BotaoRed);
  EstadoBotaoGreen = digitalRead(BotaoGreen);
  
  if(EstadoBotaoYellow && !EstadoBotaoRed && !EstadoBotaoGreen){
        tom = 100;
        digitalWrite(yellowLed,HIGH);   
   }else{
        digitalWrite(yellowLed,LOW);   
   }
   
   if(EstadoBotaoRed && !EstadoBotaoYellow && !EstadoBotaoGreen){
         tom = 200;
         digitalWrite(redLed,HIGH);
    }else{
        digitalWrite(redLed,LOW);  
    }

  if(EstadoBotaoGreen && !EstadoBotaoYellow && !EstadoBotaoRed){
      tom = 300;
      digitalWrite(greenLed,HIGH);  
  }else{
      digitalWrite(greenLed,LOW);  
  }
  if(tom > 0){
    digitalWrite(buzzer,HIGH);
    delayMicroseconds(tom); // Espera o tempo proporcional ao comprimento de onda da nota musical em milisegundos
    digitalWrite(buzzer,LOW);
    delayMicroseconds(tom);
    tom = 0;
    digitalWrite(greenLed,LOW);
    digitalWrite(yellowLed,LOW);
    digitalWrite(redLed,LOW);  
  }
}
