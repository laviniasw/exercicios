#include<stdio.h>
void main(){
    float nota1, nota2, nota3, media, peso1, peso2, peso3, resultado, somap;
    printf("insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("insira a terceira nota: ");
    scanf("%f", &nota3);

    printf("insira o peso da primeira nota: ");
    scanf("%f", &peso1);
    printf("insira o peso da segunda nota: ");
    scanf("%f", &peso2);
    printf("insira o peso da terceira nota: ");
    scanf("%f", &peso3);

    resultado=(nota1*peso1)+(nota2*peso2)+(nota3*peso3);
    somap=peso1+peso2+peso3;
    media=resultado/somap;
    printf("a media ponderada entre as notas e: %f", media);
}