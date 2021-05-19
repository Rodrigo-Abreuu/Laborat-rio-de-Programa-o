#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horaAula, inss;
    int horaTrabalhada;

    printf("Digite o valor da hora aula: ");
    scanf("%f", &horaAula);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &horaTrabalhada);
    printf("Digite a porcentagem de desconto do INSS: ");
    scanf("%f", &inss);

    printf("Salário bruto: %.2f \n", horaAula*horaTrabalhada);
    printf("Salário liquido: %.2f", ((horaAula*horaTrabalhada)*(100-inss))/100);
    return 0;
}
