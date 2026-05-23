#include<stdio.h>
int main()
{
    float celsius, farenheit;
    printf("informe a temperatura em celsius: ");
    scanf("%f", &celsius);
    farenheit=1.8*celsius+32;
    printf("a temperatura em farenheit é: %.2f\n", farenheit);
    return 0;
}
