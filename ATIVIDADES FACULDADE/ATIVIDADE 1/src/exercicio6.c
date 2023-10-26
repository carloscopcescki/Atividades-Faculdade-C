#include <stdio.h>
#include <stdlib.h>

void exercicio6() {
  printf("Exercicio 6\n-------\n\n");
  float sh, ht, s;								// ht = horas trabalhadas no mês, sh = valor recebido p/ hora, s = salário no mês
  printf("Informe suas horas trabalhadas no mes: ");
  scanf("%f", &ht);
  printf("Informe quanto ganha p/hora R$: ");
  scanf("%f", &sh);
  s = ht*sh;
  printf("Total do salario mensal R$: %2.2f\n", s );
  printf("\n");
}



