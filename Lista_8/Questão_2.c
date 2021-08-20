#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x, y;
    float z;
} Node;

void media(Node *p);

int main(){

    Node estrutura, *p = &estrutura;

    printf("Digite um número: ");
    scanf("%d", &p->x);

    printf("Digite um número: ");
    scanf("%d", &p->y);

    media(p);

    printf("\nX: %d \nY: %d \nZ: %.2f", p->x, p->y, p->z);
    return 0;
}

void media(Node *p){
    p->z = (float) (p->x + p->y) / 2;
}
