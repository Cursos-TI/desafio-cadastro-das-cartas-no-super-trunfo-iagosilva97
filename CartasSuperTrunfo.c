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

    int opcao;

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s:\n", nomeCidade1, nomeCidade2);

    switch (opcao)
    {
    case 1: // População
        printf("População: %lu vs %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2)
        {
            printf("Vencedora: %s\n", nomeCidade1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Vencedora: %s\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2: // Área
        printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
        if (area1 > area2)
        {
            printf("Vencedora: %s\n", nomeCidade1);
        }
        else if (area2 > area1)
        {
            printf("Vencedora: %s\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 3: // PIB
        printf("PIB: %.2f bilhões vs %.2f bilhões\n", pib1, pib2);
        if (pib1 > pib2)
        {
            printf("Vencedora: %s\n", nomeCidade1);
        }
        else if (pib2 > pib1)
        {
            printf("Vencedora: %s\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 4: // Pontos Turísticos
        printf("Pontos Turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Vencedora: %s\n", nomeCidade1);
        }
        else if (pontosTuristicos2 > pontosTuristicos1)
        {
            printf("Vencedora: %s\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 5: // Densidade Demográfica (menor vence!)
        printf("Densidade Demográfica: %.2f hab/km² vs %.2f hab/km²\n", densidade1, densidade2);
        if (densidade1 < densidade2)
        {
            printf("Vencedora: %s (menor densidade)\n", nomeCidade1);
        }
        else if (densidade2 < densidade1)
        {
            printf("Vencedora: %s (menor densidade)\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    default:
        printf("Opção inválida! Por favor, escolha entre 1 e 5.\n");
        break;
    }
    return 0;
}