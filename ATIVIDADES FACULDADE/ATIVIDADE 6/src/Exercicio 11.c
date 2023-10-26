#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que carregue em uma matriz
v[5][2]={{6.0, 9.0}, {8.0, 5.5}, {7.0, 7.0}, {3.5, 10.0}
{7.0, 8.5}}*/

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    float v[2][5] = {{6.0, 9.0}, {8.0, 5.5}, {7.0, 7.0}, {3.5, 10.0}, {7.0, 8.5}};
    int i, j;
    printf("Exercicio 11 - Matriz\n\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("v[%d,%d] = [%.1f]\n", i, j, v[i][j]);
        }
    }
}