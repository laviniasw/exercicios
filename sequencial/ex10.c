#include<stdio.h>
int main()
{
    int lado1, lado2, area;
    printf("informe o primeiro lado do quadrado: ");
    scanf("%d", &lado1);
    printf("informe o segundo lado do quadrado: ");
    scanf("%d", &lado2);
    area=lado1*lado2;
    printf("a area do quadrado e: %d", area);
    return 0;
}