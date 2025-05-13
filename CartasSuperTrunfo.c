#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Filipe

int main() {
    // Variáveis
    char estado1[2], codigo1[3], estado2[2], codigo2[3];
    char cidade1[30], cidade2[30];
    int pop1, pop2;
    float area1, PIB1, area2, PIB2;
    int turismo1, turismo2;
    
    // Cadastro das Cartas:
    // Entrada das variáveis da carta1
    printf("Informe a letra do estado de SP:\n");
    scanf("%1s", estado1);
    printf("Informe o codigo do estado de SP (ex: 1):\n");
    scanf("%2s", codigo1);
    printf("Informe o nome da cidade:\n");
    scanf("%29s", cidade1);
    printf("Qual a populacao da cidade %s?\n", cidade1);
    scanf("%d", &pop1);
    printf("Qual a area da cidade %s? (Em KM2):\n", cidade1);
    scanf("%f", &area1);
    printf("Qual o PIB da cidade %s? (Em R$):\n", cidade1);
    scanf("%f", &PIB1);
    printf("Quantos pontos turisticos a cidade %s possui?\n", cidade1);
    scanf("%d", &turismo1);
    
    // Entrada das variáveis da carta2
    printf("Informe a letra do estado do RJ:\n");
    scanf("%1s", estado2);
    printf("Informe o codigo do estado do RJ (ex: 2):\n");
    scanf("%2s", codigo2);
    printf("Informe o nome da cidade:\n");
    scanf("%29s", cidade2);
    printf("Qual a populacao da cidade %s?\n", cidade2);
    scanf("%d", &pop2);
    printf("Qual a area da cidade %s? (Em KM2):\n", cidade2);
    scanf("%f", &area2);
    printf("Qual o PIB da cidade %s? (Em R$):\n", cidade2);
    scanf("%f", &PIB2);
    printf("Quantos pontos turisticos a cidade %s possui?\n", cidade2);
    scanf("%d", &turismo2);
    
    // Exibição dos Dados das Cartas:
    // Saídas das variáveis da carta1
    printf("Carta1:\nLetra que representa o estado: %s\nCodigo do estado: %s\nCidade: %s\nPopulacao: %d\nA cidade possui %.2f KM2\nPIB de R$%.2f\nPossui %d pontos turisticos\n\n", estado1, codigo1, cidade1, pop1, area1, PIB1, turismo1);
    
    // Saídas das variáveis da carta2
    printf("Carta2:\nLetra que representa o estado: %s\nCodigo do estado: %s\nCidade: %s\nPopulacao: %d\nA cidade possui %.2f KM2\nPIB de R$%.2f\nPossui %d pontos turisticos\n", estado2, codigo2, cidade2, pop2, area2, PIB2, turismo2);

    return 0;
}
