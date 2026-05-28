// Elabore um algoritmo que leia vários números, e imprima o maior, menor e a média aritmética dos números. 
// Considere que o número zero (0) finaliza a entrada de dados e não faz parte da seqüência.

#include<stdio.h>
int main() {

    float num, maior, menor, media;
    int soma=0, cont=0;
    int ref=1;

   do
    {
        printf("Digite um numero (0 encerra): ");
        scanf("%f",&num);

        if(num!=0) 
        {
            cont++;
            soma=soma+num;
            
            if(ref==1) 
            {
                maior=num;
                menor=num;
                ref=0;
            }
            
            else {

            if(num>maior)
            {
                maior=num;
            }

            if(num<menor)
            {
                menor=num;
            }

        }

        }
        } while(num!=0);

    printf("O maior numero e: %f", maior);
    printf("O menor numero e: %f", menor);
    printf("A media e: %f", soma/cont);
}