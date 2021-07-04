#include <stdio.h>
#include <stdlib.h>

int confirmacao();

int main(){

    int boolean = 1;
    int votos5 = 0, votos7 = 0, votos0 = 0, votosNulos = 0;
    int apoio;

    do{
        printf("5 - Paulo / 7 - Renata\n");
        printf("Digite em quem deseja votar: ");
        scanf(" %d", &apoio);

        if(apoio < 0){
            boolean = 0;
            break;
        }

        switch(apoio){
            case 5:
                if(confirmacao()){
                    votos5 += 1;
                    break;
                }else
                    break;
            case 7:
                if(confirmacao()){
                    votos7 += 1;
                    break;
                }else
                    break;
            case 0:
                if(confirmacao()){
                    votos0 += 1;
                    break;
                }else
                    break;
            default:
                if(confirmacao()){
                    votosNulos += 1;
                    break;
                }else
                    break;
        }
        printf("\n");
    }while(boolean);

    printf("\n -=# Resultado #=- \n");
    printf("Paulo: %d votos\n", votos5);
    printf("Renata: %d votos\n", votos7);
    printf("Votos brancos: %d\n", votos0);
    printf("Votos nulos: %d\n", votosNulos);
    return 0;
}

int confirmacao(){
    char boolean = 'n';
    printf("Você tem certeza?\nDigite 'S' para confirmar\n>>");
    scanf(" %c", &boolean);
    if(boolean == 'S' || boolean == 's')
        return 1;
    else
        return 0;
}
