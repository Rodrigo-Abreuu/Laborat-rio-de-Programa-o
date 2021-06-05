#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

int main()
{
    char palavra1[TAM], palavra2[TAM];

    printf("Digite a primeira palavra: ");
    gets(palavra1);
    printf("Digite a segunda palavra: ");
    gets(palavra2);

    if(strcmp(palavra1, palavra2) == 0)
        printf("As strings '%s', '%s', são iguais", palavra1, palavra2);
    else
        printf("As strings '%s', '%s', são diferentes",palavra1, palavra2);

    return 0;
}
