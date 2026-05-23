#include<stdio.h>
int main()
{
    float salario, conta1, conta2, salariofinal;
    printf("informe o valor do seu salario: ");
    scanf("%f", &salario);
    printf("informe o valor da primeira conta atrasada: ");
    scanf("%f", &conta1);
    printf("informe o valor da segunda conta atrasada: ");
    scanf("%f", &conta2);
    conta1=conta1+(conta1*0.02);
    conta2=conta2+(conta2*0.02);
    salariofinal=salario-conta1-conta2;
    printf("o salario final de joao e:\n %.2f", salariofinal);
    return 0;
}