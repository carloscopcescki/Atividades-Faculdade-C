#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa em C que armazene e imprima os 10 primeiros
números pares, impares e a soma em cada posição.*/

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    int par[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int impar[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int soma[10];

    printf("Exercicio 5 - Soma de Par e Impar\n\n");

    for (int i = 0; i < 10; i++)
    {
        soma[i] = par[i] + impar[i];
    }

    // Imprima os valores par,impar e soma de cada posição de forma intercalada

    for (int i = 0; i < 10; i++)
    {
        printf("PAR[%d] = %d\n", i, par[i]);
        printf("IMPAR[%d] = %d\n", i, impar[i]);
        printf("SOMA[%d] = %d\n\n", i, soma[i]);
    }

    return 0;
}
