#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, n, fat = 1;
    printf("Exercicio 4 - For\n");
    printf("\n");
    printf("Digite um número para fatorar: ");
    scanf("%i", &n);
    for (i = n; i > 1; i--)
    {
        fat *= i;
    }
    printf("\nFatorial(%i): %i", n, fat);
}