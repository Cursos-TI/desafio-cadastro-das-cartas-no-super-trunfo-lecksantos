#include <stdio.h>


int main() {
    printf("Desafio Super Trunfo \n");

    char estado[2];           //definindo as variaveis
    char codigo[15];
    char nome[30];
    int populacao, pontos_turisticos;
    float pib, area;

    printf("Carta 1 \n");

    printf("Código da cidade: \n");           //socitando os dados das cartas para armazenar nas variaveis
    scanf ("%s", codigo);
    
    printf("Estado: \n");
    scanf("%s", estado);

    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Área: \n");
    scanf("%f", &area);

    printf("Carta 01: \n");       //exibindo os dados da carta 1
    printf("Estado: %s\nCódigo da cidade: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d \n", estado,codigo,nome,populacao,area,pib,pontos_turisticos);


    printf("Carta 2 \n");

    printf("Código da cidade: \n");
    scanf ("%s", codigo);
    
    printf("Estado: \n");
    scanf("%s", estado);

    printf("Nome da cidade: \n");
    scanf("%s", nome);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Área: \n");
    scanf("%f", &area);

    printf("Carta 02: \n");        //exibindo os dados da carta 2
    printf("Estado: %s\nCódigo da cidade: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d \n", estado,codigo,nome,populacao,area,pib,pontos_turisticos);
    

    return 0;
}
