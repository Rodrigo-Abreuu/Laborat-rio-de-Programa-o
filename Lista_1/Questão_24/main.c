#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, n;
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &x);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &n);

    printf("%d", n==0 ? x*1 : x*(2<<(n-1)));

    return 0;
}
