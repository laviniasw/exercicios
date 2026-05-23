#include<stdio.h>
int main()
{
    float preco, codigo;
    printf("insira o preco de um produto: ");
    scanf("%f", &preco);
    printf("insira o seu codigo de origem: ");
    scanf("%f", &codigo);
    if(codigo == 1)
    {
        printf("a procedencia e: Sul");
    }
    else if(codigo == 2)
    { 
        printf("a procedencia e: Norte");
    }
}