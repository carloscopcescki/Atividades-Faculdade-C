#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "pt-BR");

    /*
    Variáveis utilizadas:
    p1 = prova p1 / p2 = prova p2 / p3 = prova p3 / mg = média geral / mf = média final / at = nota da atividade / nat = nota total da atividade
    np = nota total das provas / sat = soma total de notas de atividade / qa = quantidade de atividades aplicadas
    */

    float p[3], mg, mf, at, nat, np, sat;
    int i, qa;
    printf("Programa Média Ponderada - Faculdade\n------------------------------------\n");
    printf("\nDigite a quantidade de atividades aplicadas: ");
    scanf("%i", &qa);

    // Laço de repetição que irá somar as notas de atividade de acordo com a quantidade de atividades aplicadas no semestre //

    for (i = 0; i < qa; i++)
    {
        printf("\nDigite a nota da %d° atividade: ", i + 1);
        scanf("%f", &at);
        sat += at;
    }

    // Função que calcula a nota de atividade do semestre

    nat = ((sat / qa) * 0.2);
    printf("\nSua nota total de atividade é: %2.1f ", nat);
    printf("\n");
    printf("\nDigite a nota da P1: ");
    scanf("%f", &p[0]);
    printf("\nDigite a nota da P2: ");
    scanf("%f", &p[1]);

    // Função que calcula a nota total de prova do semestre (contando P1 e P2)

    np = (((p[0] + p[1]) / 2) * 0.8);
    printf("\nSua nota total de prova é: %2.1f ", np);

    // Função que calcula a média geral do semestre

    mg = np + nat;

    // Condicional que irá definir se o aluno ficará de P3 ou não, caso a média geral seja maior que 5 o aluno é aprovado, se não ele terá que fazer P3

    if (mg >= 5)
    {
        printf("\nVocê passou com nota: %2.1f. Parabéns!\n", mg);
        system("pause");
        exit(0);
    }
    else if (mg < 5)
    {
        printf("\nVocê tirou: %2.1f e terá que fazer P3!\n", mg);
        printf("\nDigite a nota da P3: ", p[2]);
        scanf("%f", &p[2]);
    }

    // Função que calcula a média final do aluno (se aplica somente para alunos que farão P3) Média Geral + P3 dividido por 2

    mf = ((mg + p[2]) / 2);

    // Condicional final que irá determinar se o aluno passou ou não

    if (mf >= 5)
    {
        printf("\nVocê passou com nota: %2.1f. Parabéns!\n", mf);
    }
    else if (mf < 5)
    {
        printf("\nVocê tirou nota: %2.1f e foi reprovado!\n", mf);
    }
    system("pause");
    return 0;
}
