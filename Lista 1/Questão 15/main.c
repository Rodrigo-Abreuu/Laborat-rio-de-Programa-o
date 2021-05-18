#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int diasTrabalhados;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%u", &diasTrabalhados);

    float salario = ((diasTrabalhados* 50.25)* 9)/ 10;

    if(diasTrabalhados <= 10){
        printf("Valor final: %.2f", salario);
    }else if(diasTrabalhados > 10 && diasTrabalhados <= 20){
        printf("Valor final: %.2f", (salario*12)/10);
    }else if(diasTrabalhados > 20){
        printf("Valor final: %.2f", (salario*13)/10);
    }
    return 0;
}
