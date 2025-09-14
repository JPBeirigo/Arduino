// Código: SOS Código Morse em LED
//Autor: João

//Parâmetros
int pinoLED = 11;             //Define o a Porta 11 como a porta onde o LED está conectado.
int incremente = 5;
int decremento = 5;

void setup() {
  pinMode(pinoLED, OUTPUT);  //Define a Porta 11 como saída.
}

void loop() {
// Letra S em Código Morse
  for(int i=0; i<3; i++){   //Estrutura de repetição que irá se repetir 3 vezes
  digitalWrite(11, HIGH);   //Define o valor da porta 11 para 1, acendendo o LED
  delay(150);               //Aguarda 150ms

  digitalWrite(11, LOW);    //Define o valor da porta 11 para 0, apagando o LED.
  delay(150);               //Aguarda 150ms.
  }

  delay(200);               //Aguarda 200ms entre as letras.

// Letra O em Código Morse
  for(int j=0; j<3; j++){   //Estrutura de repetição que irá se repetir 3 vezes
  digitalWrite(11, HIGH);   //Define o valor da porta 11 para 1, acendendo o LED
  delay(500);               //Aguarda 500ms

  digitalWrite(11, LOW);    //Define o valor da porta 11 para 0, apagando o LED.
  delay(500);               //Aguarda 500ms.
  }

  delay(200);               //Aguarda 200ms entre as letras.

// Letra S em Código Morse
  for(int i=0; i<3; i++){   //Estrutura de repetição que irá se repetir 3 vezes
  digitalWrite(11, HIGH);   //Define o valor da porta 11 para 1, acendendo o LED
  delay(150);               //Aguarda 150ms

  digitalWrite(11, LOW);    //Define o valor da porta 11 para 0, apagando o LED.
  delay(150);               //Aguarda 150ms.
  }

  delay(2000);              //Aguarda 3000ms, encerrando a palavra antes de repetir.
}
