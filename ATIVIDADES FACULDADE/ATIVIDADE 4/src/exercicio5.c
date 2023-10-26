#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "pt-BR");
    printf("Exercicio 5\n--------\n");
    int i = 1, n;
    while (i <= 5)
    {
        printf("Digite um número: ");
        scanf("%i", &n);
        if (n % 2 == 0)
        {
            printf("Número é par\n");
        }
        else
        {
            printf("Número é impar\n");
        }
        i++;
    }
}