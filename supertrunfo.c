#include <stdio.h>
int main() {
    char estado1[2], codigo1[3], estado2[2], codigo2[3];
    char cidade1[30], cidade2[30];
    unsigned long int pop1, pop2;
    float area1, PIB1, area2, PIB2, densipop1, densipop2, PIBpercapita1, PIBpercapita2, superPoder1, superPoder2;
    int turismo1, turismo2;
    
    // Entrada das variáveis da carta1
    printf("Informe a letra do estado de SP:\n");
    scanf("%1s", estado1);
    printf("Informe o codigo do estado de SP (ex: 1):\n");
    scanf("%2s", codigo1);
    printf("Informe o nome da cidade:\n");
    scanf("%29s", cidade1);
    printf("Qual a populacao da cidade %s?\n", cidade1);
    scanf("%lu", &pop1);
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
    scanf("%lu", &pop2);
    printf("Qual a area da cidade %s? (Em KM2):\n", cidade2);
    scanf("%f", &area2);
    printf("Qual o PIB da cidade %s? (Em R$):\n", cidade2);
    scanf("%f", &PIB2);
    printf("Quantos pontos turisticos a cidade %s possui?\n", cidade2);
    scanf("%d", &turismo2);

    //Calculo da densidade populacional e da renda per capita, utilizando as variaveis densipop e PIPpercapita
    densipop1 = (float) pop1 / area1;
    densipop2 = (float) pop2 / area2;
    PIBpercapita1 = (float) PIB1 / pop1;
    PIBpercapita2 = (float) PIB2 / pop2;
    //Cálculo do super poder
    superPoder1 = (float) pop1 + area1 + PIB1 + turismo1 + PIBpercapita1 + (1 / densipop1);
    superPoder2 = (float) pop2 + area2 + PIB2 + turismo2 + PIBpercapita2 + (1 / densipop2);
    
    // Saídas das variáveis da carta1
    printf("Carta1:\nLetra que representa o estado: %s\nCodigo do estado: %s\nCidade: %s\nPopulacao: %lu\nA cidade possui %.2f KM2\nPIB de R$ %.2f\nDensidade populacional: %.2f pessoas por km2\nRenda per capita: R$ %.2f por pessoa\nPossui %d pontos turisticos\nSuper Poder: %.2f\n\n", estado1, codigo1, cidade1, pop1, area1, PIB1, densipop1, PIBpercapita1, turismo1, superPoder1);
    
    // Saídas das variáveis da carta2
    printf("Carta2:\nLetra que representa o estado: %s\nCodigo do estado: %s\nCidade: %s\nPopulacao: %lu\nA cidade possui %.2f KM2\nPIB de R$ %.2f\nDensidade populacional: %.2f pessoas por km2\nRenda per capita: R$ %.2f por pessoa\nPossui %d pontos turisticos\nSuper Poder: %.2f\n", estado2, codigo2, cidade2, pop2, area2, PIB2, densipop2, PIBpercapita2, turismo2, superPoder2);

    //comparações e saídas das comparações.
    printf("Populacao: (Carta1 venceu?) %u\n", (pop1 > pop2));
    printf("Area: (Carta1 venceu?) %u\n", (area1 > area2));
    printf("PIB: (Carta1 venceu?) %u\n", (PIB1 > PIB2));
    printf("Pontos turisticos: (Carta1 venceu?) %u\n", (turismo1 > turismo2));
    printf("Densidade populacional: (Carta1 venceu?) %u\n", (densipop1 < densipop2));
    printf("PIP per capita: (Carta1 venceu?) %u\n", (PIBpercapita1 > PIBpercapita2));
    printf("Super poderes: (Carta1 venceu?) %u\n", (superPoder1 > superPoder2));
    return 0;
}
