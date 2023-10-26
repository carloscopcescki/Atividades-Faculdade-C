#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  float a, b;
  int op;
  setlocale(LC_ALL, "pt-BR");
  printf("\nPrograma Calculadora\n-------------\n");
  printf(" (1) Soma\n (2) Subtração\n (3) Multiplicação\n (4) Divisão\n");
  printf("\nOperação: ");
  scanf("%i", &op);
  op <= 4;
  printf("\nInsira o valor 1: ");
  scanf("%f", &a);
  printf("\nInsira o valor 2: ");
  scanf("%f", &b);
  if (op == 1)
  {
    printf("\nA soma dos valores é: %2.1f", a + b);
  }
  else if (op == 2)
  {
    printf("\nA subtração dos valores é: %2.1f", a - b);
  }
  else if (op == 3)
  {
    printf("\nA multiplicação dos valores é: %2.1f", a * b);
  }
  else if (op == 4)
  {
    printf("\nA divisão dos valores é: %2.1f", a / b);
  }
  else
  {
    printf("\nEscolha entre 1 a 4");
  }
}