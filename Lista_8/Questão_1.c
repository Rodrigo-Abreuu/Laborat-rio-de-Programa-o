#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x, y;
} Node;

int main(){

    Node estrutura, *p = &estrutura;

    printf("Digite um número: ");
    scanf("%d", &p->x);

    printf("Digite um número: ");
    scanf("%d", &p->y);

    printf("\nX: %d \nY: %d", p->x, p->y);
    return 0;
}
