#include <stdio.h>

int main(){
	// Declarando variáveis.

    char estado1[3], estado2[3];
    //char codigo1[3], codigo2[3];
    char cidade1[25], cidade2[25];
    char menu;

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

    //printf("Código da Carta: ");
    //scanf(" %[^\n]s", codigo1);

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

    // Coletando dados da segunda carta.

    printf("\nAgora, insira os dados da segunda carta.\n");

    printf("\nEstado: ");
    scanf(" %s", estado2);

    //printf("Código da Carta: ");
    //scanf(" %[^\n]s", codigo2);

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

	// Menu interativo para comparação dos atributos.

	printf("\nVamos comparar?:\n");
	printf("\n1 - Informações gerais das cidades\n");
	printf("2 - População\n");
	printf("3 - Área\n");
	printf("4 - PIB\n");
	printf("5 - Número de Pontos Turísticos\n");
	printf("6 - Densidade Populacional\n");
	printf("7 - PIB per Capita\n");

	printf("\nQual atributo deseja comparar: ");
	scanf(" %c", &menu);

    switch(menu){
        case '1':
            // Imprimindo dados da Carta 1.

            printf("\nCarta 1:\n");
            printf("Estado: %s\n", estado1);
            //printf("Código: %s\n", codigo1);
            printf("Nome da Cidade: %s\n", cidade1);
            printf("População: %lu\n", pop1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f bilhões de reais\n", pib1);
            printf("Número de Pontos Turísticos: %d\n", pontos1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per Capita: %.2f reais\n", perCapita1);

            // Imprimindo dados da carta 2.

            printf("\nCarta 2:\n");
            printf("Estado: %s\n", estado2);
            //printf("Código: %s\n", codigo2);
            printf("Nome da Cidade: %s\n", cidade2);
            printf("População: %lu\n", pop2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Número de Pontos Turísticos: %d\n", pontos2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capita: %.2f reais\n", perCapita2);

            break;
        case '2':
            // Compara a população.

            printf("\n%s Vs %s\n", cidade1, cidade2);
            printf("Atributo de comparação: População\n");
            printf("População de %s: %lu\n", cidade1, pop1);
            printf("População de %s: %lu\n", cidade2, pop2);

            if(pop1 > pop2){
                printf("%s venceu!\n", cidade1);
            }else if(pop1 < pop2){
                printf("%s venceu!\n", cidade2);
            }else{
                printf("Deu empate!\n");
            }
            break;
        case '3':
            // Compara a área.

            printf("\n%s Vs %s\n", cidade1, cidade2);
            printf("Atributo de comparação: Área\n");
            printf("Área de %s: %.2f km²\n", cidade1, area1);
            printf("Área de %s: %.2f km²\n", cidade2, area2);

            if(area1 > area2){
                printf("%s venceu!\n", cidade1);
            }else if(area1 < area2){
                printf("%s venceu!\n", cidade2);
            }else{
                printf("Deu empate!\n");
            }
            break;
        case '4':
            // Compara o PIB.

            printf("\n%s Vs %s\n", cidade1, cidade2);
            printf("Atributo de comparação: PIB\n");
            printf("PIB de %s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("PIB de %s: %.2f bilhões de reais\n", cidade2, pib2);

            if(pib1 > pib2){
                printf("%s venceu!\n", cidade1);
            }else if(pib1 < pib2){
                printf("%s venceu!\n", cidade2);
            }else{
                printf("Deu empate!\n");
            }
            break;
        case '5':
            // Compara o Número de Pontos Turísticos.

            printf("\n%s Vs %s\n", cidade1, cidade2);
            printf("Atributo de comparação: Número de Pontos Turísticos\n");
            printf("Número de Pontos Turísticos de %s: %d\n", cidade1, pontos1);
            printf("Número de Pontos Turísticos de %s: %d\n", cidade2, pontos2);

            if(pontos1 > pontos2){
                printf("%s venceu!\n", cidade1);
            }else if(pontos1 < pontos2){
                printf("%s venceu!\n", cidade2);
            }else{
                printf("Deu empate!\n");
            }
            break;
        case '6':
            // Compara a Densidade Populacional.

            printf("\n%s Vs %s\n", cidade1, cidade2);
            printf("Atributo de comparação: Densidade Populacional\n");
            printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade2, densidade2);

            if(densidade1 < densidade2){
                printf("%s venceu!\n", cidade1);
            }else if(densidade1 > densidade2){
                printf("%s venceu!\n", cidade2);
            }else{
                printf("Deu empate!\n");
            }
            break;
        case '7':
            // Compara o PIB per Capita.

            printf("\n%s Vs %s\n", cidade1, cidade2);
            printf("Atributo de comparação: PIB per Capita\n");
            printf("PIB per Capita de %s: %.2f reais\n", cidade1, perCapita1);
            printf("PIB per Capita de %s: %.2f reais\n", cidade2, perCapita2);

            if(perCapita1 > perCapita2){
                printf("%s venceu!\n", cidade1);
            }else if(perCapita1 < perCapita2){
                printf("%s venceu!\n", cidade2);
            }else{
                printf("Deu empate!\n");
            }
            break;
        default:
            // Avisa caso uma opção não disponível no menu seja inserida.

            printf("Opção Inválida!\n");
    }

	return 0;
}
