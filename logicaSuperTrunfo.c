#include <stdio.h>

int main(){
	// Declarando variáveis.

    char estado1[3], estado2[3];
    char codigo1[3], codigo2[3];
    char cidade1[25], cidade2[25];

    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1 , pontos2;

    float densidade1, perCapita1;
	float densidade2, perCapita2;

    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Por favor, insira os dados da primeira carta.\n");

    // Coletando dados da primeira carta.

    printf("\nEstado: ");
    scanf("%s", estado1);

    printf("Código da Carta: ");
    scanf(" %[^\n]s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("População: ");
    scanf("%lu", &pop1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = pop1 / area1;
    perCapita1 = pib1 * 1000000000 / pop1;

    // Imprimindo resultados da Carta 1.

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
	printf("PIB per Capita: %.2f reais\n", perCapita1);

    // Coletando dados da segunda carta.

    printf("\nAgora, insira os dados da segunda carta.\n");

    printf("\nEstado: ");
    scanf(" %s", estado2);

    printf("Código da Carta: ");
    scanf(" %[^\n]s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("População: ");
    scanf("%lu", &pop2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = (float)pop2 / area2;
    perCapita2 = pib2 * 1000000000 / (float)pop2;

    // Imprimindo resultados da carta 2.

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
	printf("PIB per Capita: %.2f reais\n", perCapita2);

	// Comparando atributos de cada cidade.

    printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
    printf("\nCarta 1 - %s (%s): %.2f reais\n", cidade1, estado1, perCapita1);
    printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, estado2, perCapita2);

    if(perCapita1 > perCapita2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

	return 0;
}