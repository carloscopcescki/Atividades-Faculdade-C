#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt-BR");
    int op;
    float v1, v2;

    printf("Programa Calculadora\n--------------------\n");

    printf("Digite um número: ");
    scanf("%f", &v1);
    printf("Digite um número: ");
    scanf("%f", &v2);
    printf("\n(1) Soma\n");
    printf("(2) Subtração\n");
    printf("(3) Multiplicação\n");
    printf("(4) Divisão\n");
    printf("\nEscolha qual operação você quer fazer: ");
    scanf("%i", &op);

    if (op <= 1)
    {
        printf("Resultado da Soma = %2.1f", v1 + v2);
    }
    else if (op <= 2)
    {
        printf("Resultado da Subtração = %2.1f", v1 - v2);
    }
    else if (op <= 3)
    {
        printf("Resultado da Multiplicação = %2.1f", v1 * v2);
    }
    else if (op <= 4)
    {
        printf("Resultado da Divisão = %2.1f", v1 / v2);
    }
    else if (op >= 5)
    {
        printf("Escolha um número entre 1 a 4");
    }
}
