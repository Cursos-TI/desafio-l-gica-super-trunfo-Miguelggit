#include <stdio.h>

int main(){
    int opcao;
    
    printf("============== \n");
    printf("Super Trunfo!! \n");
    printf("============== \n");
    printf("\n   [Menu Principal] \n");
    printf("\n Escolha uma opção \n");
    printf("[1] Começar jogo \n");
    printf("[2] Como jogar\n");
    printf("[3] Sair\n");
    scanf(" %i", &opcao);
    switch (opcao)
    {
    case 1:
        
    char estado;
    char codigo[3];
    char cidade[20];
    unsigned long int populacao;
    float area;
    unsigned long long int pib;
    int pontos;
    int densidadePopulacional;
    float PIB_percapita;
    unsigned long long SuperPoder;

    char estado2;
    char codigo2[3];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    unsigned long long pib2;
    int pontos2;
    int densidadePopulacional2;
    float PIB_percapita2;
    unsigned long long int SuperPoder2;

    printf("=============================== \n");
    printf("Declarando a primeira carta: \n");
    printf("=============================== \n");
    
    printf("\nEscolha um estado de A ate H: ");
    scanf(" %c", &estado);
    printf("Qual o codigo da carta de 01 ate 04: ");
    scanf("%s", codigo);
    printf("Qual o nome da cidade? ");
    scanf(" %20[^\n]", cidade);
    getchar();
    printf("Qual a quantidade da população? ");
    scanf("%lu", &populacao);
    printf("Qual a area da cidade em KM²? ");
    scanf(" %f", &area);
    printf("Qual o valor do PIB? ");
    scanf(" %llu", &pib);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &pontos);
    densidadePopulacional = populacao / area;
    PIB_percapita = pib / populacao;
    SuperPoder = (int)(populacao + area + pib + pontos + PIB_percapita) + 1/densidadePopulacional; 

    printf("\n=============================== \n");
    printf("Declarando a Segunda carta: \n");
    printf("=============================== \n");
    
    printf("\nEscolha um estado de A ate H: ");
    scanf(" %c", &estado2);
    printf("Qual o codigo da carta de 01 ate 04: ");
    scanf("%s", codigo2);
    printf("Qual o nome da cidade? ");
    scanf(" %20[^\n]", cidade2);
    getchar();
    printf("Qual a quantidade da população? ");
    scanf("%lu", &populacao2);
    printf("Qual a area da cidade em KM²? ");
    scanf(" %f", &area2);
    printf("Qual o valor do PIB? ");
    scanf(" %llu", &pib2);
    printf("Quantos pontos turisticos tem? ");
    scanf("%i", &pontos2);
    densidadePopulacional2 = populacao2 / area2;
    PIB_percapita2 = pib2 / populacao2;
    SuperPoder2 = (int)(populacao2 + area2 + pib2 + pontos2 + PIB_percapita2) + 1/densidadePopulacional2; 

    int comparacao;

    printf(" Qual atributo sera comparado?\n");
    printf("[1] População\n");
    printf("[2] Área\n");
    printf("[3] PIB\n");
    printf("[4] Número de pontos turisticos\n");
    printf("[5] Densidade Demografica\n");
    printf("Escolha uma Opção: ");
    scanf(" %d", &comparacao);

    switch (comparacao) {
        case 1:
    printf("\n===================\n");
    printf("Comparando População\n");
    printf("====================\n");

    int comaparacaoPopulacao = populacao > populacao2;
    if (comaparacaoPopulacao == 1){
        printf("\nCarta 1 - %s - População: %lu\n", cidade, populacao);
        printf("Carta 2 - %s - População: %lu\n",cidade2, populacao2);
        printf("População: Carta 1 venceu (%d)\n", comaparacaoPopulacao);
    } else if (comaparacaoPopulacao == 0) {
        printf("\nCarta 1 - %s - População: %lu\n", cidade, populacao);
        printf("Carta 2 - %s - População: %lu\n",cidade2, populacao2);
        printf("População: Carta 2 venceu (%d)\n", comaparacaoPopulacao);
    } else {
        printf("Temos um empate");
    }
            break;
        
        case 2:

    printf("\n=================\n");
    printf("Comparando area\n");
    printf("=================\n");

    int comparacaoArea = area > area2;
    if (comparacaoArea == 1) {
        printf("\nCarta 1 - %s - Área: %.2f\n", cidade, area);
        printf("Carta 2 - %s - Área: %.2f\n",cidade2, area2);
        printf("Área: Carta 1 venceu (%d)\n", comparacaoArea);
    } else if(comparacaoArea == 0){
        printf("\nCarta 1 - %s - Area: %.2f\n", cidade, area);
        printf("Carta 2 - %s - Area: %.2f\n",cidade2, area2);
        printf("Área: Carta 2 venceu (%d)\n", comparacaoArea);
    } else {
        printf("Temos um Empate!!");
    }
            break;

        case 3:
    printf("\n=================\n");
    printf("Comparando PIB\n");
    printf("=================\n");

    int comparacaoPIB = pib > pib2;
    if(comparacaoPIB == 1){
        printf("\nCarta 1 - %s - PIB: %llu\n", cidade, pib);
        printf("Carta 2 - %s - PIB: %llu\n",cidade2, pib2);
        printf("PIB: Carta 1 venceu (%d)\n", comparacaoPIB);
    } else if(comparacaoPIB == 0) {
        printf("\nCarta 1 - %s - PIB: %llu\n", cidade, pib);
        printf("Carta 2 - %s - PIB: %llu\n",cidade2, pib2);
        printf("PIB: Carta 2 venceu (%d)\n", comparacaoPIB);
    } else {
        printf("Temos um Empate!!");
    }

            break;

        case 4:
    printf("\n===========================\n");
    printf("Comparando Pontos Turisticos\n");
    printf("============================\n");

    int comparacaoPontos = pontos > pontos2;
    if(comparacaoPontos == 1){
        
        printf("\nCarta 1 - %s - Pontos Turisticos: %d\n", cidade, pontos);
        printf("Carta 2 - %s - Pontos Turisticos: %d\n",cidade2, pontos2);
        printf("Pontos turisticos: Carta 1 venceu (%d)\n", comparacaoPontos);
    } else if( comparacaoPontos == 0){
        
        printf("\nCarta 1 - %s - Pontos Turisticos: %d\n", cidade, pontos);
        printf("Carta 2 - %s - Pontos Turisticos: %d\n",cidade2, pontos2);
        printf("Pontos turisticos: Carta 2 venceu (%d)\n", comparacaoPontos);
    } else {
        printf("Temos um Empate");
    }
            break;

        case 5:
    printf("\n================================\n");
    printf("Comparando Densidade Demografica\n");
    printf("=================================\n");

    int comparacaoDensidade = densidadePopulacional < densidadePopulacional2;
    if(comparacaoDensidade == 1) {
        
        printf("\nCarta 1 - %s - Densidade Populacional: %d\n", cidade, densidadePopulacional);
        printf("Carta 2 - %s - Densidade Populacional: %d\n",cidade2, densidadePopulacional2);
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", comparacaoDensidade);
    } else if (comparacaoDensidade == 0){
        
        printf("\nCarta 1 - %s - Densidade Populacional: %d\n", cidade, densidadePopulacional);
        printf("Carta 2 - Densidade Populacional: %d\n",cidade2, densidadePopulacional2);
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", comparacaoDensidade);
    } else {
        printf("Temos um Empate");
    }
            break;
    }
    break;
    
    case 2: 
        printf("!!Como jogar Super Trunfo!! \n");
        printf("\n {Neste nosso Super Trunfo quem decide os atributos das cartas é voce Jogador!!, mas preste bem atenção, não vai fugir muito da realidade para que o jogo possa ser divertido para todos, apos as escolhas das cartas cada um  vai ter a sua rodada, quando chegar a sua vez voce pode escolher uma caracteristica de sua carta para coparar com a do seu inimigo, todos os atributos exceto a densidade populacional, ganham se forem maior que o do seu oponente. Bom jogo!!!}\n");
        break;
    case 3: 
        printf("Saindo do jogo....");
        break;
    
    default:
        break;
    }

}
