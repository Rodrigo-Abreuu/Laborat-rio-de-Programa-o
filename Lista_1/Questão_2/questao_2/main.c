#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite o valor: ");
    scanf("%d", &x);

    printf("Hexadecimal: %#x\n", x);
    printf("Octal: %o\n", x);
    return 0;
}
