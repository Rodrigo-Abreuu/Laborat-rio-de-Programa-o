#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ordem de precedência: \n");
    printf("1°- ( )\n");
    printf("2°- * / %%\n");
    printf("3°- + -\n");
    printf("\n");

    printf("Exemplos: \n");

    printf("7 + 3*6/2 - 1 = ");
    printf("%.i\n", 7 + 3*6/2 - 1);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("2%%2 + 2*2 - 2/2 = ");
    printf("%.i\n", 2%2 + 2*2 - 2/2);
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("3*9 * (3 + (9*3 / (3)))) = ");
    printf("%.i\n", (3*9 * (3 + (9*3 / (3)))));
    return 0;
}
