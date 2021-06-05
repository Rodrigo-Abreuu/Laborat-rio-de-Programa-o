#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{
    char string[TAM];
    int indice = 0;

    printf("Digite uma palavra: ");
    gets(string);
    while(1){
        if(string[indice] == '\0'){
            printf("A string '%s' tem %d caracteres", string, indice);
            break;
        }
    indice++;
    }
    return 0;
}