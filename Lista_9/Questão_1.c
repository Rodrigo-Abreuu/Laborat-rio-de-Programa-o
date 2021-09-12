#include <stdio.h>
#include <stdlib.h>

void cadastrarContato(char [], char []);

int main(){

    while(1){
        int apoio = 0;
        char nome[30] = "";
        char telefone[15] = "";
        printf("-Lista telefonica\n");
        printf("  -=# Menu #=-\n");
        printf("[1] - Adicionar contato\n");
        printf("[2] - Sair\n>>");
        scanf("%d", &apoio);
        getchar();

        switch(apoio){
            case 1:
            printf("Digite o nome do contato: ");
            gets(nome);
            printf("Digite o telefone do contato: ");
            gets(telefone);

            cadastrarContato(nome, telefone);
            break;

            case 2:
            exit(0);
            break;
        }
    }
    return 0;
}

void cadastrarContato(char nome[], char telefone[]){
    FILE *arquivo;
    arquivo = fopen("arquivo.csv", "a");
    fprintf(arquivo, "%s,%s\n", nome, telefone);
    fclose(arquivo);
}
