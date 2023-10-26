#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "pt-BR");
    printf("Exercicio 8\n--------\n");
    int n, s, q;
    s = 0;
    n = 0;
    q = 0;

    printf("\nDigite um número: ");
    scanf("%d", &n);

    while (n != -1)
    {
        s += n;
        q++;
        printf("\nDigite um número: ");
        scanf("%d", &n);
    }
    printf("\nA quantidade de números digitados é: %i\n", q);
    printf("\nA soma dos números digitados é: %i\n", s);
} 