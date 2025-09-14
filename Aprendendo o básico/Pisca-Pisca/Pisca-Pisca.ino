// Código: Pisca Pisca
//Autor: João

void setup() {
  pinMode(11, OUTPUT);  //Define a Porta 11 como saída.
}

void loop() {
  digitalWrite(11, HIGH);   //Define o valor da porta 11 para 1, acendendo o LED

  delay(1000);    //Aguarda 1s (1000mili)

  digitalWrite(11, LOW);    //Define o valor da porta 11 para 0, apagando o LED.

  delay(1000);    //Aguarda 1s.
}
