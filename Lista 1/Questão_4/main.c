#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("Triplo de %i: %i \n", x, x*3);
    printf("Quadrado de %i: %i \n", x, x*x);
    printf("Meio de %i: %.2f \n", x, (float)x/2);
    return 0;
}
