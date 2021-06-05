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

    if(strlen(palavra1) != strlen(palavra2))
        printf("As strings '%s', '%s', são diferentes",palavra1, palavra2);
    else{
        int indice;
        for(indice = 0; indice < strlen(palavra1); indice++){
            if(palavra1[indice] != palavra2[indice]){
                printf("As strings '%s', '%s', são diferentes",palavra1, palavra2);
                break;
            }else if(indice == (strlen(palavra1) - 1)){
                printf("As strings '%s', '%s', são iguais", palavra1, palavra2);
            }
        }
    }
    return 0;
}
