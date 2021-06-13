#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 10

int main()
{
    char palavra[TAM];
    int indice;

    printf("Digite a primeira palavra: ");
    gets(palavra);

    for(indice = strlen(palavra); indice >= 0; indice--)
        printf("%c", palavra[indice]);
    return 0;
}
