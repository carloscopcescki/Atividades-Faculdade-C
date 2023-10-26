#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, a;
    printf("Exercicio 6 - For\n\n");
    i = 1;
    a = 1;
    while (i < 10)
    {
        a = 1;
        while (a <= i)
        {
            printf("*");
            a++;
        }
        printf("\n");
        i++;
    }
}