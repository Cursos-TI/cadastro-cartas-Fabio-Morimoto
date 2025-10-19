#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    // Variaveis guardando as informações das cartas
    char estado; // Uma unica letra representando o estado
    char codigoCarta[4]; // Codigo da carta, codigo do estado seguido de 01 a 04
    char cidade[15]; //nome da cidade
    int populacao; //numero de habitantes da cidade
    float area; // Area da cidade em km quadrados
    float pib; // Produto interno bruto da cidade
    int pontosTuristicos; //quantidade de pontos turisticos

    char estado2; // Uma unica letra representando o estado
    char codigoCarta2[4]; // Codigo da carta, codigo do estado seguido de 01 a 04
    char cidade2[15]; //nome da cidade
    int populacao2; //numero de habitantes da cidade
    float area2; // Area da cidade em km quadrados
    float pib2; // Produto interno bruto da cidade
    int pontosTuristicos2; //quantidade de pontos turisticos

    // Coletando as informações da carta 1

    printf("Digite uma letra entre A e H: \n");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km quadrado: \n");
    scanf("%f", &area);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    // Coletando as informações da carta 2

    printf("\nDigite uma letra entre A e H: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km quadrado: \n");
    scanf("%f", &area2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // Print carta 1

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);

    // Print carta 2

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
  }

