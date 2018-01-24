
#include <SoftwareSerial.h>

#define RxDigital 6
#define TxDigital 7

//#define DEBUG_ENABLED  1 (Pesquisar o que é)

SoftwareSerial bluetooth(RxDigital,TxDigital);


void setup() {

  Serial.begin(9600); //configurando velocidade da porta serial

  pinMode(RxDigital,INPUT); // Configurando o pino digital 6 (RX)

  pinMode(TxDigital,OUTPUT); // Configurando o pino digital 7 (TX)

  

  

}

void loop() {
  // put your main code here, to run repeatedly:

}
