#include <stdlib.h>
#include <stdio.h>

void exercicio1(){
	printf("Exercicio 1\n-------\n\n");
	float base;									//Vari�vel base//
	float altura;								//Vari�vel altura//
	float area;									//Vari�vel area//
	printf("Digite a altura: ");
	scanf("%f", &altura);
	printf("Digite a base: ");
	scanf("%f", &base);
	area = base*altura/2;						//�rea do tri�ngulo � base multiplicado pela altura dividido p/ 2
	printf("A area deu: %2.0f\n", area);
	printf("\n");
}
