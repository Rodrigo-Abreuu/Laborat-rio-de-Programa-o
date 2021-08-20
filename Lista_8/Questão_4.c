#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct node{
    int x, y;
    float z;
    struct node *prox;
} Node;

void media(Node *p);

int main(){

    Node estrutura[TAM], *p = NULL;
    int indice;

    for(indice = 0; indice < TAM; indice++){
        p = &estrutura[indice];

        printf("Node %d \n", indice + 1);
        printf("Digite um número: ");
        scanf("%d", &p->x);

        printf("Digite um número: ");
        scanf("%d", &p->y);

        media(p);

        if(indice != TAM -1)
            p->prox = &estrutura[indice + 1];
        else
            p->prox = &estrutura[0];
    }

    for(indice = 0; indice < TAM; indice++){
        p = &estrutura[indice];
        printf("\nNode %d", indice + 1);
        printf("\nMédia: %.2f, Média prox: %.2f", p->z, p->prox->z);
    }

    return 0;
}

void media(Node *p){
    p->z = (float) (p->x + p->y) / 2;
}
