#include <stdio.h>


//Função para cadastro das cartas
void cadastro_das_cartas() {
    char estado[2];           //definindo as variaveis
    char codigo[15];
    char nome[30];
    int populacao, pontos_turisticos;
    float pib, area;



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

    


    



}



int main() {

    

    printf("***Desafio Super Trunfo*** \n");

    printf("Carta 1 \n");

    cadastro_das_cartas();
    float densidade, pib_per_capita;

    densidade = (float) populacao / area;
    pib_per_capita = (float) pib / populacao;


    printf("Carta 01: \n");       //exibindo os dados da carta 1
    printf("Estado: %s\nCódigo da cidade: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d \n Densidade populacional: %.2f hab/km² \n PIB per capita: %.2f reais\n", estado,codigo,nome,populacao,area,pib,pontos_turisticos,densidade,pib_per_capita);


    printf("Carta 2 \n");

    cadastro_das_cartas();

    printf("Carta 02: \n");        //exibindo os dados da carta 2
    printf("Estado: %s\nCódigo da cidade: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d \n", estado,codigo,nome,populacao,area,pib,pontos_turisticos);
    printf("Densidade populacional %.2f hab/km² \n PIB per capita: %.2f reais \n", densidade,pib_per_capita);

    return 0;
}
