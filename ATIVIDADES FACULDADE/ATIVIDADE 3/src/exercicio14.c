#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    printf("\n\nExercicio 14\n------------------\n");
    setlocale(LC_ALL, "pt-BR");
    int a, b, c;
    printf("Insira o Valor A do Triângulo: ");
    scanf("%i", &a);
    printf("Insira o Valor B do Triângulo: ");
    scanf("%i", &b);
    printf("Insira o Valor C do Triângulo: ");
    scanf("%i", &c);

    if (a == b && a == c)
    {
        printf("\nO Triângulo é Equilátero!\n");
    }
    else if (a == b || a == c || b == c)
    {
        printf("\nO Triângulo é Isósceles!\n");
    }
    else
    {
        printf("\nO Triângulo é Escaleno!\n");
    }
}