#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dolar, valor;

    printf("Digite a cotação do dolar: ");
    scanf("%f", &dolar);
    printf("Digite o valor em reais: ");
    scanf("%f", &valor);

    printf("%.2f reais é equivalente %.2f dolares", valor, valor/dolar);

    return 0;
}
