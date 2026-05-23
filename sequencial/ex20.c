#include<stdio.h>
int main()
{
    int A, B;

    printf("diga o valor da variavel A:\n");
    scanf("%i", &A);
    printf("diga o valor da variavel B:\n");
    scanf("%i", &B);
    A=B;
    B=A;
    printf("o valor de A é: %i", B);
    printf("o valor de B é: %i", A);
}