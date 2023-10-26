#include <stdio.h>
#include <stdlib.h>

void exercicio8() {
  printf("Exercicio 8\n-------\n\n");
  float liquido, bruto, brutodesc;									
  printf("Insira o seu salario bruto R$: ");			//Salário bruto
  scanf("%f", &bruto);
  brutodesc = bruto-(bruto*0.10);
  liquido = brutodesc-(brutodesc*0.05);				
  printf("Salario liquido R$: %2.2f\n", liquido);		
}


