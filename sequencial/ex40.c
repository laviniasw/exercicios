#include<stdio.h>
#include<math.h>
int main(){
    float raio, area, comprimento, volume;
    printf("Informe o raio: ");
    scanf("%f", &raio);

    comprimento=2 * M_PI * raio;
    area=M_PI * pow(raio,2);
    volume= 4/3 * M_PI * pow(raio,3);
    printf("a area do circulo e %f\n o volume e: %f \n o comprimento e: %f\n", area, volume, comprimento);
    return 0;
}