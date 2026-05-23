#include<stdio.h>
#include<math.h>
int main(){
    int raio, area;
    printf("Informe o raio: ");
    scanf("%i", &raio);

    area=M_PI * pow(raio,2);
    printf("a area do circulo e %i\n", area);
    return 0;
}