#include<stdio.h>
int main()
{
    float pes, jardas, polegadas, milhas;
    printf("insira o valor da medida em pes:");
    scanf("%f", &pes);
    polegadas=pes*12;
    jardas=pes/3;
    milhas=jardas/1760;
    printf("O valor da medida em polegadas e: %f\n", polegadas);
    printf("O valor da medida em jardas e: %f\n", jardas);
    printf("O valor da medida em milhas e: %f\n", milhas);
}