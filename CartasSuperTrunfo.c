#include <stdio.h>

int main(){

    // Variaveis para guardar os inputs

    char estado;
    char codigoCarta[4];
    char cidade[15];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float pibPerCapita;
    float densidadePop;
    float superPoder1;

    char estado2;
    char codigoCarta2[4];
    char cidade2[15];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float pibPerCapita2;
    float densidadePop2;
    float superPoder2;

    // Vencedores da cada comparação

    char maiorPop;
    char maiorArea;
    char maiorPib;
    char menorDensidade;
    char superPoder;

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
    superPoder1 = ((float)populacao + area + pib + (float)pontosTuristicos + pibPerCapita + densidadePop);

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
    superPoder1 = ((float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + densidadePop2);

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

    // Comparando os resultados e mostrando os ganhadores

    printf("População: Cidade 2 venceu %d\n", (populacao > populacao2));
    printf("Area: Cidade 1 Venceu %d\n", (area > area2));
    printf("PIB: Cidade 1 Venceu %d\n", (pib > pib2));
    printf("Pontos turisticos: Cidade 1 Venceu %d\n", (pontosTuristicos > pontosTuristicos2));
    printf("Densidade Populacional: Cidade 1 venceu %d\n", (densidadePop < densidadePop2));
    printf("PIB per Capita: Cidade 1 Venceu %d\n", (pibPerCapita > pibPerCapita2));
    printf("Superpoder: super poder da cidade %d\n", (superPoder1 > superPoder2));

    // Logica determinando qual carta vence comparando alguns atributos

    if(densidadePop < densidadePop2) {
        printf("Carta 1 Venceu!\n");
    } else {
        printf("Carta 2 Venceu!\n");
    };

    if(area > area2) {
        printf("Carta 1 %d\n", area);
        printf("Carta 2 %d\n", area);
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 1 %d\n", area);
        printf("Carta 2 %d\n", area);
        printf("Carta 2 venceu!\n");
    }
    
    return 0;
    
}