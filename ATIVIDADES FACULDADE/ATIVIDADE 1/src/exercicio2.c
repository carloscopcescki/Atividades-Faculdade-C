#include <stdlib.h>
#include <stdio.h>

void exercicio2(){
	printf("Exercicio 2\n-------\n\n");
	float v, r;									//variável velocidade representada por v e o resultado representado por r//
	printf("Digite a velocidade em Km: ");		
	scanf("%f", &v);						
	r = v/3.6;									//velocidade em m/s é velocidade / 3.6//   
	printf("Sua velocidade em m/s: %f\n", r);
	printf("\n");
}
