#include<stdio.h>
int main()
{
    float salariominimo, salario, resultado;
    printf("informe o seu salario: ");
    scanf("%f", &salario);
    salariominimo=1.600;
    resultado=salario/salariominimo;
    printf("voce recebe %.2f salarios minimos", resultado);
    return 0;
}