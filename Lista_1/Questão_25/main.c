#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d horas, %d minutos e %d segundos", (int) horas, (int) minutos, (int) segundos);

    return 0;
}
