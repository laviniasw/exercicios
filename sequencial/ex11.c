#include<stdio.h>
int main()
{
    int area, diagonalMaior, diagonalMenor;
    printf("informe a diagnoal maior do losango: ");
    scanf("%d", &diagonalMaior);
    printf("informe a diagnoal menor do losango: ");
    scanf("%d", &diagonalMenor);
    area=(diagonalMaior*diagonalMenor)/2;
    printf("a area do losango e: %d", area);
    return 0;
}