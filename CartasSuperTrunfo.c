#include <stdio.h>

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
    char codigo[15];
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


    int opcao1, opcao2, opcao3,opcao4, resultado1, resultado2, resultado3, resultado4; //menu switch

    printf("### Hora de Comparar ###\n");
    printf("%s vs %s \n",nome,nome2);
    opcao();
    printf("Escolha qual atrubuto deseja comparar:");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("Você escolheu o atributo população.\n");
        resultado1 = populacao > populacaoB ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo área.\n");
        resultado1 = area > areaB ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo PIB.\n");
        resultado1 = pib > pibB ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo pontos turísticos.\n");
        resultado1 = pontos_turisticos > pontos_turisticosB ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu o atributo densidade.\n");
        resultado1 = densidade < densidadeB ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu o atributo PIB per capita.\n");
        resultado1 = pib_per_capita > pib_per_capitaB ? 1 : 0;
        break;
    case 7:
        printf("Você escolheu o atributo super poder.\n");
        resultado1 = super_poderA > super_poderB ? 1 : 0;
        break;

    default:
        printf("Atributo inválido.\n");
        break;
    }

    printf("Escolha mais um atributo? :\n");
    opcao();
    scanf("%d", &opcao2);

    if (opcao1 == opcao2){
        printf("Você escolheu o mesmo atributo!");
    } else{
        switch (opcao2){
        case 1:
        printf("Você escolheu o atributo população.\n");
        resultado2 = populacao > populacaoB ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo área.\n");
        resultado2 = area > areaB ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo PIB.\n");
        resultado2 = pib > pibB ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo pontos turísticos.\n");
        resultado2 = pontos_turisticos > pontos_turisticosB ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu o atributo densidade.\n");
        resultado2 = densidade < densidadeB ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu o atributo PIB per capita.\n");
        resultado2 = pib_per_capita > pib_per_capitaB ? 1 : 0;
        break;
    case 7:
        printf("Você escolheu o atributo super poder.\n");
        resultado2 = super_poderA > super_poderB ? 1 : 0;
        break;

    default:
        printf("Atributo inválido.\n");
        break;
    }}

    printf("Escolha outro atributo:\n");
    opcao();
    scanf("%d", &opcao3);

    if (opcao1 == opcao3){
        printf("Você já escolheu esse atributo");
    }else if (opcao2 == opcao3)
        {
            printf("Você já escolheu esse atributo");
        }else{
        switch (opcao3)
        {
            case 1:
            printf("Você escolheu o atributo população.\n");
            resultado3 = populacao > populacaoB ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu o atributo área.\n");
            resultado3 = area > areaB ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB.\n");
            resultado3 = pib > pibB ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu o atributo pontos turísticos.\n");
            resultado3 = pontos_turisticos > pontos_turisticosB ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu o atributo densidade.\n");
            resultado3 = densidade < densidadeB ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu o atributo PIB per capita.\n");
            resultado3 = pib_per_capita > pib_per_capitaB ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu o atributo super poder.\n");
            resultado3 = super_poderA > super_poderB ? 1 : 0;
            break;
    
        default:
            printf("Atributo inválido.\n");
            break;
        }
    }

    printf("Escolhe outro atributo:\n");
    opcao();
    scanf("%d", &opcao4);

    if (opcao1 == opcao4){
        printf("Você já escolheu esse atributo");
    }else if (opcao2 == opcao4){
        printf("Você já escolheu esse atributo");
    }else if (opcao3 == opcao4){
        printf("Você já escolheu esse atributo");
    }else
    {
        switch (opcao4)
        {
            case 1:
            printf("Você escolheu o atributo população.\n");
            resultado4 = populacao > populacaoB ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu o atributo área.\n");
            resultado4 = area > areaB ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu o atributo PIB.\n");
            resultado4 = pib > pibB ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu o atributo pontos turísticos.\n");
            resultado4 = pontos_turisticos > pontos_turisticosB ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu o atributo densidade.\n");
            resultado4 = densidade < densidadeB ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu o atributo PIB per capita.\n");
            resultado4 = pib_per_capita > pib_per_capitaB ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu o atributo super poder.\n");
            resultado4 = super_poderA > super_poderB ? 1 : 0;
            break;
    
        default:
            printf("Atributo inválido.\n");
            break;
    }}
    




    






return 0;
}