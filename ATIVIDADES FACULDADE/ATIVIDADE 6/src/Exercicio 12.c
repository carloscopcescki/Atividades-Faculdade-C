#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia
 3 notas de alunos, calcule a média
de cada aluno, e informe as 3 notas, qual a média, se a nota do
aluno estiver igual ou maior que 5 estará aprovado, caso contrário,
em recuperação. Deverá ser utilizado uma estrutura em matriz
para armazenar as notas de cada aluno e sua respectiva média */

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    float nota[5][3];
    float media[5];
    int i, j;

    printf("Exercicio 12 - Media de notas (matriz)\n\n");

    // Armazenar as notas

    for (i = 0; i < 5; i++)
    {
        printf("Notas do %dº aluno:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("%dº nota: ", j + 1);
            scanf("%f", &nota[i][j]);
        }
        printf("\n");
    }

    // Armazenar a média

    for (i = 0; i < 5; i++)
    {
        float s = 0;
        for (j = 0; j < 3; j++)
        {
            s += nota[i][j];
        }
        media[i] = s / 3;
    }

    // Imprimir na tela

    for (i = 0; i < 5; i++)
    {
        printf("\nNotas do %dº aluno:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("%dº nota: %.1f, ", j + 1, nota[i][j]);
        }
        printf(", Média: %.1f, ", media[i]);
        if (media[i] >= 5.0)
        {
            printf("Aprovado!\n");
        }
        else
        {
            printf("Recuperação!\n");
        }
    }
}