#include<stdio.h>
int main()
{
    int idade;
    char nome[50];
    printf("insira o seu nome: \n");
    scanf(" %s[50]", &nome); 
    printf("insira a sua idade: \n");
    scanf(" %d", &idade);
    printf("Nome: %s\nIdade: %d", nome, idade);
    return 0;
}