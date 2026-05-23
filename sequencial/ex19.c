#include<stdio.h>
int main()
{
    char nome[20], descricao[20];
    float freq, media, nota1, nota2;

    printf("Nome da disciplina:\n");
    fgets(nome, 20, stdin);

    printf("Descricao da disciplina:\n");
    fgets(descricao, 20, stdin);

    printf("Frequencia:\n");
    scanf("%f", &freq);

    printf("Informe a sua primeira nota:\n");
    scanf("%f", &media);
    printf("Informe a sua segunda nota:\n");
    scanf("%f", &media);  
    media=nota1+nota2/2;  

    printf("A sua media é: %f\n", media);
}