#include <stdio.h>

int main(){

    // Declaração das variáveis para as duas cartas
    char estado1, estado2;
    int pontosturisticos1, populacao1, pontosturisticos2, populacao2;
    float area1, PIB1, area2, PIB2, densidade1, densidade2, pibpercapita1, pibpercapita2 ;
    char cidade1[50], codigo1[10], cidade2[10], codigo2[50];
    float calculodensidade1, calculodensidade2, calculopercapita1, calculopercapita2 ;


    //as cartas tem como estados so uma letra
    //carta 01
    printf("digite a letra da primeira carta:\n");
    scanf(" %c", &estado1);

    printf("digite o codigo da primeira carta:\n");
    scanf("%s", codigo1);

    printf("digite a cidade da primeira carta:\n");
    scanf("%s", cidade1);

    printf("digite a população da primeira carta:\n");
    scanf("%d", &populacao1);

    printf("digite a área da primeira carta:\n");
    scanf("%f", &area1);

    printf("digite o pib da primeira carta:\n");
    scanf("%f", &PIB1);
    
    printf("numeros de pontos turisticos da primeira carta:\n");
    scanf("%d", &pontosturisticos1); 

    //calculos da primeira carta
    calculodensidade1 = (float)populacao1 / area1;
    calculopercapita1 = (PIB1 * 1000000000.0) / (float)populacao1;


    //carta 02
    printf("escreva a letra da segunda carta :\n");
    scanf(" %c", &estado2);

    printf("digite o codigo da segunda carta:\n");
    scanf("%s", codigo2);

    printf("digite a cidade da segunda carta:\n");
    scanf("%s", cidade2);

    printf("digite a população da segunda carta:\n");
    scanf("%d", &populacao2);

    printf("digite a área da segunda carta:\n");
    scanf("%f", &area2);

    printf("digite o pib da segunda carta:\n");
    scanf("%f", &PIB2);

    printf("numeros de pontos turisticos da segunda carta:\n");
    scanf("%d", &pontosturisticos2);

    //calculos da segunda carta
    calculodensidade2 = (float)populacao2 / area2;
    calculopercapita2 = (PIB2 * 1000000000.0) / (float)populacao2;


    //Exibição das informaçoes
    printf("\nCarta 01\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n",codigo1);
    printf("cidade: %s\n", cidade1);
    printf("população: %d\n",populacao1);
    printf("área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("número de pontos turísticos: %d\n", pontosturisticos1); 
    printf("Densidade Populacional: %.2f hab/km²\n", calculodensidade1);
    printf("PIB per capita: %.2f Reais\n", calculopercapita1);

    
    printf("\nCarta 02\n");
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("população: %d\n",populacao2);
    printf("área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("número de pontos turisticos: %d\n", pontosturisticos2); 
    printf("Densidade Populacional: %.2f hab/km²\n", calculodensidade2);
    printf("PIB per capita: %.2f Reais\n", calculopercapita2);


    return 0;


}