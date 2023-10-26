#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exercicio4(){
  printf("\n");
  printf("\nExercicio 4\n-----------\n");
  int num, div3, div5;
  printf("Insira um número: ");
  scanf("%i", &num);
  div3=num%3;
  div5=num%5;
  if(div3 ==0 && div5 ==0){
    printf("O número inserido é divisível por 3 e 5 ao mesmo tempo");
  }else{
    printf("O número inserido não é divísivel por 3 e 5 ao mesmo tempo");
  }
}