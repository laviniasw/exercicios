#include<stdio.h>
int main()
{
    float horas_trabalhadas, salario, imposto, salariobruto, valorhoras, salario_minimo;

    printf("Informe quantas horas foram trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    valorhoras=salario_minimo/8;
    salariobruto=horas_trabalhadas*valorhoras;
    imposto=salariobruto*0.03;
    salario=salariobruto-imposto;

    printf("O salario a ser recebido e: %.2f", salario);
} 