#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que inicialize um vetor de 5 posições
com zero e após imprima o conteúdo armazenado */

void main()
{
    int v[5];
    printf("Exercicio 2 - Vetor valor 0");
    for (int i = 0; i < 5; i++)
    {
        v[i] = 0;
        printf("\n\nNúmeros [%d] = %i ", i, v[i]);
    }
    printf("\n");
    return 0;
}
