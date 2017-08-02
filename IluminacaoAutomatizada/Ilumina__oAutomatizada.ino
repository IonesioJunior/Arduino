
const int LR = A0;
const int led = 11;
int luminosidade = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  luminosidade = analogRead(LR);
  Serial.print("Luminosidade: ");
  Serial.println(luminosidade);
  if(luminosidade < 512){
      digitalWrite(led,HIGH);
  }else{
      digitalWrite(led,LOW);  
  }
  delay(500);
}
