#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    printf("O sucessor de %d é %d \n", valor, valor+1);
    printf("O antecessor de %d é %d", valor, valor-1);

    return 0;
}
