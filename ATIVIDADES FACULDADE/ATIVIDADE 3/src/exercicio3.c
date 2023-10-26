#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    printf("Exercicio 3\n-------------\n");
    setlocale(LC_ALL, "pt-BR");
    float a, m, f;
    m = 700;
    printf("\nDigite a aceleração do carro em m/s^2: ");
    scanf("%f", &a);
    f = m * a;
    printf("\nA força exercida pelo motor é: %.2f\n", f);
}