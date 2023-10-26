#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabora um programa que leia 10 números inteiros diferentes,
determine o maior entre eles e sua posição no vetor. */

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    int n[10], maior, i, posicao;
    printf("Exercicio 8 - Números inteiros diferentes\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%i", &n[i]);
        if (i == 0 || n[i] > maior)
        {
            maior = n[i];
            posicao = i;
        }
    }
    printf("\n\nO maior valor é %i na posição %d ", maior, posicao);
}