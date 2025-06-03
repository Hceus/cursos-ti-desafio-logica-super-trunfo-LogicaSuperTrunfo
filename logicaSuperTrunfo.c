#include <stdio.h>

int main() {

    // Declaração de variáveis para a Carta 1 e Carta 2

    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Entrada de dados - Carta 1

    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (01-04): ");
    scanf("%2s", codigo1);
    printf("Cidade (sem espaços): ");
    scanf("%19s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &turisticos1);

    // Entrada de dados - Carta 2

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (01-04): ");
    scanf("%2s", codigo2);
    printf("Cidade (sem espaços): ");
    scanf("%19s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &turisticos2);

    // Cálculos
    
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    superPoder1 = (float)populacao1 + area1 + pib1 + turisticos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + turisticos2 + pibPerCapita2 + (1.0f / densidade2);

    // Comparações usando if e else

    printf("\n--- Comparação de Cartas ---\n");

    printf("População: Carta 1 = %lu | Carta 2 = %lu → ", populacao1, populacao2);
    if (populacao1 > populacao2)
        printf("Vencedor: Carta 1\n");
    else
        printf("Vencedor: Carta 2\n");

    printf("Área: Carta 1 = %.2f | Carta 2 = %.2f → ", area1, area2);
    if (area1 > area2)
        printf("Vencedor: Carta 1\n");
    else
        printf("Vencedor: Carta 2\n");

    printf("PIB: Carta 1 = %.2f | Carta 2 = %.2f → ", pib1, pib2);
    if (pib1 > pib2)
        printf("Vencedor: Carta 1\n");
    else
        printf("Vencedor: Carta 2\n");

    printf("Pontos Turísticos: Carta 1 = %d | Carta 2 = %d → ", turisticos1, turisticos2);
    if (turisticos1 > turisticos2)
        printf("Vencedor: Carta 1\n");
    else
        printf("Vencedor: Carta 2\n");

    printf("Densidade Populacional: Carta 1 = %.2f | Carta 2 = %.2f → ", densidade1, densidade2);
    if (densidade1 < densidade2)
        printf("Vencedor: Carta 1 (menor vence)\n");
    else
        printf("Vencedor: Carta 2 (menor vence)\n");

    printf("PIB per Capita: Carta 1 = %.6f | Carta 2 = %.6f → ", pibPerCapita1, pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2)
        printf("Vencedor: Carta 1\n");
    else
        printf("Vencedor: Carta 2\n");

    printf("Super Poder: Carta 1 = %.2f | Carta 2 = %.2f → ", superPoder1, superPoder2);
    if (superPoder1 > superPoder2)
        printf("Vencedor: Carta 1\n");
    else
        printf("Vencedor: Carta 2\n");

    return 0;
}
