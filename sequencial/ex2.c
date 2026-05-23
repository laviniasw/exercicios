#include<stdio.h>
int main()
{
    int num1, num2, num3, mult;
    printf("informe um número: ");
    scanf("%d", &num1);
    printf("informe outro número: ");
    scanf("%d", &num2);
    printf("informe outro número: ");
    scanf("%d", &num3);
    mult=num1*num2*num3;
    printf("o resultado da multiplicação é: %d", mult); 
} 