#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

void exercicio1(){
  printf("Exercicio 1\n-----------\n");
  float valor;
  printf("Digite um número: ");
  scanf("%f", &valor);
  if(valor>0){
    printf("O valor %2.1f é positivo!\n", valor);    
  }else{
    printf("O valor %2.1f é negativo!\n", valor);
  }
}