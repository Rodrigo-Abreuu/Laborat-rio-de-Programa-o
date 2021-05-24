#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dia;
    dia = 'a';

    while(dia == 'a'){
        printf("Digite o numero do dia da semana: ");
        scanf(" %c", &dia);

        switch(dia){
            case('1'):{
                printf("Domingo\n");
                 dia = 'a';
                 break;}

            case('2'):{
                printf("Segunda\n");
                 dia = 'a';
                 break;}

            case('3'):{
                printf("Terça\n");
                dia = 'a';
                break;}

            case('4'):{
                printf("Quarta\n");
                dia = 'a';
                break;}

            case('5'):{
                printf("Quinta\n");
                dia = 'a';
                break;}

            case('6'):{
                printf("Sexta\n");
                dia = 'a';
                break;}

            case('7'):{
                printf("Sábado\n");
                dia = 'a';
                break;}

            case('0'):{ break;}

            default:{ printf("Número de dia não válido\n"); dia = 'a';}
        }
    }
    return 0;
}
