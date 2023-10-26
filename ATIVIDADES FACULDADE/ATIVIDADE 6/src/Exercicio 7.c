#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia 10 inteiros e armazene em um
vetor após imprima a quantidade de números maiores que 5 */

int main(void)
{
    setlocale(LC_ALL, "pt_BR");

    int n[10];
    int cont = 0;

    printf("Exercicio 7 - Números inteiros maiores que 5\n\n");

    // Armazenar os números inteiros no vetor

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
    }

    // Imprimir na tela os números inteiros

    for (int i = 0; i < 10; i++)
    {
        if (n[i] > 5)
        {
            cont++;
        }
    }

    printf("\nA quantidade de números maiores que 5 é: %d", cont);
}