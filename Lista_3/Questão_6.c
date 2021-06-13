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

    printf("%s", strcat(palavra1, palavra2));
    return 0;
}
