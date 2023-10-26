#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    printf("Exercicio 1 - While\n");
    int n = 175, i = 25;
    printf("\n");
    while (i < n)
    {
        i++;
        printf("%i ", i);
    }
}