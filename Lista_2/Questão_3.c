#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int f;
    printf("Digite o número: ");
    scanf("%d", &f);

    int contador;
    for(contador = f - 1; contador > 0; contador--)
        f *= contador;

    printf("O fatorial é %d", f);
    return 0;
}
