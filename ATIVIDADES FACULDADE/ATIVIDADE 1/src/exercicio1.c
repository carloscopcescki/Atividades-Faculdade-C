#include <stdlib.h>
#include <stdio.h>

void exercicio1(){
	printf("Exercicio 1\n-------\n\n");
	float base;									//Variável base//
	float altura;								//Variável altura//
	float area;									//Variável area//
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite a base: ");
	scanf("%f", &base);
	area = base*altura/2;						//área do triângulo é base multiplicado pela altura dividido p/ 2
	printf("A area deu: %2.0f\n", area);
	printf("\n");
}
