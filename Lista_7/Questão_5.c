#include <stdio.h>
#include <stdlib.h>

#define TAM 10

struct professor{
    char nome[TAM];
};

struct disciplina{
    char nomeDisciplina[TAM];
    struct professor professor;
};

int main(){

    struct disciplina disciplina;

    printf("Digite o nome da disciplina: ");
    gets(disciplina.nomeDisciplina);

    printf("Digite o nome do professor da disciplina: ");
    gets(disciplina.professor.nome);

    printf("\nDisciplina: %s \nProfessor: %s", disciplina.nomeDisciplina, disciplina.professor.nome);
    return 0;
}
