// ler varios numeros positivos e imprimir quantos numeros foram digitados

#include<stdio.h>

int main() 
{

float num, cont=0;

printf("\n Digite um numero: ");
scanf("%f", &num);

while(num>0) {
    cont++;
    printf("\n Digite um numero: ");
    scanf(" %f", &num);
} 

if(cont>0) {
    printf("\nQuantidade de numeros: %f", cont);
} else {
    printf("\nNenhum numero positivo foi inserido.");
}

return 0;

}