#include "dht.h" //INCLUSÃO DE BIBLIOTECA
 
const int pinoDHT11 = A2; //PINO ANALÓGICO UTILIZADO PELO DHT11
 
dht DHT; //VARIÁVEL DO TIPO DHT
 
void setup(){
  
  Serial.begin(9600); //INICIALIZA A SERIAL
  delay(2000); //INTERVALO DE 2 SEGUNDO ANTES DE INICIAR
}
 
void loop(){
  
  DHT.read11(pinoDHT11); //LÊ AS INFORMAÇÕES DO SENSOR
if (Serial.available()) {
  for(int i=Serial.read(); i=1; i) {
    Serial.println("Olá!!!! O que você deseja fazer? ");
    Serial.println("Ver temperatura");
    Serial.println("Testar sensor ultrassonico");
    Serial.println("Testar buzzer");
    Serial.println("Testar infravermelho");
  
    }

    Serial.print("Umidade: "); //IMPRIME O TEXTO NA SERIAL
  Serial.print(DHT.humidity); //IMPRIME NA SERIAL O VALOR DE UMIDADE MEDIDO
  Serial.print("%"); //ESCREVE O TEXTO EM SEGUIDA
  Serial.print(" / Temperatura: "); //IMPRIME O TEXTO NA SERIAL
  Serial.print(DHT.temperature, 0); //IMPRIME NA SERIAL O VALOR DE UMIDADE MEDIDO E REMOVE A PARTE DECIMAL
  Serial.println("*C"); //IMPRIME O TEXTO NA SERIAL

}
  
  
  
  delay(2000); //INTERVALO DE 2 SEGUNDOS * NÃO DIMINUIR ESSE VALOR
}
