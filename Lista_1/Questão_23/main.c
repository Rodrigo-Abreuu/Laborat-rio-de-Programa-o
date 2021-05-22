#include <stdio.h>
#include <stdlib.h>

int main()
{
    char valor1, valor2, valor3;

    printf("Digite um numero: ");
    scanf("%c%c%c", &valor1, &valor2, &valor3);
    printf("%c%c%c", valor3, valor2, valor1);

    return 0;
}
