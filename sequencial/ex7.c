#include<stdio.h>
int main ()
{
    float peso, emagrece, engorda;
    printf("informe seu peso: ");
    scanf("%f", &peso);
    engorda=peso+peso*0.15;
    emagrece=peso-peso*0.20;
    printf("o seu peso caso engorde 15%% e %2f", engorda);
    printf("\no seu peso caso emagreca 20%% e: %2f", emagrece);
}