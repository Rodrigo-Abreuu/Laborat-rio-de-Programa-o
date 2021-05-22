#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, apoio;

    printf("Digite o primeiro número: ");
    scanf("%d", &A);
    printf("Digite o segundo número: ");
    scanf("%d", &B);

    printf("1° momento");
    printf("\nA: %d | B: %d", A, B);

    apoio = A;
    A = B;
    B = apoio;

    printf("\n2° momento");
    printf("\nA: %d | B: %d", A, B);

    return 0;
}
