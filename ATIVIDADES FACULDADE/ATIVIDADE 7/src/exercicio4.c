#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Faça um programa que recebe uma string de um nome e
após imprima uma saudação. Dica utilize os comandos gets() e puts.
*/

int main(void)
{
    setlocale(LC_ALL, "pt_BR");
    char nome[100];
    printf("Exercicio 4 - Saudações");
    puts("\n\nDigite o seu nome: ");
    gets(nome);
    printf("\nSaudações %s", nome);
    printf("\n");
    return 0;
}