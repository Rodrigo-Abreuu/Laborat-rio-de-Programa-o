#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    printf("O quadrado de %d é %d", valor, valor*valor);

    return 0;
}
