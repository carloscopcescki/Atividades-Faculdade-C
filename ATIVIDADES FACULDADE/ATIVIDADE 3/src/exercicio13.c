#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  printf("\n\nExercicio 13\n-------------\n");
  setlocale(LC_ALL, "pt-BR");
  int num1, num2, num3;
  printf("\nInsira o valor 1: ");
  scanf("%i", &num1);
  printf("Insira o valor 2: ");
  scanf("%i", &num2);
  printf("Insira o valor 3: ");
  scanf("%i", &num3);
  if (num1 > num2 && num1 > num3)
  {
    printf("\nO maior valor é: %i", num1);
  }
  else if (num2 > num1 && num2 > num3)
  {
    printf("\nO maior valor é: %i", num2);
  }
  else
  {
    printf("\nO maior valor é: %i", num3);
  }
}