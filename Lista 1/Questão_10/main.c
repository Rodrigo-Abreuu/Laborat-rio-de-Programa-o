#include <stdio.h>
#include <stdlib.h>

int main()
{
    double altura, comprimento, largura;
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    printf("Digite o valor do comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite o valor do largura: ");
    scanf("%f", &largura);
    printf ("O volume é %.2f", comprimento*largura*altura);
    return 0;
}
