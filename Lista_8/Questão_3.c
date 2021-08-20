#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct node{
    int x, y;
    float z;
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
        printf("\n");

        media(p);
    }

    for(indice = 0; indice < TAM; indice++){
        p = &estrutura[indice];
        printf("\nX: %d \nY: %d \nZ: %.2f", p->x, p->y, p->z);
    }

    return 0;
}

void media(Node *p){
    p->z = (float) (p->x + p->y) / 2;
}
