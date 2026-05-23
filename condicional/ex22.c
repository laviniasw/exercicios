#include<stdio.h>
int main(){
    int peso1, peso2;
    char nome1[40], nome2[40];
    printf("Digite o nome da primeira pessoa: ");
    scanf("%c", &nome1);
    printf("Digite o nome da segunda pessoa: ");
    scanf("%c", &nome2);
    printf("Digite o peso da primeira pessoa: ");
    scanf("%i", &peso1);
    printf("Digite o peso da segunda pessoa: ");
    scanf("%i", &peso2);

    if(peso1>peso2)
    {
        printf("A pessoa mais gorda e: %c", nome1);
    }
    else
    {
        printf("A pessoa mais gorda e: %c", nome2);
    }
}

