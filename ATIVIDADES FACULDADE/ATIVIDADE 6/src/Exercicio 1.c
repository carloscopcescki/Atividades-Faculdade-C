#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que primeiro leia a altura de 5 atletas e
armazene em um vetor. Após imprima o conteúdo armazenado */

void main(void)
{
    setlocale(LC_ALL, "pt_BR");
    float a[5], valoraltura;
    int i;
    printf("Altura\n\n");

    // Carrega o valor da altura para cada posição do vetor

    for (i = 0; i < 5; i++)
    {
        printf("Digite a altura do %dº atleta: ", i);
        scanf("%f", &valoraltura);
        a[i] = valoraltura;
    }

    // Mostra a altura de cada posição

    printf("\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nAltura do %dº atleta: %1.2f ", i, a[i]);
    }
    printf("\n");
}