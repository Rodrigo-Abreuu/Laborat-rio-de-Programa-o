#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorConta;
    printf("Digite o valor da conta do restaurante: ");
    scanf("%f", &valorConta);
    printf("Total da conta: %.2f",((110*valorConta)/100));
    return 0;
}
