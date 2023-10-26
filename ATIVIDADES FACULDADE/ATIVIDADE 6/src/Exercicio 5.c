#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia 5 números inteiros e os imprima
em ordem inversa. */

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    int n[5];
    printf("Exercicio 5 - Ordem Inversa\n\n");

    // Inserir os 5 números inteiros

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%i", &n[i]);
    }
    printf("\n\n");

    // Imprimir na ordem inversa

    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", n[i]);
    }
}