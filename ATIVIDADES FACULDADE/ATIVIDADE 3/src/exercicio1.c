#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    printf("Exercicio 1\n-------------\n");
    setlocale(LC_ALL, "pt-BR");
    float base, altura, area;
    printf("\nDigite o valor da base do triângulo: ");
    scanf("%f", &base);
    printf("\nDigite o valor da altura do triângulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("\nO valor da área do triângulo é %2.1f\n", area);
}