#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que armazene 12 salários, após imprima os
12 salários, salário anual e o salário médio do período*/

int main()
{
    setlocale(LC_ALL, "pt_BR");
    float salario[13], salarioanual, media, mensal;
    printf("Exercicio 3 - Salários\n\n");

    /* Informa o valor de salário de cada mês */

    for (int i = 1; i <= 12; i++)
    {
        printf("Informe o valor do %dº salário: ", i);
        scanf("%f", &mensal);
        salarioanual += mensal;
        media = salarioanual / i;
        salario[i] = mensal;
    }

    /* Exibir na tela o salário equivalente a cada mês.
    Bem como, a média salarial e o salário anual */

    for (int i = 1; i <= 12; i++)
    {
        printf("\nSalário %dº mês equivale a: R$%.2f", i, salario[i]);
    }
    printf("\nSalário Anual: R$%.2f ", salarioanual);
    printf("\nSalario Médio: R$%.2f ", media);
    
    return 0;
}