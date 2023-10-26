#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, a;
    printf("Exercicio 6 - For\n\n");
    for (i = 1; i < 10; i++)
    {
        for (a = 1; a <= i; a++)
        {
            printf("*");
        }
        printf("\n");
    }
}