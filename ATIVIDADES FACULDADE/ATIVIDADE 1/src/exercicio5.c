#include <stdio.h>
#include <stdlib.h>

void exercicio5() {
  printf("Exercicio 5\n-------\n\n");
  float a, l, d;											// a = �rea & l = lado
  printf("Insira o valor do lado do quadrado: ");			
  scanf("%f", &l);
  a = l*l;	//�rea do quadrado � igual a lado x lado (ou lado ao quadrado)
  d = a*2 ; //Dobro da �rea do quadrado  
  printf("Dobro da area do quadrado: %2.2f\n", d);
  printf("\n");
}




