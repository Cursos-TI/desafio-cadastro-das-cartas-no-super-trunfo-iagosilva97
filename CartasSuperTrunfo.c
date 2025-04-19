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
    int pontosCarta1;

    // pontos carta 01
    pontosCarta1 = 0;

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
    int pontosCarta2;

    // pontos carta 02
    pontosCarta2 = 0;

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
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + (1.0f / densidade1);

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
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + (1.0f / densidade2);

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

    // Comparação das cartas
    printf("\nComparação das cartas:\n");

    // batalha populacao
    if (populacao1 > populacao2)
    {
        pontosCarta1 += 1;
        printf("A carta 1 venceu!\n");
    }
    else if (populacao1 < populacao2)
    {
        pontosCarta2 += 1;
        printf("A carta 2 venceu!\n");
    }
    else
    {
        printf("As cartas são iguais em população!\n");
    }

    // batalha area
    if (area1 > area2)
    {
        pontosCarta1 += 1;
        printf("A carta 1 venceu!\n");
    }
    else if (area1 < area2)
    {
        pontosCarta2 += 1;
        printf("A carta 2 venceu!\n");
    }
    else
    {
        printf("As cartas são iguais em área!\n");
    }

    // batalha pib
    if (pib1 > pib2)
    {
        pontosCarta1 += 1;
        printf("A carta 1 venceu!\n");
    }
    else if (pib1 < pib2)
    {
        pontosCarta2 += 1;
        printf("A carta 2 venceu!\n");
    }
    else
    {
        printf("As cartas são iguais em PIB!\n");
    }

    // batalha pontos turisticos
    if (pontosTuristicos1 > pontosTuristicos2)
    {
        pontosCarta1 += 1;
        printf("A carta 1 venceu!\n");
    }
    else if (pontosTuristicos1 < pontosTuristicos2)
    {
        pontosCarta2 += 1;
        printf("A carta 2 venceu!\n");
    }
    else
    {
        printf("As cartas são iguais em pontos turísticos!\n");
    }

    // batalha densidade
    if (densidade1 > densidade2)
    {
        pontosCarta1 += 1;
        printf("A carta 1 venceu!\n");
    }
    else if (densidade1 < densidade2)
    {
        pontosCarta2 += 1;
        printf("A carta 2 venceu!\n");
    }
    else
    {
        printf("As cartas são iguais em densidade!\n");
    }

    // batalha pib per capita
    if (pibPerCapita1 > pibPerCapita2)
    {
        pontosCarta1 += 1;
        printf("A carta 1 venceu!\n");
    }
    else if (pibPerCapita1 < pibPerCapita2)
    {
        pontosCarta2 += 1;
        printf("A carta 2 venceu!\n");
    }
    else
    {
        printf("As cartas são iguais em PIB per capita!\n");
    }

    // batalha super poder
    if (superPoder1 > superPoder2)
    {
        pontosCarta1 += 2;
        printf("A carta 1 venceu!\n");
    }
    else if (superPoder1 < superPoder2)
    {
        pontosCarta2 += 2;
        printf("A carta 2 venceu!\n");
    }
    else
    {
        printf("As cartas são iguais em super poder!\n");
    }

    // resultado final
    printf("\nResultado final:\n");
    printf("Pontos da carta 1: %d\n", pontosCarta1);
    printf("Pontos da carta 2: %d\n", pontosCarta2);
    if (pontosCarta1 > pontosCarta2)
    {
        printf("A carta 1 venceu!\n");
    }
    else if (pontosCarta1 < pontosCarta2)
    {
        printf("A carta 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }
    return 0;
}
