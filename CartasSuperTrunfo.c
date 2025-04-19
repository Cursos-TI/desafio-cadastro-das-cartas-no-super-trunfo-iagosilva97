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

    // variaveis para comparacao
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

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

    // Comparação entre as cartas

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        valor1_carta1 = populacao1;
        valor1_carta2 = populacao2;
        break;
    case 2:
        valor1_carta1 = area1;
        valor1_carta2 = area2;
        break;
    case 3:
        valor1_carta1 = pib1;
        valor1_carta2 = pib2;
        break;
    case 4:
        valor1_carta1 = pontosTuristicos1;
        valor1_carta2 = pontosTuristicos2;
        break;
    case 5:
        valor1_carta1 = 1.0f / densidade1; // menor densidade = melhor
        valor1_carta2 = 1.0f / densidade2;
        break;
    default:
        printf("Opção inválida! Encerrando...\n");
        return 1;
    }

    // Menu dinâmico para o segundo atributo
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++)
    {
        if (i != atributo1)
        {
            switch (i)
            {
            case 1:
                printf("1 - População\n");
                break;
            case 2:
                printf("2 - Área\n");
                break;
            case 3:
                printf("3 - PIB\n");
                break;
            case 4:
                printf("4 - Pontos Turísticos\n");
                break;
            case 5:
                printf("5 - Densidade Demográfica\n");
                break;
            }
        }
    }

    printf("Digite a opção: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5)
    {
        printf("Opção inválida ou repetida! Encerrando...\n");
        return 1;
    }

    switch (atributo2)
    {
    case 1:
        valor2_carta1 = populacao1;
        valor2_carta2 = populacao2;
        break;
    case 2:
        valor2_carta1 = area1;
        valor2_carta2 = area2;
        break;
    case 3:
        valor2_carta1 = pib1;
        valor2_carta2 = pib2;
        break;
    case 4:
        valor2_carta1 = pontosTuristicos1;
        valor2_carta2 = pontosTuristicos2;
        break;
    case 5:
        valor2_carta1 = 1.0f / densidade1;
        valor2_carta2 = 1.0f / densidade2;
        break;
    default:
        printf("Opção inválida! Encerrando...\n");
        return 1;
    }

    // Soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Resultado
    printf("\n🔍 Comparação entre %s e %s:\n", nomeCidade1, nomeCidade2);

    // Atributos Escolhidos
    printf("Atributo 1: ");
    switch (atributo1)
    {
    case 1:
        printf("População\n");
        break;
    case 2:
        printf("Área\n");
        break;
    case 3:
        printf("PIB\n");
        break;
    case 4:
        printf("Pontos Turísticos\n");
        break;
    case 5:
        printf("Densidade Demográfica (menor vence)\n");
        break;
    }
    printf("  %s: %.2f | %s: %.2f\n", nomeCidade1, valor1_carta1, nomeCidade2, valor1_carta2);

    printf("Atributo 2: ");
    switch (atributo2)
    {
    case 1:
        printf("População\n");
        break;
    case 2:
        printf("Área\n");
        break;
    case 3:
        printf("PIB\n");
        break;
    case 4:
        printf("Pontos Turísticos\n");
        break;
    case 5:
        printf("Densidade Demográfica (menor vence)\n");
        break;
    }
    printf("  %s: %.2f | %s: %.2f\n", nomeCidade1, valor2_carta1, nomeCidade2, valor2_carta2);

    printf("\n🧮 Soma dos atributos:\n");
    printf("  %s: %.2f\n", nomeCidade1, soma1);
    printf("  %s: %.2f\n", nomeCidade2, soma2);

    // Resultado final
    printf("\n🏆 Resultado: ");
    soma1 > soma2 ? printf("Vencedora: %s\n", nomeCidade1) : soma2 > soma1 ? printf("Vencedora: %s\n", nomeCidade2): printf("Empate!\n");

    return 0;
}