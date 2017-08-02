/*
* @author Ionésio Junior
*/
//Definindo informações sobre o pino do sensor
const int sensor = 0;
float temperatura = 0;
int adc_lido = 0;

//Definindo o valor dos pinos dos leds
const int firstLed = 2;
const int secondLed = 3;
const int thirdLed = 4;
const int fourthLed = 5;
const int fifthLed = 6;
const int sixthLed = 7;
const int seventhLed = 8;
const int eighthLed = 9;
const int ninthLed = 10;
const int tenthLed = 11;

void setup() {
  //Setando todos os pinos de led como output (saída de corrente)
  pinMode(firstLed,OUTPUT);
  pinMode(secondLed,OUTPUT);
  pinMode(thirdLed,OUTPUT);
  pinMode(fourthLed,OUTPUT);
  pinMode(fifthLed,OUTPUT);
  pinMode(sixthLed,OUTPUT);
  pinMode(seventhLed,OUTPUT);
  pinMode(eighthLed,OUTPUT);
  pinMode(ninthLed,OUTPUT);
  pinMode(tenthLed,OUTPUT);

  analogReference(INTERNAL); // Altera a tensão máxima que pode entrar nas portas analógicas de 5V para 1,1V
}

void loop() {
     adc_lido = analogRead(sensor);
     temperatura = adc_lido * 0.1075268817;
     //Definindo a ativação/desativação de cada led como sendo 1/10 do máximo valor de temperatura que eu defini como 50
     if(temperatura > (50 / 10)){
          digitalWrite(firstLed,HIGH);
     }else{
          digitalWrite(firstLed,LOW);
     }
     if(temperatura > (50/10) * 2){
          digitalWrite(secondLed,HIGH);
     }else{
          digitalWrite(secondLed,LOW);
     }
     if(temperatura > (50 / 10) * 3){
          digitalWrite(thirdLed,HIGH);
     }else{
          digitalWrite(thirdLed,LOW); 
     }
     if(temperatura > (50 / 10) * 4){
          digitalWrite(fourthLed,HIGH);
     }else{
          digitalWrite(fourthLed,LOW);
     }
     if(temperatura > (50 / 10) * 5){
          digitalWrite(fifthLed,HIGH);
     }else{
          digitalWrite(fifthLed,LOW);
     }
     if(temperatura > (50 / 10) * 6){
          digitalWrite(sixthLed,HIGH);
     }else{
          digitalWrite(sixthLed,LOW);
     }
     if(temperatura > (50 / 10) * 7){
          digitalWrite(seventhLed,HIGH);
     }else{
          digitalWrite(seventhLed,LOW);
     }
     if(temperatura > (50 / 10) * 8){
          digitalWrite(eighthLed,HIGH);
     }else{
          digitalWrite(eighthLed,LOW);
     }
     if(temperatura > (50 / 10) * 9){
          digitalWrite(ninthLed,HIGH);
     }else{
          digitalWrite(ninthLed,LOW);
     }
     if(temperatura >= 50){
          digitalWrite(fourthLed,HIGH);
     }else{
          digitalWrite(fourthLed,LOW);
     }                    
}
