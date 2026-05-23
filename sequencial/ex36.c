#include<stdio.h>
#include<locale.h>
int main(){

    setlocale(LC_ALL, "Portuguese"); 
    float deposito, taxa, rendimento, resultado;
    printf("qual o valor do depósito? ");
    scanf("%f", &deposito);
    printf("qual o valor da taxa? ");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa/100);    
    resultado = deposito + rendimento;
    printf("o resultado do rendimento e %f e o valor final e %f", rendimento, resultado);


}