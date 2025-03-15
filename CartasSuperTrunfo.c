#include <stdio.h>

//função menu
void opcao(){
    printf("1 População:\n");
    printf("2 Área:\n");
    printf("3 PIB:\n");
    printf("4 Pontos turísticos:\n");
    printf("5 Densidade:\n");
    printf("6 PIB per capita:\n");
    printf("7 Super poder:\n");
}


int main() {
    char estado[2];          //definindo as variaveis da carta 1
    char codigo[30];
    char nome[30];
    unsigned int populacao;
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
    printf("População: %u\n",populacao);
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
    printf("População: %u\n",populacaoB);
    printf("Área: %.2f km²\n",areaB);
    printf("PIB: %.2f bilhões de reais\n",pibB);
    printf("Números de pontos turísticos: %d \n",pontos_turisticosB);
    printf("Densidade populacional: %.2f hab/km² \n",densidadeB);
    printf("PIB per capita: %.2f reais\n\n",pib_per_capitaB);


    int opcao1, opcao2, resultado1, resultado2; //menu switch

    printf("### Hora de Comparar ###\n");
    printf("%s vs %s \n",nome,nome2);
    opcao();
    printf("Escolha qual atrubuto deseja comparar:");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("Você escolheu o atributo população.\n");
        printf("População de %s: %u vs População de %s: %u\n", nome, populacao, nome2, populacaoB);
        resultado1 = populacao > populacaoB ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo área.\n");
        printf("Área de %s: %.2f km² vs Área de %s: %.2f km²\n", nome, area, nome2, areaB);
        resultado1 = area > areaB ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo PIB.\n");
        printf("PIB de %s: R$ %.2f bilhões vs PIB de %s: R$ %.2f bilhões\n", nome, pib, nome2, pibB);
        resultado1 = pib > pibB ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo pontos turísticos.\n");
        printf("Pontos turísticos de %s: %d vs Pontos turísticos de %s: %d\n", nome, pontos_turisticos, nome2, pontos_turisticosB);
        resultado1 = pontos_turisticos > pontos_turisticosB ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu o atributo densidade.\n");
        printf("Densidade populacional de %s: %.2f hab/km² vs Densidade populacional de %s: %.2f hab/km²\n", nome, densidade, nome2, densidadeB);
        resultado1 = densidade < densidadeB ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu o atributo PIB per capita.\n");
        printf("PIB per capita de %s: %.2f reais vs PIB per capita de %s: %.2f reais\n", nome, pib_per_capita, nome2, pib_per_capitaB);
        resultado1 = pib_per_capita > pib_per_capitaB ? 1 : 0;
        break;
    case 7:
        printf("Você escolheu o atributo super poder.\n");
        printf("Super poder de %s: %.2f vs Super poder de %s: %.2f\n", nome, super_poderA, nome2, super_poderB);
        resultado1 = super_poderA > super_poderB ? 1 : 0;
        break;

    default:
        printf("Atributo inválido.\n");
        break;
    }

    printf("Escolha mais um atributo:\n");
    opcao();
    scanf("%d", &opcao2);

    if (opcao1 == opcao2){
        printf("Você escolheu o mesmo atributo!");
    } else{
        switch (opcao2){
        case 1:
        printf("Você escolheu o atributo população.\n");
        printf("População de %s: %u vs População de %s: %u\n", nome, populacao, nome2, populacaoB);
        resultado2 = populacao > populacaoB ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo área.\n");
        printf("Área de %s: %.2f km² vs Área de %s: %.2f km²\n", nome, area, nome2, areaB);
        resultado2 = area > areaB ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo PIB.\n");
        printf("PIB de %s: R$ %.2f bilhões vs PIB de %s: R$ %.2f bilhões\n", nome, pib, nome2, pibB);
        resultado2 = pib > pibB ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo pontos turísticos.\n");
        printf("Pontos turísticos de %s: %d vs Pontos turísticos de %s: %d\n", nome, pontos_turisticos, nome2, pontos_turisticosB);
        resultado2 = pontos_turisticos > pontos_turisticosB ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu o atributo densidade.\n");
        printf("Densidade populacional de %s: %.2f hab/km² vs Densidade populacional de %s: %.2f hab/km²\n", nome, densidade, nome2, densidadeB);
        resultado2 = densidade < densidadeB ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu o atributo PIB per capita.\n");
        printf("PIB per capita de %s: %.2f reais vs PIB per capita de %s: %.2f reais\n", nome, pib_per_capita, nome2, pib_per_capitaB);
        resultado2 = pib_per_capita > pib_per_capitaB ? 1 : 0;
        break;
    case 7:
        printf("Você escolheu o atributo super poder.\n");
        printf("Super poder de %s: %.2f vs Super poder de %s: %.2f\n", nome, super_poderA, nome2, super_poderB);
        resultado2 = super_poderA > super_poderB ? 1 : 0;
        break;

    default:
        printf("Atributo inválido.\n");
        break;
    }}

    if (resultado1 && resultado2){
        printf("%s Venceu!\n",nome);
    }else if (resultado1 != resultado2)
    {
        printf("A rodada empatou!\n");
    }else
    {
        printf("%s Venceu!\n",nome2);
    }
    




    






    return 0;
}