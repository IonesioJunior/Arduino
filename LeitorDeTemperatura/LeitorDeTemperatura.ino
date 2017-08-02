/*
* @author  Ionésio Junior
*/

const int sensor = 0; //Pino analógico onde o sensor passará a informação em forma de corrente ( 0 - 1024 ) pelo conversor analógico digital
float temperatura = 0; 
int ADC_lido = 0; // Conversão da corrente transformada em valor digital * a constante proporcional a temperatura

void setup() {
  Serial.begin(9600); // Comunicação serial com taxa de dados de 9600kb/s
  analogReference(INTERNAL); // Altera a tensão máxima que pode entrar nas portas analógicas de 5V para 1,1V
}

void loop() {
  ADC_lido = analogRead(sensor);
  temperatura = ADC_lido * 0.1075268817; // Verificar a descrição no readme do repositório(lá explica a origem desse numero)
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" Cº ");
  delay(3000);
}
