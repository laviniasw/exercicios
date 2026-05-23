#include<stdio.h>
int main()
{
    float RG, CPF, data_nascimento, CEP, telefone;
    char nome[50], endereco[30], cidade[15], grau_escolaridade[20], UF[15], curso[15];
    printf("insira o seu nome:\n");
    fgets(nome, 50, stdin);
    printf("insira o seu endereco:\n");
    fgets(endereco, 30, stdin);
    printf("insira a sua cidade ");
    fgets(cidade, 15, stdin);
    printf("insira a sua unidade federal ");
    fgets(UF, 15, stdin);
    printf("insira o seu CEP ");
    scanf("%f", &CEP);
    printf("insira o seu telefone ");
    scanf("%f", &telefone);
    printf("insira o seu CPF ");
    scanf("%f", &CPF);
    printf("insira o seu RG ");
    scanf("%f", &RG);
    printf("insira a sua data de nascimento ");
    scanf("%f", &data_nascimento);
    printf("insira o seu grau de escolaridade ");
    fgets(grau_escolaridade, 20, stdin);
    printf("insira o curso que leciona ");
    fgets(cidade, 15, stdin);
    printf("Seu nome e: %s\nSeu endereco e: %s\nSua cidade e: %s\nSua UF e: %s\nSeu CEP e: %f\nSeu telefone e: %f\nSeu CPF e: %f\nSeu RG e: %f\nSua data de nascimento e: %f\nSeu grau de escolaridade e: %f\n", RG, CPF, data_nascimento, CEP, telefone, nome, endereco, cidade, grau_escolaridade, UF, curso);

}