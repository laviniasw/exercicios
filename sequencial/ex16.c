#include<stdio.h>
int main()
{
    float d1, d2, area, potencia;
    printf("informe a primeira dimensao do comodo em metros: ");
    scanf("%f", &d1);
    printf("informe a segunda dimensao do comodo em metros: ");
    scanf("%f", &d2);
    area=d1*d2;
    potencia=area*18;
    printf("a potencia de iluminacao que devera ser utilizada e: \n %.2f", potencia);
    return 0;
}