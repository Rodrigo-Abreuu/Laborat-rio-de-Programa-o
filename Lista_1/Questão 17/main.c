#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Digite um n�mero: ");
    scanf("%d", &valor);

    printf("|%d| = %u ", valor, valor<0 ? -valor : valor);
    return 0;
}
