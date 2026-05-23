#include<stdio.h>
int main(){
    float despesas, resultado;
    printf("insira as despesas realizdas no restaurante: ");
    scanf("%f", &despesas);
    resultado = despesas * (1 + 0.10);
    printf("o valor total, com a gorjeta, e: %f\n", resultado);
    return 0;
}