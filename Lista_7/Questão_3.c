#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

struct node{
    int vetor[TAM];
    int elementos;
    float media;
};

int main(){

    struct node node_1;
    node_1.elementos = TAM;
    node_1.media = 0;

    srand(time(NULL));
    int indice;

    for(indice = 0; indice < node_1.elementos; indice++){
        node_1.vetor[indice] = rand() % 100;
        node_1.media += node_1.vetor[indice];
    }

    node_1.media = node_1.media / node_1.elementos;

    printf("Número de elementos do vetor: %d\n", node_1.elementos);
    printf("Vetor: ");
    for(indice = 0; indice < node_1.elementos; indice++)
        printf("%d, ", node_1.vetor[indice]);
    printf("\nMédia: %.2f", node_1.media);

    return 0;
}
