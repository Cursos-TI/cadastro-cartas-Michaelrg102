#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[10], codigo2[10];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontos1, pontos2;
  

  // Área para entrada de dados
  printf("Digite o Primeiro Estado: ");
  scanf(" %c", &estado1);

  printf("Digite o Segundo Estado: ");
  scanf(" %c", &estado2);

  printf("Digite o Primeiro Codigo: ");
  scanf(" %s", codigo1);

  printf("Digite o Segundo Codigo: ");
  scanf(" %s", codigo2);

  printf("Digite a Primeira Cidade: ");
  scanf(" %s", cidade1);

  printf("Digite a Segunda Cidade: ");
  scanf(" %s", cidade2);

  printf("Digite a Primeira Populacao: ");
  scanf(" %d", &populacao1);

  printf("Digite a Segunda Populacao: ");
  scanf(" %d", &populacao2);
  
  printf("Digite a Primeira Area: ");
  scanf(" %f", &area1);

  printf("Digite a Segunda Area: ");
  scanf(" %f", &area2);

  printf("Digite o Primeiro PIB: ");
  scanf(" %f", &pib1);

  printf("Digite o Segundo PIB: ");
  scanf(" %f", &pib2);

  printf("Digite os Pontos Turisticos da Carta 1: ");
  scanf(" %d", &pontos1);

  printf("Digite os Pontos Turisticos da Carta 2: ");
  scanf(" %d", &pontos2);
  

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);

return 0;
} 
