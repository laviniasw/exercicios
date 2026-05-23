#include<stdio.h>
int main()
{
    float alturadegraus, numdegraus, objetivo;

    printf("informe o valor da altura de cada degrau da escada: ");
    scanf("%f", &alturadegraus);
   
    printf("qual altura deseja alcancar: ");
    scanf("%f", &objetivo);

    numdegraus=objetivo/alturadegraus;

    printf("o numero de degraus que precisa subir para atingir o objetivo e: %f", numdegraus);

}