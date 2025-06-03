#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];  
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    int opcao;

    // Cadastro da primeira carta
    printf("Cadastre a primeira carta: \n");

    printf("Insira o estado entre A e H: ");
    scanf(" %c", &estado1); 

    printf("Insira o codigo utilizando um numero de 01 a 04: ");
    scanf("%2s", codigo1); 

    printf("Insira cidade sem o espaço: ");
    scanf("%19s", cidade1); 

    printf("Insira o numero da população local: ");
    scanf("%lu", &populacao1);

    printf("Insira a area do estado: ");
    scanf("%f", &area1);

    printf("Insira o PIB do estado: ");
    scanf("%f", &pib1);

    printf("Insira os numeros dos pontos turisticos: ");
    scanf("%d", &turisticos1);

    // Cadastro da segunda carta
    printf("\nCadastre a segunda carta: \n");

    printf("Insira o estado entre A e H: ");
    scanf(" %c", &estado2); 

    printf("Insira o codigo utilizando um numero de 01 a 04: ");
    scanf("%2s", codigo2);

    printf("Insira cidade sem o espaço: ");
    scanf("%19s", cidade2);

    printf("Insira o numero da população local: ");
    scanf("%lu", &populacao2);

    printf("Insira a area do estado: ");
    scanf("%f", &area2);

    printf("Insira o PIB do estado: ");
    scanf("%f", &pib2);

    printf("Insira os numeros dos pontos turisticos: ");
    scanf("%d", &turisticos2);

    // Cálculos adicionais
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Menu de comparação
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o número do atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", cidade1, turisticos1);
            printf("%s: %d pontos turísticos\n", cidade2, turisticos2);
            if (turisticos1 > turisticos2)
                printf("Vencedor: %s\n", cidade1);
            else if (turisticos2 > turisticos1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
            break;
    }

    return 0;
}
