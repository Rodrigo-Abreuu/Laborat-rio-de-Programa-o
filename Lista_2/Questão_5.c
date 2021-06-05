
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 1, maiorValor;

    while(valor != 0){
    	printf("Maior valor digitado: %d\n", maiorValor);
    	printf("Digite um número: ");
    	scanf("%d", &valor);
    	printf("\n");
    	if(valor > maiorValor)
    		maiorValor = valor;
    }
    return 0;
}
