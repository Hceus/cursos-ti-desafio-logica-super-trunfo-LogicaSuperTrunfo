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

    int escolha1, escolha2;
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;
    float soma1, soma2;

    // Entrada Carta 1
    printf("Cadastre a primeira carta:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código (01-04): "); scanf("%2s", codigo1);
    printf("Cidade (sem espaço): "); scanf("%19s", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &turisticos1);

    // Entrada Carta 2
    printf("\nCadastre a segunda carta:\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código (01-04): "); scanf("%2s", codigo2);
    printf("Cidade (sem espaço): "); scanf("%19s", cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &turisticos2);

    // Cálculo de densidade
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // Menu 1
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    scanf("%d", &escolha1);

    // Menu 2 (manual, dinâmico, sem for)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos Turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade Demográfica\n");

    scanf("%d", &escolha2);
    if (escolha1 == escolha2) {
        printf("Erro: Os dois atributos devem ser diferentes.\n");
        return 1;
    }

    // Coleta dos valores dos atributos para Carta 1
    if (escolha1 == 1) valor1_attr1 = populacao1;
    if (escolha1 == 2) valor1_attr1 = area1;
    if (escolha1 == 3) valor1_attr1 = pib1;
    if (escolha1 == 4) valor1_attr1 = turisticos1;
    if (escolha1 == 5) valor1_attr1 = -densidade1;

    if (escolha2 == 1) valor1_attr2 = populacao1;
    if (escolha2 == 2) valor1_attr2 = area1;
    if (escolha2 == 3) valor1_attr2 = pib1;
    if (escolha2 == 4) valor1_attr2 = turisticos1;
    if (escolha2 == 5) valor1_attr2 = -densidade1;

    // Coleta dos valores dos atributos para Carta 2
    if (escolha1 == 1) valor2_attr1 = populacao2;
    if (escolha1 == 2) valor2_attr1 = area2;
    if (escolha1 == 3) valor2_attr1 = pib2;
    if (escolha1 == 4) valor2_attr1 = turisticos2;
    if (escolha1 == 5) valor2_attr1 = -densidade2;

    if (escolha2 == 1) valor2_attr2 = populacao2;
    if (escolha2 == 2) valor2_attr2 = area2;
    if (escolha2 == 3) valor2_attr2 = pib2;
    if (escolha2 == 4) valor2_attr2 = turisticos2;
    if (escolha2 == 5) valor2_attr2 = -densidade2;

    // Soma total dos atributos (para comparação final)
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    // Impressão dos resultados
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    // Atributo 1
    printf("\nAtributo 1: ");
    if (escolha1 == 1) printf("População\n");
    if (escolha1 == 2) printf("Área\n");
    if (escolha1 == 3) printf("PIB\n");
    if (escolha1 == 4) printf("Pontos Turísticos\n");
    if (escolha1 == 5) printf("Densidade Demográfica\n");

    printf("%s: %.2f | %s: %.2f\n", cidade1, valor1_attr1 < 0 ? -valor1_attr1 : valor1_attr1,
                                     cidade2, valor2_attr1 < 0 ? -valor2_attr1 : valor2_attr1);

    // Atributo 2
    printf("\nAtributo 2: ");
    if (escolha2 == 1) printf("População\n");
    if (escolha2 == 2) printf("Área\n");
    if (escolha2 == 3) printf("PIB\n");
    if (escolha2 == 4) printf("Pontos Turísticos\n");
    if (escolha2 == 5) printf("Densidade Demográfica\n");

    printf("%s: %.2f | %s: %.2f\n", cidade1, valor1_attr2 < 0 ? -valor1_attr2 : valor1_attr2,
                                     cidade2, valor2_attr2 < 0 ? -valor2_attr2 : valor2_attr2);

    // Soma total
    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // Resultado final
    printf("\nResultado: ");
    soma1 > soma2 ? printf("Vencedor: %s\n", cidade1) :
    soma2 > soma1 ? printf("Vencedor: %s\n", cidade2) :
                    printf("Empate!\n");

    return 0;
}
