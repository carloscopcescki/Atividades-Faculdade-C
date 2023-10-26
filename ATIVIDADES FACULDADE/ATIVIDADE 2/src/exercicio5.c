#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exercicio5(){
  printf("\n");
  printf("\nExercicio 5\n-----------\n");
  int ano;
  float valorcarro;
  printf("Insira o preço do veículo em R$: ");
  scanf("%f", &valorcarro);
  printf("Insira o ano do carro: ");
  scanf("%i", &ano);
  if(ano<=2009){
    printf("R$:%2.2f de taxa a ser paga", valorcarro*0.025);
  }else if(ano>=2010){
    printf("R$:%2.2f de taxa a ser paga", valorcarro*0.035);
  }
}