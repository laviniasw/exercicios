#include <stdio.h>
#include <conio.h>
void main()
{
char nome[30];
float media;
printf("Entre com o nome do aluno: ");
scanf(“%s”,&nome);
printf(“\nEntre com a media do aluno: ");
scanf(“%f”,&media);
if (media >= 7.0)
{
printf("\n\nO aluno %s está aprovado\n",nome);
}
else
{
printf("\n\nO aluno %s está reprovado\n",nome);
}
getch();
}