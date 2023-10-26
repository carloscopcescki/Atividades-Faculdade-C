#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    printf("Exercicio 2\n-------------\n");
    setlocale(LC_ALL, "pt-BR");
    float km, ms;
    printf("\nDigite o velocidade em Km/h: ");
    scanf("%f", &km);
    ms = (km * 1000) / 3600;
    printf("\n%2.1fKm/h é o equivalente a %2.1fm/s\n", km, ms);
}