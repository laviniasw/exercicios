#include<stdio.h>
void main(){
    float salario, salario_receber;
    printf("informe o salario: ");
    scanf("%f", &salario);

    salario_receber = salario * (1 + 0.20 - 0.15);
    printf("o salario a receber e: %.2f\n", salario_receber);
    return 0;
}