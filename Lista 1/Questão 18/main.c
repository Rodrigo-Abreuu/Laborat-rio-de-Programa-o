#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    printf("Di�metro: \n");
    printf("2 * %.2f = %.2f", raio, 2 * raio);
    printf("\nCircunfer�ncia: \n");
    printf("2 * pi * %.2f = %.2f", raio, 2 * raio * 3.14159);
    printf("\n�rea: \n");
    printf("pi * %.2f^2 = %.2f", raio, 3.14159*(raio*raio));

    return 0;
}
