//Código: LED de Brilho Oscilante com Pisca-Pisca
//Autor: João

//Parâmetros
int pinoLED = 11;                                   // Define o pino 11 como o pino onde o LED será conectado.
int incremento = 5;
int decremento = 5;

void setup() {
  pinMode(pinoLED, OUTPUT);                         // Define o pino do LED em modo de saída.
}

void loop() {

  //Definindo laço FOR para aumentar o brilho do LED
  for(byte valor=0; valor<255;valor+=incremento){   // Repete o comando até o valor chegar a 255
    analogWrite(pinoLED, valor);                    // Controla o brilho do LED
    delay(30);                                      // Aguarda 30ms
  }

  delay(1000);

  //Definindo laç FOR para que o LED pisque 3 vezes
  for(int i=0; i<3; i++){
    digitalWrite(pinoLED, HIGH);                    // Define o valor do pino LED para 1, acendendo o LED
    delay(150);                                     // Aguarda 150ms.

    digitalWrite(pinoLED, LOW);                    // Define o valor do pino LED para 0, apagando o LED
    delay(150);                                    // Aguarda 150ms.
  }

  //Definindo laço FOR para diminuir o brilho do LED
  for(byte valor=255; valor>0; valor-=decremento){   // Repete o comando até o valor chegar a 0
    analogWrite(pinoLED, valor);                     // Controla o brilho do LED
    delay(30);                                       // Aguarda 30ms
  }

    delay(1000);
}
