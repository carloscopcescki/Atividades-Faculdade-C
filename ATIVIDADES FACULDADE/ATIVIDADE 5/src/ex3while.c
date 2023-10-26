#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i = 0, p = 45, somafilho = 0;
    float somasalario = 0, maiorsalario = 0, mediasalario, mediafilho;
    printf("Exercicio 3 - While\n");
    printf("\n");
    while (i < p)
    {
        float salario;
        int qtdfilho;
        printf("Digite o salário do habitante %d: ", i + 1);
        scanf("%f", &salario);
        printf("Digite a quantidade de filhos do habitante %d: ", i + 1);
        scanf("%d", &qtdfilho);
        somasalario += salario;
        somafilho += qtdfilho;
        printf("\n");
        if (salario > maiorsalario)
        {
            maiorsalario = salario;
        }
        i++;
    }
    mediasalario = somasalario / p;
    mediafilho = somafilho / p;

    printf("\nA média salárial da população é: %.2f\n", mediasalario);
    printf("\nA média de número de filhos da população é: %.2f\n", mediafilho);
    printf("\nO maior salário da cidade é: %.2f\n", maiorsalario);
}