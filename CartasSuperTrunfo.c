#include <stdio.h>
int main()
{

    // carta 01
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // carta 02
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // entrada de dados carta 01
    printf("Digite os dados da primeira carta: \n");
    printf("Estado (A-H):");
    scanf("%c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // calculos carta 01
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + (1.0f/densidade1);

    // entrada de dados carta 02
    printf("Digite os dados da segunda carta: \n");
    printf("Estado (A-H):");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // calculos carta 02
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + (1.0f/densidade2);

    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade: %f habitantes/km²\n", densidade1);
    printf("PIB per capita: %f reais\n", pibPerCapita1);

    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade: %f habitantes/km²\n", densidade2);
    printf("PIB per capita: %f reais\n", pibPerCapita2);

    //Exibição da comparação entre as cartas
    printf("\nComparação de Cartas:\n");
    printf("A carta 1 tem mais habitantes que a carta 2: %d\n", populacao1 > populacao2);
    printf("A carta 1 tem mais área que a carta 2: %d\n", area1 > area2);
    printf("A carta 1 tem mais PIB que a carta 2: %d\n", pib1 > pib2);
    printf("A carta 1 tem mais pontos turísticos que a carta 2: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("A carta 1 tem mais densidade que a carta 2: %d\n", densidade1 < densidade2);
    printf("A carta 1 tem mais PIB per capita que a carta 2: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("A carta 1 tem mais superpoder que a carta 2: %d\n", superPoder1 > superPoder2);
    
    return 0;
}
