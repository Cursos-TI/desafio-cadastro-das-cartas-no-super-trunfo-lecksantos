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
    scanf("%s", &codigo);
    
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
    char codigo2 [15];
    char estado2 [5];
    char nome2 [30];
    unsigned int populacaoB;
    int pontos_turisticosB;
    float pibB, areaB;
    float densidadeB, pib_per_capitaB;
    float super_poderB;
    
    

    printf("Código da cidade: \n");  //socitando os dados das cartas para armazenar nas variaveis
    scanf ("%s", &codigo2);
    
    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Nome da cidade: \n");
    scanf("%s", &nome2);

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
    printf("Estado: %s\n",estado2);
    printf("Código da cidade: %s\n",codigo2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %d\n",populacaoB);
    printf("Área: %.2f km²\n",areaB);
    printf("PIB: %.2f bilhões de reais\n",pibB);
    printf("Números de pontos turísticos: %d \n",pontos_turisticosB);
    printf("Densidade populacional: %.2f hab/km² \n",densidadeB);
    printf("PIB per capita: %.2f reais\n\n",pib_per_capitaB);


    // comparando os atributos das cartas (desafio 1)
    /*int resultadoPopu = populacao > populacaoB;
    int resultadoArea = area > areaB;
    int resultadoPib = pib > pibB;
    int resultadoPontosTur = pontos_turisticos > pontos_turisticosB;
    int resultadoDens = densidade > densidadeB;
    int resultadoPibPerC = pib_per_capita > pib_per_capitaB;
    int resultadoSuperPoder = super_poderA > super_poderB;*/

    // exibindo resultados da carta vencedora (desafio 1)
    /*printf(" __Comparação das cartas__\n");
    printf("População: %d \n",resultadoPopu);
    printf("Área: %d \n", resultadoArea);
    printf("PIB: %d \n", resultadoPib);
    printf("Pontos Turísticos: %d \n", resultadoPontosTur);
    printf("Densidade: %d \n", resultadoDens);
    printf("PIB per capita: %d \n", resultadoPibPerC);
    printf("Super Poder: %d \n", resultadoSuperPoder);*/

    int menu;

    printf("### Hora de Comparar ###\n");
    printf("%s vs %s \n",nome,nome2);
    printf("Escolha qual atrubuto deseja comparar:\n");
    printf("1 População:\n");
    printf("2 Área:\n");
    printf("3 PIB:\n");
    printf("4 Pontos turísticos:\n");
    printf("5 Densidade:\n");
    printf("6 PIB per capita:\n");
    printf("7 Super poder:\n\n");

    printf(":");
    scanf("%d", &menu);


    switch (menu)
    {
    case 1:
        printf("População de %s vs População de %s\n",nome,nome2);

        break;
    
    default:
        break;
    }


    if (populacao > populacaoB){
        printf("População: %s venceu!\n",nome);
        if (populacao == populacaoB){
            printf("População: Deu empate.\n");
        }
    } else{
        printf("População: %s venceu!\n",nome2);
    }






    return 0;
}
