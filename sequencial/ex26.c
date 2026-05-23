#include<stdio.h>
int main(){
    int num1, num2, resultado;
    printf("insira o valor do primeiro numero: ");
    scanf("%i", &num1);
    printf("insira o valor do segundo numero: ");
    scanf("%i", &num2);

    resultado=num1+num2+2*(num1-num2);
    printf("O resultado e: %i", resultado);
}