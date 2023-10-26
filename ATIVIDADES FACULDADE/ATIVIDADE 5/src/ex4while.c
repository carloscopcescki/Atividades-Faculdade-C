#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, n, fat = 1;
    printf("Exercicio 4 - While\n");
    printf("\n");
    printf("Digite um número para fatorar: ");
    scanf("%i", &n);
    i = n;
    while (i > 1)
    {
        fat *= i;
        i--;
    }
    printf("\nFatorial(%i): %i", n, fat);
}