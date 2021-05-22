#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, n;
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &n);

    printf("%d", n==0 ? x*1 : x*(2<<(n-1)));

    return 0;
}
