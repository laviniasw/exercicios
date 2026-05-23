#include<stdio.h>
int main(){
    float peso, peso2;
    printf("Diga o peso em kg: ");
    scanf("%f", &peso);

    peso2=peso/1000;
    printf("o peso em gramas e: %f", peso2);
}