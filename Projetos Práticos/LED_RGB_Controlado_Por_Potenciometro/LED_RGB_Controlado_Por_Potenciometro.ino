// Código: LED RGB controlado por Potenciometro
// Autor: Joao

//=============================== Declarando variáveis ====================================

int led_R = 7;                                                            // Declara led_R e a define como 7
int led_G = 6;                                                            // Declara led_G e a define como 6
int led_B = 5;                                                            // Declara led_B e a define como 5

int pot = A0;                                                             // Declara pot e define a ela o valor da entrada Analógia A0
int valorPot;                                                             // Declara valorPot e a deixa sem valor definido

//================================ Declarando Funções ======================================

void acendeVermelho() {
 
  digitalWrite(led_R, LOW);                           // Acende a cor Vermelha do LED
  
  digitalWrite(led_G, HIGH);                          // Apaga a cor Verde do LED
  
  digitalWrite(led_B, HIGH);                          // Apaga a cor Azul do LED
 
}

void acendeVerde() {
 
  digitalWrite(led_R, HIGH);                          // Apaga a cor Vermelha do LED
 
  digitalWrite(led_G, LOW);                           // Acende a cor Verde do LED
 
  digitalWrite(led_B, HIGH);                          // Apaga a cor Azul do LED  
 
}

void acendeAzul() {
 
  digitalWrite(led_R, HIGH);                         // Apaga a cor Vermelha do LED
 
  digitalWrite(led_G, HIGH);                         // Apaga a cor Verde do LED
 
  digitalWrite(led_B, LOW);                          // Acende a cor Azul do LED  
 
}

void apagaLED() {
 
  digitalWrite(led_R, HIGH);                          // Apaga a cor Vermelha do LED
 
  digitalWrite(led_G, HIGH);                          // Apaga a cor Verde do LED
 
  digitalWrite(led_B, HIGH);                          // Apaga a cor Azul do LED
 
}

//================================ Definindo Parâmetros =================================

void setup(){
  pinMode(led_R, OUTPUT);                             // Define a porta da cor vermelha do Led (7, definido nas variaveis) como saída 
  pinMode(led_G, OUTPUT);                             // Define a porta da cor verde do Led (6, definido nas variaveis) como saída 
  pinMode(led_B, OUTPUT);                             // Define a porta da cor azul do Led (5, definido nas variaveis) como saída 

  apagaLED();                                         // Chama a função de apagar o LED por completo
}

//============================== Função principal (Loop) ==================================

void loop(){
  valorPot = analogRead(pot);                         // Lê o valor do potenciometro e o armazena na variável valorPot

  if (valorPot >=0 && valorPot <=256){               // Caso o valor do potenciometro seja entre 0 e 256, o LED ficará apagado
    apagaLED();                                       // Função que apaga o LED por completro
  } 

  if (valorPot > 256 && valorPot <= 512){       // Caso o valor do potenciometro seja entre 257 e 512, o LED acenderá na cor vermelha 
    acendeVermelho();                                 // Chama a função que acende o LED na cor vermelha
  }

  if (valorPot > 512 && valorPot <= 768){       // Caso o valor do potenciometro seja entre 257 e 512, o LED acenderá na cor verde 
    acendeVerde();                                    // Chama a função que acende o LED na cor verde
  }

  if (valorPot > 768 && valorPot <= 1023){       // Caso o valor do potenciometro seja entre 769 e 1023, o LED acenderá na cor azul 
    acendeAzul();                                    // Chama a função que acende o LED na cor azul
  }

//Repete o Loop
}