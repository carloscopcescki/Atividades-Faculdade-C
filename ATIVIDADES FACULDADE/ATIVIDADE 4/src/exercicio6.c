#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "pt-BR");
    printf("Exercicio 6\n--------\n");
    int n;
    while (n != -1)
    {
        printf("Digite um número: ");
        scanf("%i", &n);
        if (n % 2 == 0)
        {
            printf("Número é par\n");
        }
        else if (n % 2 == 1)
        {
            printf("Número é impar\n");
        }
        else
        {
            break;
        }
    }
}