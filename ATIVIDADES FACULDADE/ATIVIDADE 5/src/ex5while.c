#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, n, c, m3 = 3, m5 = 5, m7 = 7;
    printf("Exercicio 5 - While");
    printf("\n");
    i = 0;
    n = 0;
    c = 0;
    printf("M(3) = ");
    while (i <= 250)
    {
        if (i % m3 == 0)
        {
            printf("%i ", i);
        }
        i++;
    }
    printf("\n\nM(5) = ");
    while (n <= 250)
    {
        if (n % m5 == 0)
        {
            printf("%i ", n);
        }
        n++;
    }
    printf("\n\nM(7) = ");
    while (c <= 250)
    {
        if (c % m7 == 0)
        {
            printf("%i ", c);
        }
        c++;
    }
}