#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dolar, valor;

    printf("Digite a cota��o do dolar: ");
    scanf("%f", &dolar);
    printf("Digite o valor em reais: ");
    scanf("%f", &valor);

    printf("%.2f reais � equivalente %.2f dolares", valor, valor/dolar);

    return 0;
}
