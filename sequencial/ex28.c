#include<stdio.h>
int main(){
    float nota1, nota2, nota3, media, resultado, somap;
    printf("insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("insira a terceira nota: ");
    scanf("%f", &nota3);

    resultado=(nota1*2)+(nota2*3)+(nota3*5);
    somap=2+3+5;
    media=resultado/somap;
    printf("a media aritmetica entre as notas e:%f", media);
}