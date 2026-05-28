// Elabore um algoritmo que leia várias letras enquanto forem diferentes de F, imprimindo cada letra logo após a leitura

#include<stdio.h>

int main() 
{

char letra;

do{
    printf("\n Digite uma letra: ");

    scanf(" %c", &letra);

    printf("\n A letra digitada e %c", letra);
} while(letra!='F' && letra!='f');

printf("Programa encerrado.");

return 0;

}