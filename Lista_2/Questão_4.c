
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int jose = 150, pedro = 110, contador = 0;

    while(jose >= pedro){
        jose += 2;
        pedro += 3;
        contador++;
    }

    printf("em %d anos, pedro será maior que jose", contador);

    return 0;
}
