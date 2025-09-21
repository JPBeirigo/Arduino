// CODIGO: Interruptor de Luz Liga Desliga
// AUTOR: João Pedro

// Declarando variáveis

int pinoLed = 10;                                   // Declara pinoLed e atribui o valor 10 (Será o pino aonde o LED estará conectado)
int pinoBotao = 7;                                  // Declara pinoBotao e atribui o valor 7 (Será o pino aonde o Botão estará conectado) 

bool estadoLed = LOW;                               // Declara estadoLed e atribui o valor LOW (0)

// Parâmetros
void setup() {
  pinMode(pinoBotao, INPUT_PULLUP);                 // Define o pino 7 (definido na variavel pinoBotao) como entrada variável
  pinMode(pinoLed, OUTPUT);                         // Define o pino 10 (Definido na variavel pinoLed) como saída
}

// Função principal (loop)
void loop() {

  if(digitalRead(pinoBotao) == LOW) {               // Se o botao estiver pressionado (Em estado LOW) executa a função

    estadoLed = !estadoLed;                         // Inverte o valor do estadoLed (LOW para HIGH, HIGH para LOW)
    digitalWrite(pinoLed, estadoLed);               // Acende ou apaga o Led, dependendo do estadoLed

    while (digitalRead(pinoBotao) == LOW) {         // Enquanto o botao estiver pressionado, nada acontece (Para evitar trocar intermitantes de estado do LED) 
      delay(10);
    }

    delay (100);                                    // Aguarda 100ms.
  }
}
