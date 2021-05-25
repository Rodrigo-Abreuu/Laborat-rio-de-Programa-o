#include <stdio.h>
#include <stdlib.h>

int fatorial(int valor){
	int contador;
    for(contador = valor - 1; contador > 0; contador--){
        valor *= contador;
    }
    return valor;
}

int main(){
    unsigned int f;
    printf("Digite o número: ");
    scanf("%d", &f);

    printf("O fatorial de %d é %d", f, fatorial(f));
    return 0;
}
