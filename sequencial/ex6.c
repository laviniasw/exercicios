#include<stdio.h>
int main ()
{
    float salariofixo, vendas, comissao, salariofinal;
    printf("informe o valor do seu salario: ");
    scanf("%f", &salariofixo);
    printf("informe o valor de suas vendas: ");
    scanf("%f", &vendas);
    salariofinal=salariofixo+vendas*0.04;
    printf("o seu salario final e: %f", salariofinal);
    return 0;
}