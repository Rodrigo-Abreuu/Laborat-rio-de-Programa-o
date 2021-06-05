#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{
    char string[TAM], caractere;
    int indice;

    printf("Digite uma palavra: ");
    gets(string);

    printf("Digite o caractere para procurar: ");
    scanf(" %c", &caractere);

    for(indice = 0; indice < TAM; indice++){
        if(caractere == string[indice]){
            printf("O caractere está na string");
            break;
        }else if( indice == (TAM - 1)){
            printf("Não este caractere não está na string");
        }
    }
    return 0;
}
