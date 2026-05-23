#include<stdio.h>
int main(){
    float n1, n2, n3, n4;
    printf("informe o primeiro numero: \n");
    scanf("%f", &n1);
    printf("informe o segundo numero: \n");
    scanf("%f", &n2);
    printf("informe o terceiro numero: \n");
    scanf("%f", &n3);
    printf("informe o quarto numero: \n");
    scanf("%f", &n4);

    // ordem decrescente: probabilidades
    if (n4>n3) {
        printf("%.2f %.2f %.2f %.2f", n4, n3, n2, n1);
    } else if (n4>=n2) {
        printf("%.2f %.2f %.2f %.2f", n3, n4, n2, n1);
    } else if (n4>=n1) {
        printf("%.2f %.2f %.2f %.2f", n3, n2, n4, n1);
    } else {
        printf("%.2f %.2f %.2f %.2f", n3, n2, n1, n4);
    }
}