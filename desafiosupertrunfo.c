#include <stdio.h>

int main(){

    //coloquei todas as variaveis juntas nos formatos por achar mais facil.
    char estado1, estado2;
    int pontosturisticos1, populacao1,pontosturisticos2, populacao2;
    float area1, PIB1, area2, PIB2;
    char cidade1[50], codigo1[50], cidade2[50], codigo2[50];


    // as cartas tem como estados so uma letra
    printf("digite a letra da primeira carta:\n");
    scanf(" %c", &estado1);

    printf("digite o codigo da primeira carta:\n");
    scanf(" %s", &codigo1);

    printf("digite a cidade da primeira carta:\n");
    scanf("%s", &cidade1);

    printf("digite a população da primeira carta:\n");
    scanf("%d", &populacao1);

    printf("digite a área da primeira carta:\n");
    scanf("%f", &area1);

    printf("digite o pib da primeira carta:\n");
    scanf("%f", &PIB1);
    
    printf("numeros de pontos turisticos da primeira carta:\n");
    scanf("%d", &pontosturisticos1); 


    printf("escreva a letra da segunda carta:\n");
    scanf(" %c", &estado2);

    printf("digite o codigo da segunda carta:\n");
    scanf("%s", &codigo2);

    printf("digite a cidade da segunda carta:\n");
    scanf("%s", &cidade2);

    printf("digite a população da segunda carta:\n");
    scanf("%d", &populacao2);

    printf("digite a área da segunda carta:\n");
    scanf("%f", &area2);

    printf("digite o pib da segunda carta:\n");
    scanf("%f", &PIB2);

    printf("numeros de pontos turisticos da segunda carta:\n");
    scanf("%d", &pontosturisticos2);


    printf("Carta 01\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n",codigo1);
    printf("cidade: %s\n", cidade1);
    printf("população: %d\n",populacao1);
    printf("área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("número de pontos turisticos: %d\n", pontosturisticos1); 
    
    
    printf("Carta 02\n");
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("cidade: %s\n", cidade2);
    printf("população: %d\n",populacao2);
    printf("área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("número de pontos turisticos: %d\n", pontosturisticos2); 


    return 0;


}