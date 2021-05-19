#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    numero%2==0 ? printf("%d é par", numero) : printf("%d é impar", numero);

    return 0;
}
