#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  printf("Exercicio 4\n-------------\n");
  setlocale(LC_ALL, "pt-BR");
  float area, raio;
  printf("\nDigite o valor do raio: ");
  scanf("%f", &raio);
  area = 3.14159 * (raio * raio);
  printf("\nO valor da área da circunferência é: %2.f", area);
}