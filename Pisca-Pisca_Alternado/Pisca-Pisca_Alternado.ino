// Código: Pisca Pisca Alternado
//Autor: João

void setup() {
  pinMode(11, OUTPUT);      //Define a Porta 11 como saída.
  pinMode(10, OUTPUT);      //Define a porta 10 como saída.
}

void loop() {
  digitalWrite(11, HIGH);   //Define o valor da porta 11 para 1, acendendo o LED
  digitalWrite(10, LOW);    //Define o valor da porta 10 para 1, acendendo o LED
  delay(150);               //Aguarda 150ms

  digitalWrite(11, LOW);    //Define o valor da porta 11 para 0, apagando o LED.
  digitalWrite(10, HIGH);   //Define o valor da porta 10 para 0, apagando o LED.
  delay(150);               //Aguarda 150ms.
}
