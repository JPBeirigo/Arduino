// Código: Alternar cores LED RGB
// Autor: Joao

// Definir variáveis
int led_R = 7;                                // Define a variavel led_R como 7
int led_G = 6;                                // Define a variavel led_G como 6
int led_B = 5;                                // Define a variavel led_B como 5

// Declarando função responsável por acender o LED Vermelho
void acendeVermelho(){
  digitalWrite(led_R, LOW);                   // Acende o LED Vermelho
  digitalWrite(led_G, HIGH);                  // Apaga o LED Verde
  digitalWrite(led_B, HIGH);                  // Apaga o LED Azul
}

// Declarando função responsável por acender o LED Verde
void acendeVerde(){
  digitalWrite(led_R, HIGH);                   // Apaga o LED Vermelho
  digitalWrite(led_G, LOW);                    // Acende o LED Verde
  digitalWrite(led_B, HIGH);                   // Apaga o LED Azul
}

// Declarando função responsável por acender o LED Azul
void acendeAzul(){
  digitalWrite(led_R, HIGH);                   // Apaga o LED Vermelho
  digitalWrite(led_G, HIGH);                   // Apaga o LED Verde
  digitalWrite(led_B, LOW);                    // Acende o LED Azul
}

void apagaLED(){
  digitalWrite(led_R, HIGH);                   // Apaga o LED Vermelho
  digitalWrite(led_G, HIGH);                   // Apaga o LED Verde
  digitalWrite(led_B, HIGH);                   // Apaga o LED Azul
}
//============================================================================

// Definindo parâmetros
void setup(){

  pinMode(led_R, OUTPUT);                      // Define o pino do LED Vermelho (Definido como 7 nas variáveis) em modo de saída
  pinMode(led_G, OUTPUT);                      // Define o pino do LED Verde (Definido como 6 nas variáveis) em modo de saída
  pinMode(led_B, OUTPUT);                      // Define o pino do LED Azul (Definido como 5 nas variáveis) em modo de saída

  apagaLED();                                  // Chama a função que apaga todos os LEDs
}

void loop(){

  acendeVermelho();                            // Chama a função que acende o LED vermelho

  delay(1000);                                 // Aguarda 1s

  acendeVerde();                               // Chama a função que acende o LED Verde

  delay(1000);                                 // Aguarda 1s

  acendeAzul();                                // Chama a função que acende o LED Azul

  delay(1000);                                 // Aguarda 1s

  apagaLED();                                  // Chama a função que apaga todos os LEDs

  delay(1000);                                 // Aguarda 1s
}