#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    // Definição da matriz 2x2 e tribuição de valores
    int m[2][2] = {{1, 2}, {3, 4}};
    int i, j;

    // Listagem da matriz
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}