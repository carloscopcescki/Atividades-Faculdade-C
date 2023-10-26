#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Escreve um programa em C que receba uma string e conte o número
de caracteres que ele possui, conforme exemplo a seguir:

Exemplo de entrada:
Entre com uma string: Paralelepipedo.

Exemplo de saída:
A string que você digitou tem tamanho 14 caracteres.

*/

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    char nome[100];
    printf("Exercicio 2 - Contar caracteres");
    printf("\n\nEntre com uma string: ");
    scanf("%s", &nome);
    printf("\nO número de caracteres da string: %ld", strlen(nome));
    printf("\n");
}