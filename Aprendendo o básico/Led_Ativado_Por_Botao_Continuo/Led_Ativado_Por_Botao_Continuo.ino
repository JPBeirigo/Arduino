// CODIGO: Interruptor de Luz Pressionado
// AUTOR: João Pedro

// Declarando variáveis

int botao = 7;                                // Declara variável botao e atribui o valor 7
int led = 10;                                 // Declara a variável LED e atribui o valor 10

bool estadoLed = LOW;                         // Define o estado booleano do LED como LOW (0)
bool estadoBotao = LOW;                       // Define o estado booleado do LED como LOW (0)

// Definindo Parâmetros

void setup() {
  pinMode(botao, INPUT_PULLUP);                  // Configura o pino 7 (Variavel botao definida acima) como entrada com resistor Pull-Up 
                                                 // (Muda entre mode de entrada/saída de acordo com a leitura do botão/chave conectada à porta) 
  pinMode(led, OUTPUT);                          // Configura o pino 10 (Variavel led definida acima) em modo de saída   
}

// Função principal (Loop)

void loop() {
  estadoBotao = digitalRead(botao);              // Lê o estado do botão, se está HIGH(1) ou LOW(0) e atribui ao estadoBotao
  estadoLed = !estadoBotao;                      // Atribui o valor oposto ao do estadoBotao

  digitalWrite(led, estadoLed);                  // Define a porta 10 (pinoLed) como HIGH ou LOW, dependendo da variável estadoLed

  delay(10);                                     // Aguarda 10ms

}