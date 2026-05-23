#include<stdio.h>
int main(){
    float salario, valoraula, numeroaula, descontoinss, salarioliquido;

    printf("insira o valor da hora aula: \n");
    scanf("%f", &valoraula);

    printf("insira o numere de aulas dadas no mes: \n");
    scanf("%f", &numeroaula);

    printf("insira o percentual de desconto do inss: \n");
    scanf("%f", &descontoinss);

    salario = valoraula * numeroaula;
    salarioliquido = salario - (salario*descontoinss/100);
    printf("o salario liquido do professor e: %f \n", salarioliquido);
}