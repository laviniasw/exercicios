#include<stdio.h>
int main()
{
    int baseMaior, baseMenor, altura, area;

    printf("informe a base maior do trapezio: ");
    scanf("%d", &baseMaior);
    printf("informe a base menor do trapezio: ");
    scanf("%d", &baseMenor);
    printf("informe a altura do trapezio: ");
    scanf("%d", &altura);
    area=((baseMaior+baseMenor)*altura)/2;
    printf("a area do trapezio e: %d", area);
    return 0;
}