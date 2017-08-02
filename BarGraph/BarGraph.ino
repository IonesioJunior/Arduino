/*
* @author Ionésio Junior
*/

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
}

void loop() {
     digitalWrite(firstLed,HIGH);
     delay(1000);
     digitalWrite(secondLed,HIGH);
     delay(1000);
     digitalWrite(thirdLed,HIGH);
     delay(1000);
     digitalWrite(fourthLed,HIGH);
     delay(1000);
     digitalWrite(fifthLed,HIGH);
     delay(1000);
     digitalWrite(sixthLed,HIGH);
     delay(1000);
     digitalWrite(seventhLed,HIGH);
     delay(1000);
     digitalWrite(eighthLed,HIGH);
     delay(1000);
     digitalWrite(ninthLed,HIGH);
     delay(1000);
     digitalWrite(tenthLed,HIGH);
     delay(100);
     
     digitalWrite(firstLed,LOW);
     digitalWrite(secondLed,LOW);
     digitalWrite(thirdLed,LOW);
     digitalWrite(fourthLed,LOW);
     digitalWrite(fifthLed,LOW);
     digitalWrite(sixthLed,LOW);
     digitalWrite(seventhLed,LOW);
     digitalWrite(eighthLed,LOW);
     digitalWrite(ninthLed,LOW);
     digitalWrite(tenthLed,LOW);                    
}
