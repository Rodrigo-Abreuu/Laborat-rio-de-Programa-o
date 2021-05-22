#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2;

    printf("Digite as cordenadas do ponto A \nXa: ");
    scanf("%d", &x1);
    printf("Ya: ");
    scanf("%d", &y1);
    printf("Digite as cordenadas do ponto B \nXb: ");
    scanf("%d", &x2);
    printf("Yb: ");
    scanf("%d", &y2);

    printf("A (%d,%d) |", x1, y1);
    printf(" B (%d,%d)\n", x2, y2);
    printf("distância entre os pontos: %.2f", sqrt( pow((x2 - x1),2) + pow((y2 - y1),2)));
    return 0;
}
