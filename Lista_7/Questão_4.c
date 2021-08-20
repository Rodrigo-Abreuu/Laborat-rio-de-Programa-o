#include <stdio.h>
#include <stdlib.h>

#define TAM 3

struct aluno{
    float nota_1, nota_2, media;
};

void media(struct aluno *aluno_1);

int main(){

    struct aluno alunoArray[TAM];
    int indice;

    for(indice = 0; indice < TAM; indice++){
        printf("Aluno %d\n", indice + 1);

        printf("Digite a primeira nota: ");
        scanf("%f", &alunoArray[indice].nota_1);

        printf("Digite a segunda nota: ");
        scanf("%f", &alunoArray[indice].nota_2);

        media(&alunoArray[indice]);
    }

    for(indice = 0; indice < TAM; indice++)
        printf("Aluno %d \nNota 1: %.1f \nNota 2: %.1f \nMédia: %.1f \n",
               indice + 1, alunoArray[indice].nota_1, alunoArray[indice].nota_2, alunoArray[indice].media);

    return 0;
}

void media(struct aluno *aluno_1){
    aluno_1->media = (aluno_1->nota_1 + aluno_1->nota_2) / 2;
}
