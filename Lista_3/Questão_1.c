#include <stdio.h>
#include <stdlib.h>

#define TAM 15

int main()
{
    int vetor[TAM], indice, somatorio = 0;

    for(indice = 0; indice < TAM; indice++){
        printf("Digite o %d° número do vetor: ", indice + 1);
        scanf("%d", &vetor[indice]);
        somatorio += vetor[indice];
    }

    printf("O somatório do vetor é %d", somatorio);

    return 0;
}
