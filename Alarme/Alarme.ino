/*
* @author  Ionésio Junior
*/

const int sensor = 0; //Pino analógico onde o sensor passará a informação em forma de corrente ( 0 - 1024 ) pelo conversor analógico digital
const int buzzer = 10;

float temperatura = 0; 
int ADC_lido = 0; // Conversão da corrente transformada em valor digital * a constante proporcional a temperatura

void setup() {
  Serial.begin(9600); // Comunicação serial com taxa de dados de 9600kb/s
  analogReference(INTERNAL); // Altera a tensão máxima que pode entrar nas portas analógicas de 5V para 1,1V
  pinMode(buzzer,OUTPUT);
}

void loop() {
  ADC_lido = analogRead(sensor);
  temperatura = ADC_lido * 0.1075268817; // Verificar a descrição no readme do repositório(lá explica a origem desse numero)
  if(temperatura < 25){
      Serial.println("Esta Seguro!");
  }else{
      Serial.println("Superaquecimento!");
      digitalWrite(buzzer,HIGH);
      delay(100);
      digitalWrite(buzzer,LOW);       
  }
  delay(1000);
}
