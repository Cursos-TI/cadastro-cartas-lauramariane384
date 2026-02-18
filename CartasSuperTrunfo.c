#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//Carta 01
  char estado1;
  char código1[04];
  char cidade1[50];
  int população1;
  float área1;
  float pib1;
  int pontos1;

//Carta 02
  char estado2;
  char código2[04];
  char cidade2[50];
  int população2;
  float área2;
  float pib2;
  int pontos2;

  // Área para entrada de dados
//Carta 01
  printf("==Cadastro de Carta 01==");
  printf("Estado (A a H):  \n");
  printf("Código da Carta (Estado+número de 01 a 04):  \n");
  printf("Nome da Cidade:  \n");
  printf("População:  \n");
  printf("Área (km²):  \n");
  printf("PIB (em milhões):  \n);
  printf("Número de Pontos Turísticos:  \n")

//Carta 02
  printf("==Cadastro de Carta 02==");
  printf("Estado (A a H):  \n");
  printf("Código da Carta (Estado+número de 01 a 04):  \n");
  printf("Nome da Cidade:  \n");
  printf("População:  \n");
  printf("Área (km²):  \n");
  printf("PIB (em milhões):  \n);
  printf("Número de Pontos Turísticos:  \n")

  // Área para exibição dos dados da cidade
//Carta 01
  scanf("Estado: %c", &estado1);
  scanf("Código da Carta: %s", &código1);
  scanf("Nome da Cidade: %[~\n]", cidade1);
  scanf("População: %d", &populacao1);
  scanf("Área (km²): %f", &area1);
  scanf("PIB: %f", &pib1);
  scanf("Pontos Turísticos: %d", &pontos1);

//Carta 02
  scanf("Estado: %c", &estado2);
  scanf("Código da Carta: %s", &código2);
  scanf("Nome da Cidade: %[~\n]", cidade2);
  scanf("População: %d", &populacao2);
  scanf("Área (km²): %f", &area2);
  scanf("PIB: %f", &pib2);
  scanf("Pontos Turísticos: %d", &pontos2);


return 0;
} 
