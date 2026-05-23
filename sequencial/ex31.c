#include<stdio.h>
void main(){
    float salario, novosalario, aumento;
    printf("insira o valor do salario: ");
    scanf("%f", &salario);

    printf("insira o percentual de aumento do salario: ");
    scanf("%f", &aumento);

    novosalario = salario + (salario*aumento/100);
        printf("o novo salario, com o aumento, e: %f", novosalario);
}