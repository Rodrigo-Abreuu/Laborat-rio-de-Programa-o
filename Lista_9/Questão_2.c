#include <stdio.h>
#include <stdlib.h>

static int indice = 1;

void cadastrarFerramenta(char [], int, float);

void lerFerramentas();

int main(){

    FILE *arquivo;
    arquivo = fopen("hardware.dat", "w");
    fclose(arquivo);


    while(1){
        int apoio = 0;
        char nome[30] = "";
        int quantidade = 0;
        float custo = 0.0f;
        printf("-Lista de materiais\n");
        printf("  -=# Menu #=-\n");
        printf("[1] - Adicionar material\n");
        printf("[2] - Listar materiais\n");
        printf("[3] - Sair\n>>");
        scanf("%d", &apoio);
        getchar();

        switch(apoio){
            case 1:
            printf("Digite o nome da ferramenta: ");
            gets(nome);
            printf("Digite a quantidade da ferramenta: ");
            scanf(" %d", &quantidade);
            printf("Digite o valor da ferramenta: ");
            scanf("%f", &custo);

            cadastrarFerramenta(nome, quantidade, custo);
            break;

            case 2:
            lerFerramentas();
            break;

            case 3:
            exit(0);
            break;
        }
    }
    return 0;
}

void cadastrarFerramenta(char nome[], int quantidade, float custo){
    FILE *arquivo;
    arquivo = fopen("hardware.dat", "a");
    fprintf(arquivo, "#%d - %s - %d - %.2f \n", indice, nome, quantidade, custo);
    indice++;
    fclose(arquivo);
}

void lerFerramentas(){
    FILE *arquivo;
    arquivo = fopen("hardware.dat", "r");
    char linha[100];

    while(fgets(linha, 100, arquivo) != NULL)
        printf("%s", linha);

    fclose(arquivo);
}
