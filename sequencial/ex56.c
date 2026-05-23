#include<stdio.h>
int main()
{

    float peso_sacokg, saco_gramas, quantidade_racao, consumo, racaogato1, racaogato2, resultado;

    printf("Insira o peso do saco de racao: ");
    scanf("%f", &peso_sacokg);
    printf("Insira a quantidade de racao fornecida a cada gato: ");
    scanf("%f", &quantidade_racao);

    saco_gramas = peso_sacokg * 1000;
    consumo = quantidade_racao * 2;
    consumo = consumo * 5;
    resultado = saco_gramas - consumo;


    printf("O quanto sobrara apos 5 dias e: %.2f", resultado);

}