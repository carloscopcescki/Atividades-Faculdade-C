#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que armazene em uma matriz
irmãos [2][6] = {"João", "Maria"}.
Após, imprima o valor da matriz*/

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    char irmaos[2][6] = {"João", "Maria"};
    int i;
    printf("Exercício 3 - Irmãos");
    for (i = 0; i < 2; i++)
    {
        printf("\nNome do %dº irmão é: %s ", i, irmaos[i]);
    }
    return 0;
}