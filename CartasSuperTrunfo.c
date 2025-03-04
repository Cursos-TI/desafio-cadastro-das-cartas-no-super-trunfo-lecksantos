#include <stdio.h>


int main() {
    char estado[2];          //definindo as variaveis da carta 1
    char *codigo[15];
    char nome[30];
    unsigned populacao;
    int pontos_turisticos;
    float pib, area;
    float densidade, pib_per_capita;
    float super_poderA;

    printf("__Desafio Super Trunfo__ \n");

    printf("*Cadastrando a carta 1* \n");
    

    printf("Código da cidade: \n");           //socitando os dados das cartas para armazenar nas variaveis
    scanf ("%s", &codigo);
    
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("População: \n");
    scanf("%u", &populacao);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Área: \n");
    scanf("%f", &area);
    printf("\n");

    //calculando a densidade e pib per capita
    densidade = (float) populacao / area;
    pib_per_capita = (float) (pib * 10000000) / populacao;

    // calculando o super poder da carta 1
    super_poderA = (float) populacao + pontos_turisticos + pib + area + pib_per_capita + (1 / densidade);
    


    printf("Carta 01: \n");       //exibindo os dados da carta 1
    printf("Estado: %s \n",estado);
    printf("Código da cidade: %s\n",codigo);
    printf("Nome da cidade: %s\n",nome);
    printf("População: %d\n",populacao);
    printf("Área: %.2f km²\n",area);
    printf("PIB: %.2f bilhões de reais\n",pib);
    printf("Números de pontos turísticos: %d \n",pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km² \n",densidade);
    printf("PIB per capita: %.2f reais\n\n",pib_per_capita);



    printf("*Cadastrando a carta 2* \n");
    //definindo as variaveis da carta 2
    unsigned int populacaoB;
    int pontos_turisticosB;
    float pibB, areaB;
    float densidadeB, pib_per_capitaB;
    float super_poderB;
    
    

    printf("Código da cidade: \n");  //socitando os dados das cartas para armazenar nas variaveis
    scanf ("%s", &codigo);
    
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("População: \n");
    scanf("%u", &populacaoB);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontos_turisticosB);

    printf("PIB: \n");
    scanf("%f", &pibB);

    printf("Área: \n");
    scanf("%f", &areaB);
    printf("\n");

    //calculando a densidade e pib per capita
    densidadeB = (float) populacaoB / areaB;
    pib_per_capitaB = (float) (pibB * 10000000) / populacaoB;

    // calculando o super poder da carta 2
    super_poderB = (float) populacaoB + pontos_turisticosB + pibB + areaB + pib_per_capitaB + (1 / densidadeB);

    printf("Carta 02: \n");       //exibindo os dados da carta 2
    printf("Estado: %s\n",estado);
    printf("Código da cidade: %s\n",codigo);
    printf("Nome da cidade: %s\n",nome);
    printf("População: %d\n",populacaoB);
    printf("Área: %.2f km²\n",areaB);
    printf("PIB: %.2f bilhões de reais\n",pibB);
    printf("Números de pontos turísticos: %d \n",pontos_turisticosB);
    printf("Densidade populacional: %.2f hab/km² \n",densidadeB);
    printf("PIB per capita: %.2f reais\n\n",pib_per_capitaB);


    // comparando os atributos das cartas
    int resultadoPopu = populacao > populacaoB;
    int resultadoArea = area > areaB;
    int resultadoPib = pib > pibB;
    int resultadoPontosTur = pontos_turisticos > pontos_turisticosB;
    int resultadoDens = densidade > densidadeB;
    int resultadoPibPerC = pib_per_capita > pib_per_capitaB;
    int resultadoSuperPoder = super_poderA > super_poderB;

    // exibindo resultados da carta vencedora
    printf(" __Comparação das cartas__\n");
    printf("População: %d \n",resultadoPopu);
    printf("Área: %d \n", resultadoArea);
    printf("PIB: %d \n", resultadoPib);
    printf("Pontos Turísticos: %d \n", resultadoPontosTur);
    printf("Densidade: %d \n", resultadoDens);
    printf("PIB per capita: %d \n", resultadoPibPerC);
    printf("Super Poder: %d \n", resultadoSuperPoder);





    return 0;
}
