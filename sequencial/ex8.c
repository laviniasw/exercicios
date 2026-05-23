#include<stdio.h>
int main()
{
    float peso_kg, peso_g;
    printf("informe o seu peso em kg: ");
    scanf("%f", &peso_kg);
    peso_g=peso_kg*1000;
    printf("o seu peso em g e: %f", peso_g);
}