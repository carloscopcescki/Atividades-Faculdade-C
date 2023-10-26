#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i = 0, n, qtdnegativo = 0, somapositivo = 0;
    printf("Exercicio 2 - While\n");
    printf("\n");
    while (i < 40)
    {
        printf("Digite o número: ");
        scanf("%d", &n);
        i++;
        if (n >= 0)
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