// ler varios numeros e imprimir o triplo de cada um
/// acaba quando digitar -999

#include<stdio.h>

int main() 
{

int num;

do{
    printf("\n Digite um numero: ");

    scanf(" %i", &num);

    printf("\n O triplo e %i\n", num*3);
} while(num!=-999);

printf("Programa encerrado.");

return 0;

}