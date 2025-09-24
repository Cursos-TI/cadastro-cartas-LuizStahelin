#include <stdio.h> 

int main(){
    int populacao1;
    int pontoturistico1;
    float pib1;
    float area1;
    char codigo1[20];
    char cidade1[50];
    char estado1;
    // Serão feitas anotações no final de cada um dos códigos para explicar o que está sendo feito em cada um deles.

    // CARTA 01

    printf("Estado 1: ");
    scanf(" %c", &estado1);

    printf("Código 1: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade 1: ");
    scanf("%s", &cidade1);

    printf("População 1: ");
    scanf("%d", &populacao1);

    printf("Area 1: ");
    scanf("%f", &area1);

    printf("PIB 1: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos 1: ");
    scanf("%d", &pontoturistico1);


    /* Essa função apresenta a primeira parte do código onde apontaremos e escolheremos as seguintes informações da primeira carta:
    Estado
    Código
    Nome
    Estado
    População
    Área
    PIB
    Número de pontos turísticos */

    // CARTA 02

    int populacao2;
    int pontoturistico2;
    float pib2;
    float area2;
    char codigo2[8];
    char cidade2[50];
    char estado2;

    printf("Estado 2: ");
    scanf(" %c", &estado2);

    printf("Código 2: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade 2: ");
    scanf("%s", &cidade2);

    printf("População 2: ");
    scanf("%d", &populacao2);

    printf("Area 2: ");
    scanf("%f", &area2);

    printf("PIB 2: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos 2: ");
    scanf("%d", &pontoturistico2);

    // Impressão das informações da carta 1
    printf("\n\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Número de pontos turísticos: %d\n\n", pontoturistico1);

    // Impressão das informações da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontoturistico2);

    return 0;


   /* Nessa segunda parte, além de trazer as informações da segunda carta
   Também coloco o código para rodar as duas cartas afim de melhor comparação

   */

}