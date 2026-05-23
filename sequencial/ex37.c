#include<stdio.h>
int main(){
    int area, base, altura;
    printf("Informe a base: ");
    scanf("%i", &base);
    printf("Informe a altura: ");
    scanf("%i", &altura);

    area=(base*altura)/2;
    printf("a area do triangulo e %i\n", area);
    return 0;
}