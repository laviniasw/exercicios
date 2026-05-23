#include<stdio.h>
int main(){
    float nota1, nota2, nota3, media;
    printf("insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("insira a terceira nota: ");
    scanf("%f", &nota3);

    media=(nota1+nota2+nota3)/3;
    printf("a media aritmetica entre as notas e:%f", media);
}