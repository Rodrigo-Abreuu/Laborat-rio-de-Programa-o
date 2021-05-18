#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int hora, minuto, segundo;

    printf("Digite a quantidade de horas: ");
    scanf(" %hd", &hora);
    printf("Digite a quantidade de minutos: ");
    scanf(" %hd", &minuto);
    printf("Digite a quantidade de segundos: ");
    scanf(" %hd", &segundo);

    printf("São %d segundos", (hora*3600)+(minuto*60)+segundo);

    return 0;
}
