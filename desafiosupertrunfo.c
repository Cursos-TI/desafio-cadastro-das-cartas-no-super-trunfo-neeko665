#include <stdio.h>


int main() {
    
    int pontosturisticos1, pontosturisticos2, populacao1, populacao2;
    float area1, area2, PIB1, PIB2;

    
    printf("Digite a população da primeira carta: \n");
    scanf("%d", &populacao1 );
    printf("digite a área da primeira carta: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade da primeira carta: \n");
    scanf("%f", &PIB1);
    printf("Digite os pontos turisticos da 1 carta: \n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a população da segunda carta: \n");
    scanf("%d", &populacao2 );
    printf("digite a quantidade da área da segunda carta: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade da segunda carta: \n");
    scanf("%f", &PIB2);
    printf("Digite os pontos turisticos da 2 carta: \n");
    scanf("%d", &pontosturisticos2);

    printf("A quantidade de população da primeira carta é: %d\n",populacao1);
    printf("A quantidade de área da primeira carta é: %.2f\n", area1);
    printf("O PIB da cidade da primeira carta é: %.2f\n", PIB1);
    printf("A quantidade de pontos turisticos da primeira carta: %d\n", pontosturisticos1);
  
printf("A quantidade de população da primeira carta é: %d\n",populacao2);
  printf("A quantidade de área da segunda carta é: %.2f\n", area2);
  printf("O PIB da cidade da segunda carta é: %.2f\n", PIB2);
  printf("A quantidade de pontos turisticos da segunda carta: %d\n", pontosturisticos2);

    
    return 0;
}