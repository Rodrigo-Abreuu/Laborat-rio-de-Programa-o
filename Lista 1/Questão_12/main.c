#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &valor1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &valor2);

    printf("%d + %d = %d \n", valor1, valor2, valor1+valor2);
    printf("%d * %d = %d \n", valor1, valor2, valor1*valor2);
    printf("%d - %d = %d \n", valor1, valor2, valor1-valor2);
    printf("%d / %d = %.2f \n", valor1, valor2, (float)valor1/valor2);
    printf("%d %% %d = %d \n", valor1, valor2, valor1%valor2);

    return 0;
}
