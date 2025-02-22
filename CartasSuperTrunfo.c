#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo \n");

    char estado[2];
    char codigo[15];
    char nome[30];
    int populacao, pontos_turisticos;
    float pib, area;

    printf("Carta 1 \n");

    printf("Código da cidade: \n");
    scanf ("%s", codigo);
    
    printf("Estado: \n");
    scanf("%s", &estado);

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

    printf("Carta 01: \n");
    printf("Estado: %s \nCódigo da cidade: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmeros de pontos turísticos: %d\n", estado,codigo,nome,populacao,area,pib,pontos_turisticos);

    

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
