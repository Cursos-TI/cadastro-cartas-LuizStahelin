#include <stdio.h>

int main() {
    int populacao1;
    int ponto1;
    float pib1;
    float area1;
    char codigo1[20];
    char cidade1[50];
    char estado1[8];
    float densidade1;
    float pibpercapta1;
    float superpoder1;

    // Entrada das informações da primeira carta
    printf("Carta 1:\n\n");

    printf("Estado A: ");
    scanf(" %s", &estado1);

    printf("Código A: ");
    scanf("%s", &codigo1);

    printf("Cidade A: ");
    scanf("%s", &cidade1);

    printf("População A: ");
    scanf("%d", &populacao1);

    printf("Area A: ");
    scanf("%f", &area1);

    printf("PIB A: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos A: ");
    scanf("%d", &ponto1);



    // Entrada das informações da segunda carta:

    int populacao2;
    int ponto2;
    float pib2;
    float area2;
    char codigo2[20];
    char cidade2[50];
    char estado2[8];
    float densidade2;
    float pibpercapta2;
    float superpoder2;

    printf("\nCarta 2:\n\n");

    printf("Estado B: ");
    scanf(" %s", &estado2);

    printf("Código B: ");
    scanf("%s", &codigo2);

    printf("Cidade B: ");
    scanf("%s", &cidade2);

    printf("População B: ");
    scanf("%d", &populacao2);

    printf("Area B: ");
    scanf("%f", &area2);

    printf("PIB B: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos B: ");
    scanf("%d", &ponto2);


    // Impressão das informações da carta A

    printf("\nCarta A: \n\n");
    printf("Estado A: %s\n", estado1);
    printf("Código A: %s\n", codigo1);
    printf("Cidade A: %s\n", cidade1);
    printf("População A: %d\n", populacao1);
    printf("Área A: %.2f km²\n", area1);
    printf("PIB A: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos A: %d\n", ponto1);

    densidade1 = (float) populacao1 / area1;

    printf("Densidade Populacional A: %.2f hab/km²\n", densidade1);
    
    pibpercapta1 = (float) pib1 / populacao1;

    printf("PIB per Capita A: %.2f reais\n\n", pibpercapta1);

    superpoder1 = (float) area1 + pib1 + pibpercapta1 + (1 / densidade1) + ponto1;

    printf("O valor do poder da carta A é: %f", superpoder1);

    // Impressão das informações da carta B

    printf("\n\nCarta B: \n\n");
    printf("Estado B: %s\n", estado2);
    printf("Código B: %s\n", codigo2);
    printf("Cidade B: %s\n", cidade2);
    printf("População B: %d\n", populacao2);
    printf("Área B: %.2f km²\n", area2);
    printf("PIB B: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos B: %d\n", ponto2);

    densidade2 = (float) populacao2 / area2;

    printf("Densidade Populacional B: %.2f hab/km²\n", densidade2);
    
    pibpercapta2 = (float) pib2 / populacao2;

    printf("PIB per Capita B: %.2f reais\n", pibpercapta2);

    superpoder2 = (float) area2 + pib2 + pibpercapta2 + (1 / densidade2) + ponto2;

    printf("O valor do poder da carta B é: %f\n\n", superpoder2);

    printf("======================= BATALHA DAS CARTAS =======================\n\n");


    printf("Comparação de população: \n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);


    if (populacao1 > populacao2) {
        printf("%s é o(a) vencedor(a)\n\n", cidade1);
    }else{
        printf("%s é o(a) vencedor(a)!\n\n", cidade2);
    }

    printf("Comparação de área: \n\n");
    printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %f\n\n", cidade2, estado2, area2);

        if (area1 > area2) {
        printf("%s é o(a) vencedor(a)\n\n", cidade1);
    }else{
        printf("%s é o(a) vencedor(a)!\n\n", cidade2);
    }

    printf("Comparação de PIB: \n\n");
    printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, pib2);
    printf("Carta 2 - %s (%s): %f\n\n", cidade2, estado2, pib2);

        if (pib1 > pib2) {
        printf("%s é o(a) vencedor(a)\n\n", cidade1);
    }else{
        printf("%s é o(a) vencedor(a)!\n\n", cidade2);
    }

    printf("Comparação de Pontos Turísticos: \n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, ponto1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, ponto2);

        if (ponto1 > ponto2) {
        printf("%s é o(a) vencedor(a)\n\n", cidade1);
    }else{
        printf("%s é o(a) vencedor(a)!\n\n", cidade2);
    }

    printf("Comparação de PIB per Capita: \n\n");
    printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, pibpercapta1);
    printf("Carta 2 - %s (%s): %f\n\n", cidade2, estado2, pibpercapta2);

        if (pibpercapta1 > pibpercapta2) {
        printf("%s é o(a) vencedor(a)\n\n", cidade1);
    }else{
        printf("%s é o(a) vencedor(a)!\n\n", cidade2);
    }

    printf("Comparação de Densidade: \n\n");
    printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %f\n\n", cidade2, estado2, densidade2);

        if (densidade1 < densidade2) {
        printf("%s é o(a) vencedor(a)\n\n", cidade1);
    }else{
        printf("%s é o(a) vencedor(a)!\n\n", cidade2);
    }

    printf("Comparação de Super Poder: \n\n");
    printf("Carta 1 - %s (%s): %f\n", cidade1, estado1, superpoder1);
    printf("Carta 2 - %s (%s): %f\n\n", cidade2, estado2, superpoder2);

        if (superpoder1 > superpoder2) {
        printf("%s é o(a) grande vencedor(a) do super trunfo!\n\n", cidade1);
    }else{
        printf("%s é o(a) grande vencedor(a) do super trunfo!", cidade2);
    }

    return 0;

}