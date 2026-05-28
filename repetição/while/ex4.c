// ler varios numeros positivos e imprimir a media dos numeros digitados

#include<stdio.h>

int main() 
{

float num, soma=0, cont=0;

printf("\n Digite um numero: ");
scanf("%f", &num);

while(num>0) {
    cont++;
    soma = soma + num;

    printf("\n Digite um numero: ");
    scanf(" %f", &num);
} 

if(cont>0) {
    printf("\nA media e: %.2f\n", soma/cont);
} else {
    printf("\nNenhum numero positivo foi inserido.");
}

return 0;

}