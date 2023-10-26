#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia dois vetores de 5 posições,
armazene os valores, multiplica o valor de cada posição e
armazena em um terceiro vetor. Após imprime as posições dos
vetores no seguinte formato:

VET1[0]=1
VET2[0]=9
VET3[0]=1

VET1[1]=2
VET1[1]=8
VET1[1]=16

*/

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    int vet1[6], vet2[6], vet3[6];
    printf("Exercicio 9 - Multiplicação de vetores\n\n");
    printf("Vetor 1:\n\n");
    // Armazenar valores do vetor 1
    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o %dº elemento do vetor 1: ", i);
        scanf("%i", &vet1[i]);
    }
    printf("\nVetor 2:\n\n");
    // Armazenar valores do vetor 2
    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o %dº elemento do vetor 2: ", i);
        scanf("%i", &vet2[i]);
    }
    printf("\n");
    // Multiplicar vetores e armazenar no vetor 3
    for (int i = 1; i <= 5; i++)
    {
        vet3[i] = vet1[i] * vet2[i];
    }
    printf("\n");
    // Exibir na tela
    for (int i = 1; i <= 5; i++)
    {
        printf("VET1[%d] = %d\n", i, vet1[i]);
        printf("VET2[%d] = %d\n", i, vet2[i]);
        printf("VET3[%d] = %d\n\n", i, vet3[i]);
    }
}