// Código: Acionando um motor DC
// Autor: João Pedro

// Declarando variáveis

int botao = 7;                                           // Declara botao e atribui o valor 7 a ele (O pino onde o botao está conectado)
int motor = 9;                                           // Declara motor e atribui o valor 9 a ele (O pino onde o motor está conectado)

// Parâmetros
void setup() {
  pinMode(botao, INPUT_PULLUP);                          // Configura o pino do botao (pino 7, definido acima) em modo de entrada varíavel
  pinMode(motor, OUTPUT);                                // Configura o pino do motor (Pino 9, definido acima) em modo de saída.
}

// Função principal (Loop)
void loop() {
  if(digitalRead(botao) == LOW) {                        // Caso o botao esteja acionado (Estado LOW), executa a função

    digitalWrite(motor, HIGH);                           // Aciona o motor DC  

    delay(10);                                           // Aguarda 10ms                         
  }

  else {                                                 // Caso o botao nao esteja apertado, executa a função

    digitalWrite(motor, LOW);                            // Desliga o motor DC
  }

  delay(100);                                            // Aguarda 100ms.
}
