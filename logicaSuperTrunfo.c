#include <stdio.h>

int main(){
	// Declarando variáveis.
    int menu1, menu2;

    char cidade1[25], cidade2[25];

    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1 , pontos2;

    float densidade1, densidade2;
	double perCapita1, perCapita2;

	double soma1, soma2;

    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Por favor, insira os dados da primeira carta.\n");

    // Coletando dados da primeira carta.
    printf("\nNome da Cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("População: ");
    scanf("%lu", &pop1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float)pop1 / area1;
    perCapita1 = (double)(pib1 * 1000000000.0) / (double)pop1;

    // Coletando dados da segunda carta.
    printf("\nAgora, insira os dados da segunda carta.\n");

    printf("\nNome da Cidade: ");
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
    perCapita2 = (double)(pib2 * 1000000000.0) / (double)pop2;

	// Menu interativo para comparação dos atributos.
	printf("\nVamos comparar?:\n");
	printf("\n1 - Informações gerais das cidades\n");
	printf("2 - População\n");
	printf("3 - Área\n");
	printf("4 - PIB\n");
	printf("5 - Número de Pontos Turísticos\n");
	printf("6 - Densidade Populacional\n");
	printf("7 - PIB per Capita\n");

	printf("\nSelecione uma opção a ser comparada: ");
	scanf("%d", &menu1);

    switch(menu1){ // Cada case exibirá uma versão diferente do menu com base na opção escolhida anteriormente, excluindo-a da lista.
        case 1:
            // Imprimindo dados da Carta 1.
            printf("\nCarta 1:\n");
            printf("Nome da Cidade: %s\n", cidade1);
            printf("População: %lu\n", pop1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f bilhões de reais\n", pib1);
            printf("Número de Pontos Turísticos: %d\n", pontos1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per Capita: %.2lf reais\n", perCapita1);

            // Imprimindo dados da carta 2.
            printf("\nCarta 2:\n");
            printf("Nome da Cidade: %s\n", cidade2);
            printf("População: %lu\n", pop2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f bilhões de reais\n", pib2);
            printf("Número de Pontos Turísticos: %d\n", pontos2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capita: %.2lf reais\n", perCapita2);

            return 0;
        case 2:
            printf("\n1 - Área\n");
            printf("2 - PIB\n");
            printf("3 - Número de Pontos Turísticos\n");
            printf("4 - Densidade Populacional\n");
            printf("5 - PIB per Capita\n");
            break;
        case 3:
            printf("\n1 - População\n");
            printf("2 - PIB\n");
            printf("3 - Número de Pontos Turísticos\n");
            printf("4 - Densidade Populacional\n");
            printf("5 - PIB per Capita\n");
            break;
        case 4:
            printf("\n1 - População\n");
            printf("2 - Área\n");
            printf("3 - Número de Pontos Turísticos\n");
            printf("4 - Densidade Populacional\n");
            printf("5 - PIB per Capita\n");
            break;
        case 5:
            printf("\n1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Densidade Populacional\n");
            printf("5 - PIB per Capita\n");
            break;
        case 6:
            printf("\n1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            printf("5 - PIB per Capita\n");
            break;
        case 7:
            printf("\n1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            break;
        default:
            printf("Opção Inválida!\n");
            return 0;
    }

    printf("\nSelecione outra opção a ser comparada: ");
	scanf("%d", &menu2);

    switch(menu1){ // Cada case corresponde a uma opção escolhida no menu1 e possui switchs internos de acordo com a opção escolhida no menu2.
        case 2: // A população será comparada junto de algum outro atributo e a soma deles será calculada.
            printf("\nAtributo de comparação: População\n");
            printf("População de %s: %lu\n", cidade1, pop1);
            printf("População de %s: %lu\n", cidade2, pop2);

            if(pop1 == pop2){
                printf("\nEste atributo deu empate!\n");
            }else{
                pop1 > pop2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
            }

            switch(menu2){
                case 1: // Área
                    printf("\nAtributo de comparação: Área\n");
                    printf("Área de %s: %.2f km²\n", cidade1, area1);
                    printf("Área de %s: %.2f km²\n", cidade2, area2);

                    if(area1 == area2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        area1 > area2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (float)pop1 + area1;
                    soma2 = (float)pop2 + area2;
                    break;
                case 2: // PIB
                    printf("\nAtributo de comparação: PIB\n");
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade1, pib1);
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade2, pib2);

                    if(pib1 == pib2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pib1 > pib2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)pop1 + (pib1 * 1000000000.0);
                    soma2 = (double)pop2 + (pib2 * 1000000000.0);
                    break;
                case 3: // Número de Pontos Turísticos
                    printf("\nAtributo de comparação: Número de Pontos Turísticos\n");
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade1, pontos1);
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade2, pontos2);

                    if(pontos1 == pontos2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pontos1 > pontos2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = pop1 + pontos1;
                    soma2 = pop2 + pontos2;
                    break;
                case 4: // Densidade Populacional
                    printf("\nAtributo de comparação: Densidade Populacional\n");
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade1, densidade1);
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade2, densidade2);

                    if(densidade1 == densidade2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        densidade1 < densidade2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (float)pop1 + (1.0 / densidade1);
                    soma2 = (float)pop2 + (1.0 / densidade2);
                    break;
                case 5: // PIB per Capita
                    printf("\nAtributo de comparação: PIB per Capita\n");
                    printf("PIB per Capita de %s: %.2f reais\n", cidade1, perCapita1);
                    printf("PIB per Capita de %s: %.2f reais\n", cidade2, perCapita2);

                    if(perCapita1 == perCapita2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        perCapita1 > perCapita2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)pop1 + perCapita1;
                    soma2 = (double)pop2 + perCapita2;
                    break;
                default:
                    printf("Opção Inválida!\n");
                    return 0;
            }
            break;
        case 3: // A Área será comparada junto de algum outro atributo e a soma deles será calculada.
            printf("\nAtributo de comparação: Área\n");
            printf("Área de %s: %.2f km²\n", cidade1, area1);
            printf("Área de %s: %.2f km²\n", cidade2, area2);

            if(area1 == area2){
                printf("\nEste atributo deu empate!\n");
            }else{
                area1 > area2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
            }
            switch(menu2){
                case 1: // População
                    printf("\nAtributo de comparação: População\n");
                    printf("População de %s: %lu\n", cidade1, pop1);
                    printf("População de %s: %lu\n", cidade2, pop2);

                    if(pop1 == pop2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pop1 > pop2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (float)pop1 + area1;
                    soma2 = (float)pop2 + area2;
                    break;
                case 2: // PIB
                    printf("\nAtributo de comparação: PIB\n");
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade1, pib1);
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade2, pib2);

                    if(pib1 == pib2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pib1 > pib2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)area1 + (pib1 * 1000000000.0);
                    soma2 = (double)area2 + (pib2 * 1000000000.0);
                    break;
                case 3: // Número de Pontos Turísticos
                    printf("\nAtributo de comparação: Número de Pontos Turísticos\n");
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade1, pontos1);
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade2, pontos2);

                    if(pontos1 == pontos2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pontos1 > pontos2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = area1 + (float)pontos1;
                    soma2 = area2 + (float)pontos2;
                    break;
                case 4: // Densidade Populacional
                    printf("\nAtributo de comparação: Densidade Populacional\n");
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade1, densidade1);
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade2, densidade2);

                    if(densidade1 == densidade2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        densidade1 < densidade2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = area1 + (1.0 / densidade1);
                    soma2 = area2 + (1.0 / densidade2);
                    break;
                case 5: // PIB per Capita
                    printf("\nAtributo de comparação: PIB per Capita\n");
                    printf("PIB per Capita de %s: %.2f reais\n", cidade1, perCapita1);
                    printf("PIB per Capita de %s: %.2f reais\n", cidade2, perCapita2);

                    if(perCapita1 == perCapita2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        perCapita1 > perCapita2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)area1 + perCapita1;
                    soma2 = (double)area2 + perCapita2;
                    break;
                default:
                    printf("Opção Inválida!\n");
                    return 0;
            }
            break;
        case 4: // O PIB será comparado junto de algum outro atributo e a soma deles será calculada.
            printf("\nAtributo de comparação: PIB\n");
            printf("PIB de %s: %.2f bilhões de reais\n", cidade1, pib1);
            printf("PIB de %s: %.2f bilhões de reais\n", cidade2, pib2);

            if(pib1 == pib2){
                printf("\nEste atributo deu empate!\n");
            }else{
                pib1 > pib2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
            }
            switch(menu2){
                case 1: // População
                    printf("\nAtributo de comparação: População\n");
                    printf("População de %s: %lu\n", cidade1, pop1);
                    printf("População de %s: %lu\n", cidade2, pop2);

                    if(pop1 == pop2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pop1 > pop2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)pop1 + (pib1 * 1000000000.0);
                    soma2 = (double)pop2 + (pib1 * 1000000000.0);
                    break;
                case 2: // Área
                    printf("\nAtributo de comparação: Área\n");
                    printf("Área de %s: %.2f km²\n", cidade1, area1);
                    printf("Área de %s: %.2f km²\n", cidade2, area2);

                    if(area1 == area2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        area1 > area2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (pib1 * 1000000000.0) + (double)area1;
                    soma2 = (pib2 * 1000000000.0) + (double)area2;
                    break;
                case 3: // Número de Pontos Turísticos
                    printf("\nAtributo de comparação: Número de Pontos Turísticos\n");
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade1, pontos1);
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade2, pontos2);

                    if(pontos1 == pontos2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pontos1 > pontos2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (pib1 * 1000000000.0) + (double)pontos1;
                    soma2 = (pib2 * 1000000000.0) + (double)pontos2;
                    break;
                case 4: // Densidade Populacional
                    printf("\nAtributo de comparação: Densidade Populacional\n");
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade1, densidade1);
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade2, densidade2);

                    if(densidade1 == densidade2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        densidade1 < densidade2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (pib1 * 1000000000.0) + (double)(1.0 / densidade1);
                    soma2 = (pib2 * 1000000000.0) + (double)(1.0 / densidade2);
                    break;
                case 5: // PIB per Capita
                    printf("\nAtributo de comparação: PIB per Capita\n");
                    printf("PIB per Capita de %s: %.2f reais\n", cidade1, perCapita1);
                    printf("PIB per Capita de %s: %.2f reais\n", cidade2, perCapita2);

                    if(perCapita1 == perCapita2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        perCapita1 > perCapita2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (pib1 * 1000000000.0) + perCapita1;
                    soma2 = (pib2 * 1000000000.0) + perCapita2;
                    break;
                default:
                    printf("Opção Inválida!\n");
                    return 0;
            }
            break;
        case 5: // O Número de Pontos Turísticos será comparado junto de algum outro atributo e a soma deles será calculada.
            printf("\nAtributo de comparação: Número de Pontos Turísticos\n");
            printf("Número de Pontos Turísticos de %s: %d\n", cidade1, pontos1);
            printf("Número de Pontos Turísticos de %s: %d\n", cidade2, pontos2);

            if(pontos1 == pontos2){
                printf("\nEste atributo deu empate!\n");
            }else{
                pontos1 > pontos2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
            }
            switch(menu2){
                case 1: // População
                    printf("\nAtributo de comparação: População\n");
                    printf("População de %s: %lu\n", cidade1, pop1);
                    printf("População de %s: %lu\n", cidade2, pop2);

                    if(pop1 == pop2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pop1 > pop2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = pop1 + pontos1;
                    soma2 = pop2 + pontos2;
                    break;
                case 2: // Área
                    printf("\nAtributo de comparação: Área\n");
                    printf("Área de %s: %.2f km²\n", cidade1, area1);
                    printf("Área de %s: %.2f km²\n", cidade2, area2);

                    if(area1 == area2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        area1 > area2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (float)pontos1 + area1;
                    soma2 = (float)pontos2 + area2;
                    break;
                case 3: // PIB
                    printf("\nAtributo de comparação: PIB\n");
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade1, pib1);
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade2, pib2);

                    if(pib1 == pib2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pib1 > pib2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)pontos1 + (pib1 * 1000000000.0);
                    soma2 = (double)pontos2 + (pib2 * 1000000000.0);
                    break;
                case 4: // Densidade Populacional
                    printf("\nAtributo de comparação: Densidade Populacional\n");
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade1, densidade1);
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade2, densidade2);

                    if(densidade1 == densidade2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        densidade1 < densidade2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (float)pontos1 + (1.0 / densidade1);
                    soma2 = (float)pontos2 + (1.0 / densidade2);
                    break;
                case 5: // PIB per Capita
                    printf("\nAtributo de comparação: PIB per Capita\n");
                    printf("PIB per Capita de %s: %.2f reais\n", cidade1, perCapita1);
                    printf("PIB per Capita de %s: %.2f reais\n", cidade2, perCapita2);

                    if(perCapita1 == perCapita2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        perCapita1 > perCapita2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)pontos1 + perCapita1;
                    soma2 = (double)pontos2 + perCapita2;
                    break;
                default:
                    printf("Opção Inválida!\n");
                    return 0;
            }
            break;
        case 6: // A Densidade Populacional será comparada junto de algum outro atributo e a soma deles será calculada.
            printf("\nAtributo de comparação: Densidade Populacional\n");
            printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade2, densidade2);

            if(densidade1 == densidade2){
                printf("\nEste atributo deu empate!\n");
            }else{
                densidade1 < densidade2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
            }
             switch(menu2){
                case 1: // População
                    printf("\nAtributo de comparação: População\n");
                    printf("População de %s: %lu\n", cidade1, pop1);
                    printf("População de %s: %lu\n", cidade2, pop2);

                    if(pop1 == pop2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pop1 > pop2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (float)pop1 + (1.0 / densidade1);
                    soma2 = (float)pop2 + (1.0 / densidade2);
                    break;
                case 2: // Área
                    printf("\nAtributo de comparação: Área\n");
                    printf("Área de %s: %.2f km²\n", cidade1, area1);
                    printf("Área de %s: %.2f km²\n", cidade2, area2);

                    if(area1 == area2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        area1 > area2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (1.0 / densidade1) + area1;
                    soma2 = (1.0 / densidade2) + area2;
                    break;
                case 3: // PIB
                    printf("\nAtributo de comparação: PIB\n");
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade1, pib1);
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade2, pib2);

                    if(pib1 == pib2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pib1 > pib2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)(1.0 / densidade1) + (pib1 * 1000000000.0);
                    soma2 = (double)(1.0 / densidade2) + (pib2 * 1000000000.0);
                    break;
                case 4: // Número de Pontos Turísticos
                    printf("\nAtributo de comparação: Número de Pontos Turísticos\n");
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade1, pontos1);
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade2, pontos2);

                    if(pontos1 == pontos2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pontos1 > pontos2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (1.0 / densidade1) + (float)pontos1;
                    soma2 = (1.0 / densidade2) + (float)pontos2;
                    break;
                case 5: // PIB per Capita
                    printf("\nAtributo de comparação: PIB per Capita\n");
                    printf("PIB per Capita de %s: %.2f reais\n", cidade1, perCapita1);
                    printf("PIB per Capita de %s: %.2f reais\n", cidade2, perCapita2);

                    if(perCapita1 == perCapita2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        perCapita1 > perCapita2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)(1.0 / densidade1) + perCapita1;
                    soma2 = (double)(1.0 / densidade2) + perCapita2;
                    break;
                default:
                    printf("Opção Inválida!\n");
                    return 0;
            }
            break;
        case 7: // O PIB per Capita será comparado junto de algum outro atributo e a soma deles será calculada.
            printf("\nAtributo de comparação: PIB per Capita\n");
            printf("PIB per Capita de %s: %.2f reais\n", cidade1, perCapita1);
            printf("PIB per Capita de %s: %.2f reais\n", cidade2, perCapita2);

            if(perCapita1 == perCapita2){
                printf("\nEste atributo deu empate!\n");
            }else{
                perCapita1 > perCapita2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
            }
             switch(menu2){
                case 1: // População
                    printf("\nAtributo de comparação: População\n");
                    printf("População de %s: %lu\n", cidade1, pop1);
                    printf("População de %s: %lu\n", cidade2, pop2);

                    if(pop1 == pop2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pop1 > pop2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = (double)pop1 + perCapita1;
                    soma2 = (double)pop2 + perCapita2;
                    break;
                case 2: // Área
                    printf("\nAtributo de comparação: Área\n");
                    printf("Área de %s: %.2f km²\n", cidade1, area1);
                    printf("Área de %s: %.2f km²\n", cidade2, area2);

                    if(area1 == area2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        area1 > area2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = perCapita1 + (double)area1;
                    soma2 = perCapita2 + (double)area2;
                    break;
                case 3: // PIB
                    printf("\nAtributo de comparação: PIB\n");
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade1, pib1);
                    printf("PIB de %s: %.2f bilhões de reais\n", cidade2, pib2);

                    if(pib1 == pib2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pib1 > pib2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = perCapita1 + (pib1 * 1000000000.0);
                    soma2 = perCapita2 + (pib2 * 1000000000.0);
                    break;
                case 4: // Número de Pontos Turísticos
                    printf("\nAtributo de comparação: Número de Pontos Turísticos\n");
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade1, pontos1);
                    printf("Número de Pontos Turísticos de %s: %d\n", cidade2, pontos2);

                    if(pontos1 == pontos2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        pontos1 > pontos2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = perCapita1 + (double)pontos1;
                    soma2 = perCapita2 + (double)pontos2;
                    break;
                case 5: // Densidade Populacional
                    printf("\nAtributo de comparação: Densidade Populacional\n");
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade1, densidade1);
                    printf("Densidade Populacional de %s: %.2f hab/km²\n", cidade2, densidade2);

                    if(densidade1 == densidade2){
                        printf("\nEste atributo deu empate!\n");
                    }else{
                        densidade1 < densidade2 ? printf("\n%s venceu!\n", cidade1) : printf("\n%s venceu!\n", cidade2);
                    }

                    soma1 = perCapita1 + (double)(1.0 / densidade1);
                    soma2 = perCapita2 + (double)(1.0 / densidade2);
                    break;
                default:
                    printf("Opção Inválida!\n");
                    return 0;
            }
            break;
    }

    printf("\n***Soma dos dois atributos***\n");
    printf("%s: %.2lf\n", cidade1, soma1);
    printf("%s: %.2lf\n", cidade2, soma2);
    printf("\nVencedor da soma: ");

    if(soma1 == soma2){
        printf("Empate!\n");
    }else{
        soma1 > soma2 ? printf("%s\n", cidade1) : printf("\%s\n", cidade2);
    }

	return 0;
}
