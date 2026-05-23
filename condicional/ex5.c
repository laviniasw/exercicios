#include<stdio.h>
int main()
{
    int num1, num2;
    printf("entre com um numero:");
    scanf("%i", &num1);
    printf("entre com outro numero:");
    scanf("%i", &num2);

    if(num1 > num2)
    { 
        printf("o numero maior e: %i", num1);
    }
    else if(num2 > num1)
    {
        printf("o numero maior e: %i", num2);
    }
    else
    { 
        printf("os dois numeros sao iguais");
    }
}