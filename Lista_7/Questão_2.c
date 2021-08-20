#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

struct estoque{
    int id, numeroPedido;
    char nomePeca[TAM];
    float preco;
};

int main(){

    struct estoque estoqueLoja;

    printf("Digite o identificador da peça: ");
    scanf("%d", &estoqueLoja.id);

    printf("Digite o nome da peça: ");
    scanf(" %s", &estoqueLoja.nomePeca);

    printf("Digite o preço da peça: ");
    scanf(" %f", &estoqueLoja.preco);

    printf("Digite o numero do seu pedido: ");
    scanf(" %d", &estoqueLoja.numeroPedido);

    printf("\n -=# Nota fiscal #=- \n");
    printf(" Código da peça: %d\n", estoqueLoja.id);
    printf(" Nome da peça: %s\n", estoqueLoja.nomePeca);
    printf(" Preço: %.2f\n", estoqueLoja.preco);
    printf(" Número do pedido: %d\n", estoqueLoja.numeroPedido);
    printf(" =================== \n");
    return 0;
}
