#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exercicio3(){
  printf("\n");
  printf("\nExercicio 3\n-----------\n");
  float a, b;
  printf("Insira valor 1: ");
  scanf("%f", &a);
  printf("Insira valor 2: ");
  scanf("%f", &b);
  printf("Ordem crescente:\n");
  if(a>b){
    printf("\n1º:%2.1f\n2º:%2.1f", a,b);
  }else{
    printf("1º:%2.1f\n2º:%2.1f", b,a);
  }
}