#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valor1, valor2, valor3;

    printf("Digite o primeiro número: ");
    scanf("%f", &valor1);
    printf("Digite o segunda número: ");
    scanf("%f", &valor2);
    printf("Digite o terceiro número: ");
    scanf("%f", &valor3);

    float soma = valor1 + valor2 + valor3;

    printf("Média aritmética: %.2f\n", (float) soma/3 );
    printf("Média geometrica: %.3f", (float) pow(soma,(0.3333)));
    return 0;
}
