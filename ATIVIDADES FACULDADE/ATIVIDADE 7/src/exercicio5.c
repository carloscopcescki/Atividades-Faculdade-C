#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void)
{
    int repeticoes = 0, i;
    char nome[51], x;

    // Digitar uma string

    printf("Digite uma string de até 50 caracteres: ");
    gets(nome);
    printf("\nDigite um caracter a ser pesquisado: ");
    x = getchar();
    for (i = 0; i <= 50; i++)
    {
        if (nome[i] == x)
            repeticoes++;
    }
    printf("\n O caracter (%c) repete-se %d vezes no string", x, repeticoes);
    printf("\n");
    return 0;
}