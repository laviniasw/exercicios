#include<stdio.h>
int main()
{
    int num1, num2, soma, sub, mult;
    printf("diga um numero: ");
    scanf("%d", &num1);
    printf("diga outro numero: ");
    scanf("%d", &num2);
    soma=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    printf("Primeiro Numero: %d", num1);
    printf("Segundo Numero: %d", num2);
    printf("Soma: %d", soma);
    printf("Subtracao: %d", sub);
    printf("Subtracao: %d", mult);

}