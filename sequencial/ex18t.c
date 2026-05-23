#include<stdio.h>

int main()
{
    char nome[50], endereco[30], cidade[15], grau_escolaridade[20], UF[15], curso[15];
    char RG[20], CPF[20], data_nascimento[20], CEP[20], telefone[20];

    printf("Insira o seu nome:\n");
    fgets(nome, 50, stdin);

    printf("Insira o seu endereco:\n");
    fgets(endereco, 30, stdin);

    printf("Insira a sua cidade:\n");
    fgets(cidade, 15, stdin);

    printf("Insira a sua UF:\n");
    fgets(UF, 15, stdin);

    printf("Insira o seu CEP:\n");
    fgets(CEP, 20, stdin);

    printf("Insira o seu telefone:\n");
    fgets(telefone, 20, stdin);

    printf("Insira o seu CPF:\n");
    fgets(CPF, 20, stdin);

    printf("Insira o seu RG:\n");
    fgets(RG, 20, stdin);

    printf("Insira sua data de nascimento:\n");
    fgets(data_nascimento, 20, stdin);

    printf("Insira seu grau de escolaridade:\n");
    fgets(grau_escolaridade, 20, stdin);

    printf("Insira seu curso:\n");
    fgets(curso, 15, stdin);

    printf("\n--- Dados ---\n");
    printf("Nome: %s", nome);
    printf("Endereco: %s", endereco);
    printf("Cidade: %s", cidade);
    printf("UF: %s", UF);
    printf("CEP: %s", CEP);
    printf("Telefone: %s", telefone);
    printf("CPF: %s", CPF);
    printf("RG: %s", RG);
    printf("Data de nascimento: %s", data_nascimento);
    printf("Escolaridade: %s", grau_escolaridade);
    printf("Curso: %s", curso);

    return 0;
}