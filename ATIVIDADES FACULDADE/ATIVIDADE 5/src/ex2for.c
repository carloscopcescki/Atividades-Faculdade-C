#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i, n, somapositivo = 0, qtdnegativo = 0;
    printf("Exercicio 2 - For\n");
    printf("\n");
    for (i = 1; i <= 40; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &n);
        if (n > 0)
        {
            somapositivo += n;
        }
        else
        {
            qtdnegativo++;
        }
    }
    printf("\nA soma dos números positivos é: %i", somapositivo);
    printf("\nA quantidade de números negativos é: %i", qtdnegativo);
}