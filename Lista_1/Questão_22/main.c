#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Representação de alguns caracteres em int:\n");
    printf("'%c' = %d |", 'A', 'A');
    printf(" '%c' = %d |", 'B', 'B');
    printf(" '%c' = %d \n", 'C', 'C');
    printf("'%c' = %d |", 'a', 'a');
    printf(" '%c' = %d |", 'b', 'b');
    printf(" '%c' = %d \n", 'c', 'c');
    printf("'%c' = %d |", '0', '0');
    printf(" '%c' = %d |", '1', '1');
    printf(" '%c' = %d \n", '2', '2');
    printf("'%c' = %d |", '$', '$');
    printf(" '%c' = %d |", '*', '*');
    printf(" '%c' = %d \n", '+', '+');
    printf("'%c' = %d |", '/', '/');
    printf(" '%c' = %d |\n", ' ', ' ');
    return 0;
}
