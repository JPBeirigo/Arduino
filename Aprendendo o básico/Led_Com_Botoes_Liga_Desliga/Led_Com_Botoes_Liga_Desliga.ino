// CODIGO: Interruptor de Luz Liga Desliga
// AUTOR: João Pedro

// Declarando variáveis

int pinoLed = 10;                                   // Declara pinoLed e atribui o valor 10 (Será o pino aonde o LED estará conectado)
int pinoBotaoL = 7;                                 // Declara pinoBotaoL (Liga) e atribui o valor 7 (Será o pino aonde o Botão estará conectado) 
int pinoBotaoD = 8;                                 // Declara pinoBotaoL (Desliga) e atribui o valor 8 (Será o pino aonde o Botão estará conectado) 

bool estadoLed = LOW;                               // Declara estadoLed e atribui o valor LOW (0)

// Parâmetros
void setup() {
  pinMode(pinoBotaoL, INPUT_PULLUP);                // Define o pino 7 (definido na variavel pinoBotal) como entrada variável
  pinMode(pinoBotaoD, INPUT_PULLUP);                // Define o pino 8 (definido na variavel pinoBotal) como entrada variável
  pinMode(pinoLed, OUTPUT);                         // Define o pino 10 (Definido na variavel pinoLed) como saída
}

// Função principal (loop)
void loop() {

  if(digitalRead(pinoBotaoL) == LOW) {               // Se o botao estiver pressionado (Em estado LOW) executa a função

    estadoLed = HIGH;                                // Atribui o estado HIGH (1) para o estadoLed
    digitalWrite(pinoLed, estadoLed);                // Acende o LED

    delay (100);                                     // Aguarda 100ms.
  }

  else if(digitalRead(pinoBotaoD) == LOW) {               // Se o botao estiver pressionado (Em estado LOW) executa a função

    estadoLed = LOW;                                 // Atribui o estado LOW (0) para o estadoLed
    digitalWrite(pinoLed, estadoLed);                // Apaga o LED

    delay (100);                                     // Aguarda 100ms.
  }
}
