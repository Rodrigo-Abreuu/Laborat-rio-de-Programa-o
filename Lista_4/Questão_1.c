#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int numero1, numero2, soma;
    int *p_numero1 = NULL, *p_numero2 = NULL;

    p_numero1 = &numero1;
    p_numero2 = &numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", p_numero1);
    printf("Digite o segundo número: ");
    scanf("%d", p_numero2);

    soma = *p_numero1 + *p_numero2;

    printf("Resultado: %d\n", soma);
    printf("Endereço ponteiro 1: %p\n", p_numero1);
    printf("Endereço ponteiro 2: %p", p_numero2);
    return 0;
}
