#include<stdio.h>

int main(){
    float base_maior, base_menor, altura, area;
    
    printf("Informe a base maior: ");
    scanf("%f", &base_maior);
    
    printf("Informe a base menor: ");
    scanf("%f", &base_menor);
    
    printf("Informe a altura: ");
    scanf("%f", &altura);
    
    area = ((base_maior + base_menor) * altura) / 2;
    
    printf("A area do trapezio e: %.2f\n", area);
    
    return 0;
}