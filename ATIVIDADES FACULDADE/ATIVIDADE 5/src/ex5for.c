#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, m3, m5, m7;
    printf("Exercicio 5 - For\n");
    printf("\n");
    printf("Múltiplos de 3:\n");
    printf("\n");
    for (i = 0; i <= 250; i++)
    {
        m3 = 3;
        if (i % m3 == 0)
        {
            printf("%i ", i);
        }
    }
    printf("\n\nMúltiplos de 5:\n");
    printf("\n");
    for (i = 0; i <= 250; i++)
    {
        m5 = 5;
        if (i % m5 == 0)
        {
            printf("%i ", i);
        }
    }
    printf("\n\nMúltiplos de 7:\n");
    printf("\n");
    for (i = 0; i <= 250; i++)
    {
        m7 = 7;
        if (i % m7 == 0)
        {
            printf("%i ", i);
        }
    }
    printf("\n");
}