#include<stdio.h>
int main(){
    float horas, faltas, H;
    printf("informe o numero de horas extras: ");
    scanf("%f", &horas);
    printf("informe o numero de horas que o funcionario faltou: ");
    scanf("%f", &faltas);
    H=horas-(2/3*(faltas));

    if(H<600)
    {
        printf("o premio e de 100 reais");    
    }
    else if(H<1.200)
    { 
        printf("o premio e de 200 reais");
    }
    else if(H<1.800)
    {
        printf("o premio e de 300 reais");
    }
    else if(H<2.400)
    {
        printf("o premio e de 400 reais");
    }
    else
    {
        printf("o premio e de 500 reais");
    }

}