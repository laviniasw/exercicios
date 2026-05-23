#include<stdio.h>
int main()
{
    int num, sucessor, antecessor;
    printf("informe um numero:\n");
    scanf("%i", &num);
    sucessor=num+1;
    antecessor=num-1;
    printf("o sucessor é: %i", sucessor);
    printf("o antecessor é: %i", antecessor);
}