#include <stdio.h>

int main(){

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


    printf("\n=================\n");
    printf("Comparando cartas\n");
    printf("=================\n");


    int comaparacaoPopulacao = populacao > populacao2;
    if (comaparacaoPopulacao == 1){
        printf("\nCarta 1 - %s - População: %lu\n", cidade, populacao);
        printf("Carta 2 - %s - População: %lu\n",cidade2, populacao2);
        printf("População: Carta 1 venceu (%d)\n", comaparacaoPopulacao);

    } else {
        printf("\nCarta 1 - %s - População: %lu\n", cidade, populacao);
        printf("Carta 2 - %s - População: %lu\n",cidade2, populacao2);
        printf("População: Carta 2 venceu (%d)\n", comaparacaoPopulacao);

    }

    int comparacaoArea = area > area2;
    if (comparacaoArea == 1) {
        printf("\nCarta 1 - %s - Área: %.2f\n", cidade, area);
        printf("Carta 2 - %s - Área: %.2f\n",cidade2, area2);
        printf("Área: Carta 1 venceu (%d)\n", comparacaoArea);

    } else {
        printf("\nCarta 1 - %s - Area: %.2f\n", cidade, area);
        printf("Carta 2 - %s - Area: %.2f\n",cidade2, area2);
        printf("Área: Carta 2 venceu (%d)\n", comparacaoArea);

    }

    int comparacaoPIB = pib > pib2;
    if(comparacaoPIB == 1){
        printf("\nCarta 1 - %s - PIB: %llu\n", cidade, pib);
        printf("Carta 2 - %s - PIB: %llu\n",cidade2, pib2);
        printf("PIB: Carta 1 venceu (%d)\n", comparacaoPIB);

    } else {
        printf("\nCarta 1 - %s - PIB: %llu\n", cidade, pib);
        printf("Carta 2 - %s - PIB: %llu\n",cidade2, pib2);
        printf("PIB: Carta 2 venceu (%d)\n", comparacaoPIB);

    }

    int comparacaoPontos = pontos > pontos2;
    if(comparacaoPontos == 1){
        printf("\nCarta 1 - %s - Pontos Turisticos: %d\n", cidade, pontos);
        printf("Carta 2 - %s - Pontos Turisticos: %d\n",cidade2, pontos2);
        printf("Pontos turisticos: Carta 1 venceu (%d)\n", comparacaoPontos);

    } else {
        printf("\nCarta 1 - %s - Pontos Turisticos: %d\n", cidade, pontos);
        printf("Carta 2 - %s - Pontos Turisticos: %d\n",cidade2, pontos2);
        printf("Pontos turisticos: Carta 2 venceu (%d)\n", comparacaoPontos);

    }

    int comparacaoDensidade = densidadePopulacional < densidadePopulacional2;
    if(comparacaoDensidade == 1) {
        printf("\nCarta 1 - %s - Densidade Populacional: %d\n", cidade, densidadePopulacional);
        printf("Carta 2 - %s - Densidade Populacional: %d\n",cidade2, densidadePopulacional2);
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", comparacaoDensidade);

    } else {
        printf("\nCarta 1 - %s - Densidade Populacional: %d\n", cidade, densidadePopulacional);
        printf("Carta 2 - Densidade Populacional: %d\n",cidade2, densidadePopulacional2);
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", comparacaoDensidade);

    }

    int comparacaoPIBperCapita = PIB_percapita > PIB_percapita2;
    if(comparacaoPIBperCapita == 1){
        printf("\nCarta 1 - %s - PIB per Capita: %.2f\n", cidade, PIB_percapita);
        printf("Carta 2 - %s - PIB per Capita: %.2f\n",cidade2, PIB_percapita2);
        printf("PIB per Capita: Carta 1 venceu (%d)\n", comparacaoPIBperCapita);

    } else {
        printf("\nCarta 1 - %s - PIB per Capita: %.2f\n", cidade, PIB_percapita);
        printf("Carta 2 - %s - PIB per Capita: %.2f\n",cidade2, PIB_percapita2);
        printf("PIB per Capita: Carta 2 venceu (%d)\n", comparacaoPIBperCapita);

    }

    int comparacaoSuperPoder = SuperPoder > SuperPoder2;
    if(comparacaoSuperPoder == 1){
        printf("\nCarta 1 - %s - Super Poder: %llu\n", cidade, SuperPoder);
        printf("Carta 2 - %s - Super Poder: %llu\n",cidade2, SuperPoder2);
        printf("Super Poder: Carta 1 venceu (%d)\n", comparacaoSuperPoder);

    } else {
        printf("\nCarta 1 - %s - Super Poder: %llu\n", cidade, SuperPoder);
        printf("Carta 2 - %s - Super Poder: %llu\n",cidade2, SuperPoder2);
        printf("Super Poder: Carta 2 venceu (%d)\n", comparacaoSuperPoder);
        
    }

    return 0;

}