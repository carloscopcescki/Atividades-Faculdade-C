#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "pt-BR");
    printf("Exercicio 1\n--------\n");
    int i = 0;
    while (i < 10)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}