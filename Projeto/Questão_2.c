#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

typedef struct node{
    int *vetor;
    int tamanhoVetor;
    int maiorValor;
} Node;

void maiorValor(Node *p){
    int indice, maiorValor;
    printf("\n%d", p->vetor[0]);
    for(indice = 0; indice < p->tamanhoVetor; indice++){
        printf("%d", p->vetor[indice]);
        if(indice ==0)
            maiorValor = p->vetor[indice];
        if(p->vetor[indice] > maiorValor)
           maiorValor = p->vetor[indice];
    }

    p->maiorValor = maiorValor;
}

int main(){
    Node node;
    srand(time(NULL));
    int *vetor, indice;
    node.tamanhoVetor = TAM;
    vetor = (int *) malloc(TAM * sizeof(int));

    for(indice = 0; indice < TAM; indice++){
        vetor[indice] = rand() % 100;
        printf("%d ", vetor[indice]);
    }

    maiorValor(&node);

    printf("\nMaior valor: %d", node.maiorValor);
    return 0;
}
