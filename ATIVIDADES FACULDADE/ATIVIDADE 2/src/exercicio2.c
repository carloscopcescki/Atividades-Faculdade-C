#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exercicio2(){
  float num1, num2;
  printf("\nExercicio 2\n-----------\n");
  printf("Insira o valor 1: ");
  scanf("%f", &num1);
  printf("Insira o valor 2: ");
  scanf("%f", &num2);
  if(num1>num2){
  printf("O valor 1: %2.1f é maior que o valor 2: %2.1f\n", num1,num2);
  }else{
  printf("O valor 2: %2.1f é maior que o valor 1: %2.1f\n", num2,num1);
  }
}