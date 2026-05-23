#include<stdio.h>
int main()
{
    int preco, novopreco, desconto;
    printf("informe o preco do produto: ");
    scanf("%d", &preco);
    desconto=preco*0.1;
    novopreco=preco-desconto;
    printf("o novo preco e: %d", novopreco);
}