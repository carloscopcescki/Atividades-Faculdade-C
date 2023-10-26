#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  printf("Exercicio 5\n-----------\n");
  setlocale(LC_ALL, "pt-BR");
  float centimetro, polegada;
  printf("\nDigite o valor em polegadas: ");
  scanf("%f", &polegada);
  centimetro = polegada * 2.54;
  printf("\n%.2f polegadas são equivalente a %.2f centímetros\n", polegada, centimetro);
}