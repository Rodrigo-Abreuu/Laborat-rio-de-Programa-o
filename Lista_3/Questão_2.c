#include <stdio.h>
#include <stdlib.h>

#define TAM 15

int main()
{
    float vetor[TAM], maiorValor = 0, menorValor = 99999999999;
    int indice;

    for(indice = 0; indice < TAM; indice++){
        printf("Digite o %d° número do vetor: ", indice + 1);
        scanf("%f", &vetor[indice]);
        if(vetor[indice] > maiorValor)
            maiorValor = vetor[indice];
        if(vetor[indice] < menorValor)
            menorValor = vetor[indice];
    }

    printf("Maior valor: %.2f\n", maiorValor);
    printf("Menor valor: %.2f", menorValor);

    return 0;
}
