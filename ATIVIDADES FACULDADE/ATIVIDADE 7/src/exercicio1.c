#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia três strings referentes a Nome, Sobrenome e
Data de nascimento e a idade. Após tenha como saída a informação conforme
exemplo a seguir: */

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_BR");
    printf("Exercicio 1 - Nome / Idade / Data de Nascimento");

    /* Declarar variáveis
    OBS: Variáveis tipo char sempre necessitam de um array. Ex: nome[50] */

    char nome[50], sobrenome[50], datanasc[50];
    int idade;
    printf("\n\nDigite o seu nome: ");
    scanf("%s", &nome);
    printf("\nDigite o seu sobrenome: ");
    scanf("%s", &sobrenome);
    printf("\nDigite a sua data de nascimento: ");
    scanf("%s", &datanasc);
    printf("\nDigite sua idade: ");
    scanf("%i", &idade);
    printf("\nNome completo: %s %s", nome, sobrenome);
    printf("\nIdade: %i", idade);
    printf("\nData de nascimento: %s", datanasc);
    printf("\n");
    return 0;
}
