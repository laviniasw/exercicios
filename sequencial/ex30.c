#include<stdio.h>
void main(){
    float salario, novosalario;
    printf("insira o valor do salario: ");
    scanf("%f", &salario);

    novosalario=salario*1.25;
    printf("o novo salario, com o aumento, e: %f", novosalario);
}