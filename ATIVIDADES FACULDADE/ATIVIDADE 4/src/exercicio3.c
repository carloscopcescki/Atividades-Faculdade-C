#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "pt-BR");
    printf("Exercicio 3\n--------\n");
    int i = 15;
    while (i >= 15 && i < 75)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }
}
