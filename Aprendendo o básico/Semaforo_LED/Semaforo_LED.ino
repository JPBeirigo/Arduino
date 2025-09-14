// Codigo: Semáforo
// Autor: João

// Declaração de parâmetros

int semaVerde = 9;                                                            //Define a variável com o valor 9.
int semaAmarelo = 10;                                                         //Define a variável com o valor 10.
int semaVermelho = 11;                                                        //Define a variável com o valor 11.

// Inicialização
void setup() {
  pinMode(semaVerde, OUTPUT);                                                 //Define a porta 9 como a porta do LED verde, em modo de saída
  pinMode(semaAmarelo, OUTPUT);                                               //Define a porta 10 como a porta do LED amarelo, em modo de saída
  pinMode(semaVermelho, OUTPUT);                                              //Define a porta 11 como a porta do LED vermelho, em modo de saída

  // Modo inicial do semáforo
  digitalWrite(semaVerde, HIGH);                                               // LED verde aceso
  digitalWrite(semaAmarelo, LOW);                                             // LED amarelo apagado
  digitalWrite(semaVermelho, LOW);                                           // LED vermelho apagado
}

void loop() {

  // Sinal verde
  digitalWrite(semaVermelho, LOW);                                            // Apaga LED vermelho
  digitalWrite(semaVerde, HIGH);                                              // Acende LED Verde

  delay(5000);                                                                // Aguarda 5000ms (5s) com o semáforo verde

  // Sinal amarelo
  digitalWrite(semaVerde, LOW);                                               // Apaga LED Verde
  digitalWrite(semaAmarelo, HIGH);                                            // Acende LED Amarelo

  delay(5000);                                                                // Aguarda 5s com o semáforo amarelo

  // Sinal vermelho
  digitalWrite(semaAmarelo, LOW);                                             // Apaga LED Amarelo
  digitalWrite(semaVermelho, HIGH);                                           // Acende LED Vermelho

  delay(5000);                                                                // Aguarda 5s com o semáforo vermelho

//Repete o loop
}
