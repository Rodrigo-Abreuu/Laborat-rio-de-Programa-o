#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura;

    printf("-=# Peso ideal #=-\n");
    printf("[1] - Mulheres\n");
    printf("[2] - Homens\n");
    printf(">>");
    scanf(" %c", &sexo);
    if(sexo != '1' && sexo != '2'){
        printf("Sexo inválido\n");
        return 0;
    }
    printf("Digite a altura(m): ");
    scanf("%f", &altura);

    if(sexo == '1')
        printf("Seu peso ideal é: %.2f", 62.1 * altura - 44.7);
    else if(sexo == '2')
        printf("Seu peso ideal é: %.2f", 72.7 * altura - 58);

    return 0;
}
