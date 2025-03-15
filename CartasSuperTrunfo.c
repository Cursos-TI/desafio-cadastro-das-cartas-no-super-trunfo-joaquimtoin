#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Declaração de variáveis de ambas cartas
    char estado[20]; 
    char codigo[20]; 
    char cidade[20];
    char estado2[20]; 
    char codigo2[20]; 
    char cidade2[20];
    int populacao, pontos, populacao2, pontos2;
    float area, pib, area2, pib2;

    
    //Pede as informações da primeira carta
    printf("Digite as informacoes da primeira carta:\n");
    
    printf("Nome do estado:\n");
    scanf("%s", &estado);
    
    printf("Codigo da carta:\n");
    scanf("%s", &codigo);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Populacao:\n");
    scanf("%i", &populacao);

    printf("Area:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos:\n");
    scanf("%i", &pontos);

    //Pede as informações da segunda carta
    printf("Digite as informacoes da primeira carta:\n");
    
    printf("Nome do estado:\n");
    scanf("%s", &estado2);
    
    printf("Codigo da carta:\n");
    scanf("%s", &codigo2);

    printf("Nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Populacao:\n");
    scanf("%i", &populacao2);

    printf("Area:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos:\n");
    scanf("%i", &pontos2);
    
    //Imprime as informações da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %i\n", populacao);
    printf("Area: %f km2\n", area);
    printf("PIB: %f bilhoes de reais.\n", pib);
    printf("Numero de Pontos Turisticos: %i\n", pontos);

    //Imprime as informações da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f bilhoes de reais.\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", pontos2);

    return 0;
}
