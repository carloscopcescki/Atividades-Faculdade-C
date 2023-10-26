#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia dois vetores de 5 posições,
armazene seus valores, após imprima informando se eles são
iguais, maiores ou menores que o valor da primeira posição
do vetor. */

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    int n[5], i;
    printf("Exercicio 10 - Vetor (igual, maior ou menor)\n\n");

    // Armazenar os valores do vetor

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº valor: ", i);
        scanf("%i", &n[i]);
    }
    printf("\n");

    // Exibir valores (igual,maior ou menor)

    for (i = 1; i < 5; i++)
    {
        if (n[i] == n[0])
        {
            printf("%d igual a %d\n", n[i], n[0]);
        }
        else if (n[i] < n[0])
        {
            printf("%d menor que %d\n", n[i], n[0]);
        }
        else
        {
            printf("%d maior que %d\n", n[i], n[0]);
        }
    }
}
