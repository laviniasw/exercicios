#include<stdio.h>
int main(){
    float salariobase, salarioreceber;
    printf("qual o salario base do funcionario: ");
    scanf("%f", &salariobase);
    salarioreceber=salariobase*(1-0.10) + 50;
    printf("O valor que o funcionario ira receber e de: %f\n", salarioreceber);
    return 0;
}