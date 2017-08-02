
/*
* author Ionésio Junior
*/

const int led = 11; //Pino com suporte a pwm ("~")
const int potenciometro = A0; //Pino analógico A0;
int valorDoPotenciometro = 0;
int pwm = 0;

void setup() {
  pinMode(led,OUTPUT);  
}

void loop() {
  valorDoPotenciometro = analogRead(potenciometro); //Leitura do pulso analógico (0 - 1023)
  pwm = map(valorDoPotenciometro,0,1023,0,255); // Redimensionamento de 0 - 1023 para 0 - 255 -> (Estrutura de pwm definida pelo arduino, 255 é 100% de pwm)
  analogWrite(led,pwm); // Escrita analógica de intensidade do led atraves do valor do pwm
}
