#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
  printf("\n\nExercicio 12\n-------------\n");
  setlocale(LC_ALL, "pt-BR");
  float n;
  printf("Digite o valor de N: ");
  scanf("%f", &n);
  if (n <= 10)
  {
    printf("\nF1");
  }
  else if (n > 10 && n <= 100)
  {
    printf("\nF2");
  }
  else if (n > 100)
  {
    printf("\nF3");
  }
}
