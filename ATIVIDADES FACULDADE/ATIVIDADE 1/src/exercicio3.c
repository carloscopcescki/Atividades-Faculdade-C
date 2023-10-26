#include <stdlib.h>
#include <stdio.h>

void exercicio3(){
	printf("Exercicio 3\n-------\n\n");
	float r, a;				
	printf("Digite o valor do raio: ");	
	scanf("%f", &r);
	a = 3.14159*r*r;						//Valor da área = Pí multiplicado por raio ao quadrado
	printf("Valor da area: %2.0f\n", a);
	printf("\n");
}

