#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "pt-BR");
    printf("Exercicio 4\n--------\n");
    int n;
    int i = 0;
    printf("Digite um número: ");
    scanf("%i", &n);
    while (i <= n)
    {
        {
            printf("%d ", i);
        }
        i++;
    }
}