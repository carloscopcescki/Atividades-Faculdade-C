#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que some os dois vetores, posição a posição,
 VET 1 = {10, 12, 15, 17, 19, 21, 22, 27, 0, 11} e
 VET 2 = {7, 8, 10, 1, 18, 22, 13, 7, 10, 14} e armazene
 em um terceiro vetor VET3. Após imprima os vetores de cada
 posição de forma intercalada */

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    int vet1[10] = {10, 12, 15, 17, 19, 21, 22, 27, 0, 11};
    int vet2[10] = {7, 8, 10, 1, 18, 23, 13, 7, 2, 14};
    int vet3[10] = {};

    printf("Exercicio 4 - Soma de Vetores Intercalados\n\n");

    for (int i = 0; i < 10; i++)
    {
        vet3[i] = vet1[i] + vet2[i];
    }

    // Imprima os vetores de cada posição de forma intercalada

    for (int i = 0; i < 10; i++)
    {
        printf("VET1[%d] = %d\n", i, vet1[i]);
        printf("VET2[%d] = %d\n", i, vet2[i]);
        printf("VET3[%d] = %d\n\n", i, vet3[i]);
    }

    return 0;
}
