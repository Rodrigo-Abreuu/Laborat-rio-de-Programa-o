#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define TRUE 1
#define FALSE 0

void tela(char matriz[3][3]){
    printf("+---+---+---+\n");
    printf("| %c | %c | %c |\n", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("+---+---+---+\n");
    printf("| %c | %c | %c |\n", matriz[1][0], matriz[1][1], matriz[1][2]);
    printf("+---+---+---+\n");
    printf("| %c | %c | %c |\n", matriz[2][0], matriz[2][1], matriz[2][2]);
    printf("+---+---+---+\n");
    printf("Jogador X - [X]\n");
    printf("Jogador O - [O]\n");
}

void valorPadrao(char matriz[3][3]){
    int contador1, contador2, total = 0;
    for(contador1 = 0; contador1 < 3; contador1++){
        for(contador2 = 0; contador2 <3; contador2++){
            total++;
            matriz[contador1][contador2] = total + '0'; }
    }
}

int atribuirValor(char matriz[3][3], char valor, char jogador){
    int contador1, contador2, contador3 = 0, apoio = valor-'0';
    for(contador1 = 0; contador1 < 3; contador1++){
        for(contador2 = 0; contador2 <3; contador2++){
            contador3++;
            if(apoio == contador3){
                if(matriz[contador1][contador2] == 'X' || matriz[contador1][contador2] == 'O'){
                    printf("Local já jogado\n");
                    return FALSE;
                }else{
                    matriz[contador1][contador2] = jogador;
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

int analise(char matriz[3][3],char jogador){
    if((matriz[0][0] == matriz[0][1]) && (matriz[0][1] == matriz[0][2])){ //Linha 1
        if(matriz[0][0] == jogador)
            return TRUE; }

    if((matriz[1][0] == matriz[1][1]) && (matriz[1][1] == matriz[1][2])){ //Linha 2
        if(matriz[1][0] == jogador)
            return TRUE; }

    if((matriz[2][0] == matriz[2][1]) && (matriz[2][1] == matriz[2][2])){ //Linha 3
        if(matriz[2][0] == jogador)
            return TRUE; }

    if((matriz[0][0] == matriz[1][0]) &&(matriz[1][0] == matriz[2][0])){ // Coluna 1
        if(matriz[0][0] == jogador)
            return TRUE; }

    if((matriz[0][1] == matriz[1][1]) &&(matriz[1][1] == matriz[2][1])){ // Coluna 2
        if(matriz[1][1] == jogador)
            return TRUE; }

    if((matriz[0][2] == matriz[1][2]) &&(matriz[1][2] == matriz[2][2])){ // Coluna 3
        if(matriz[2][2] == jogador)
            return TRUE; }

    if((matriz[0][0] == matriz[1][1]) && (matriz[1][1] == matriz[2][2])){ //Linha Diagonal Principal
        if(matriz[0][0] == jogador)
            return TRUE; }

    if((matriz[0][2] == matriz[1][1]) && (matriz[1][1] == matriz[2][0])){ //Linha Diagonal Secundária
        if(matriz[1][1] == jogador)
            return TRUE; }

    return FALSE;
}

int main(){
    char tabuleiro[3][3], apoio;
    short int vitoriaX = FALSE, vitoriaO = FALSE;
    short int rodadaX = FALSE, rodadaO = FALSE;
    short int contadorEmpate = 0, jogoBoolean = TRUE;
    valorPadrao(tabuleiro);
    do{
        rodadaX = TRUE;
        while(rodadaX){
            tela(tabuleiro);
            printf("[X] Selecione um lugar para jogar: ");
            scanf(" %c", &apoio);
            system("cls");
            if(atribuirValor(tabuleiro, apoio, 'X'))
                rodadaX = FALSE;
        }
        if(analise(tabuleiro, 'X')){
            vitoriaX = TRUE;
            jogoBoolean = FALSE;
            continue; }
        contadorEmpate++;

        if(contadorEmpate == 9){
            jogoBoolean = FALSE;
            continue;
        }

        rodadaO = TRUE;
        while(rodadaO){
            tela(tabuleiro);
            printf("[O] Selecione um lugar para jogar: ");
            scanf(" %c", &apoio);
            system("cls");
            if(atribuirValor(tabuleiro, apoio, 'O'))
                rodadaO = FALSE;
        }
        if(analise(tabuleiro, 'O')){
            vitoriaO = TRUE;
            jogoBoolean = FALSE;
            continue; }
        contadorEmpate++;
    }while(jogoBoolean);
    system("cls");
    if(vitoriaO){
        printf("-=# Jogador O ganhou! #=-");
    }else if(vitoriaX){
        printf("-=# Jogador X ganhou! #=-");
    }else if(contadorEmpate == 9)
        printf("-=# Empate #=-"); 
    usleep(5000000);
    return 0;
}
