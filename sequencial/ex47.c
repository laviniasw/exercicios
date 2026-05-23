#include<stdio.h>
int main()
{
    float precofab, txlucro, tximpostos, impostos, precofinal;
    
    printf("insira o valor do preco de fabrica:\n ");
    scanf("%f", &precofab);
    printf("insira o valor da taxa de impostos:\n ");
    scanf("%f", &tximpostos);
    printf("insira o valor do lucro:\n ");
    scanf("%f", &txlucro);

    txlucro=precofab*txlucro/100;
    impostos=precofab*tximpostos/100;
    precofinal=precofab+txlucro+impostos;
    printf("valor do lucro: %.2f\n", txlucro);
    printf("valor dos impostos: %.2f\n", impostos);
    printf("preco final: %.2f\n", precofinal);
}