#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    printf("Temperatura em Fahrenheit: %.2f °F", (9 * celsius + 160)/5);

    return 0;
}
