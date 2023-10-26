#include <stdio.h>
#include <stdlib.h>

void exercicio7() {
  printf("Exercicio 7\n-------\n\n");
  float nota1, nota2, nota3, m;						//m = média
  m <= 10;											//Média menor igual a 10
  printf("Insira a nota da primeira prova: ");
  scanf("%f", &nota1);
  printf("Insira a nota da segunda prova: ");
  scanf("%f", &nota2);
  printf("Insira a nota da terceira prova: ");
  scanf("%f", &nota3);
  m = (nota1*2 + nota2*3 + nota3*5)/10;
  if(m >= 5){
  	
  	printf("Aprovado!\n");
  }else{
  	
  	printf("Reprovado");
}
  printf("\n");
}




