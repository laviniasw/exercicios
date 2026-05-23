#include<stdio.h>
int main()
{
    float num1, num2, media;
   printf("informe um número: ");
    scanf("%f", &num1);
    printf("informe outro número:");
    scanf("%f", &num2);
    media=(num1*2+num2*3)/5;
    printf("a média é: %.2f", media);
}
