#include <stdio.h>


int main() {
    char estado[2];           //definindo as variaveis
    char codigo[15];
    char nome[30];
    int populacao, pontos_turisticos;
    float pib, area;
    float densidade, pib_per_capita;

    printf("__Desafio Super Trunfo__ \n");

    printf("*Cadastrando a carta 1* \n");
    

    printf("Código da cidade: \n");           //socitando os dados das cartas para armazenar nas variaveis
    scanf ("%s", &codigo);
    
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Área: \n");
    scanf("%f", &area);

    //calculando a densidade e pib per capita
    densidade = (float) populacao / area;
    pib_per_capita = (float) pib / populacao;


    printf("Carta 01: \n");       //exibindo os dados da carta 1
    printf("Estado: %s\n",estado);
    printf("Código da cidade: %s\n",codigo);
    printf("Nome da cidade: %s\n",nome);
    printf("População: %d\n",populacao);
    printf("Área: %.2f km²\n",area);
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Números de pontos turísticos: %d \n",pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km² \n",densidade);
    printf("PIB per capita: %.2f reais\n",pib_per_capita);



    printf("*Cadastrando a carta 2* \n");
    

    printf("Código da cidade: \n");           //socitando os dados das cartas para armazenar nas variaveis
    scanf ("%s", &codigo);
    
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Área: \n");
    scanf("%f", &area);

    //calculando a densidade e pib per capita
    densidade = (float) populacao / area;
    pib_per_capita = (float) pib / populacao;

    printf("Carta 02: \n");       //exibindo os dados da carta 2
    printf("Estado: %s\n",estado);
    printf("Código da cidade: %s\n",codigo);
    printf("Nome da cidade: %s\n",nome);
    printf("População: %d\n",populacao);
    printf("Área: %.2f km²\n",area);
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Números de pontos turísticos: %d \n",pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km² \n",densidade);
    printf("PIB per capita: %.2f reais\n",pib_per_capita);


    return 0;
}
