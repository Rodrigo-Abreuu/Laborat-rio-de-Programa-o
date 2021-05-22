#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &valor1);
    printf("Digite o segundo numero: ");
    scanf("%d", &valor2);

    (valor1/valor2)*valor2 == valor1 ? printf("%d é multiplo de %d", valor1, valor2) : printf("Não é multiplo");

    return 0;
}
