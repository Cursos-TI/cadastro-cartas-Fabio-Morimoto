#include <stdio.h>

int main(){
    char estado;
    char codigoCarta[4];
    char cidade[15];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float pibPerCapita;
    float densidadePop;

    char estado2;
    char codigoCarta2[4];
    char cidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float pibPerCapita2;
    float densidadePop2;

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

    printf("Digite o pib da cidade (em bilhões): \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    densidadePop = (float)populacao / area;
    pibPerCapita = (pib * 1000000000) / (float)populacao; // Converte bilhões para reais

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

    printf("Digite o pib da cidade (em bilhões): \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePop2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // Print carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

    // Print carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}