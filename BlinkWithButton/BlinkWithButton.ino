/*
* author : Ionésio Junior
*/
const int ledPin = 8; //Led de saída no pino 8 
const int Botao = 2;  //Entrada da corrente no pino 2
int EstadoBotao = 0; //Estado do led (0 - Desligado , 1 - Ligado)

void setup(){  
  pinMode(ledPin, OUTPUT); //Pino do led será saída  
  pinMode(Botao, INPUT); //Pino com botão será entrada 
}

void loop(){
  EstadoBotao = digitalRead(Botao); //Verifico a corrente no pino de entrada
  if(EstadoBotao == HIGH){
    digitalWrite(ledPin,HIGH);  // Defino a corrente no pino de saída
  }else{
    digitalWrite(ledPin,LOW);    //Defino a corrente no pino de saída
  }
}
