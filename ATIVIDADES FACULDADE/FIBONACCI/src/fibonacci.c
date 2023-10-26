#include <stdio.h>
#include <stdlib.h>

// Sequência de Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21...

void main()
{
    int i, n, t1 = 0, t2 = 1, s;
    printf("Digite o número de séries: ");

    scanf("%i", &n);

    printf("\n\nSérie de Fibonacci:\n\n");

    for (i = 1; i <= n; i++)
    {
        printf("%i , ", t1);
        s = t1 + t2;
        t1 = t2;
        t2 = s;
    }
    return 0;
}
