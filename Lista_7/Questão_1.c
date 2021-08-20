#include <stdio.h>
#include <stdlib.h>

struct aluno{
    float nota_1, nota_2, media;
};

int main(){

    struct aluno aluno_1;

    printf("Digite a primeira nota: ");
    scanf("%f", &aluno_1.nota_1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno_1.nota_2);

    aluno_1.media = (aluno_1.nota_1 + aluno_1.nota_2) / 2;

    printf("A média do aluno é: %.2f", aluno_1.media);
    return 0;
}
