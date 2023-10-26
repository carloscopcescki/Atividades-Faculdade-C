#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    printf("Definição de Vetor\n");
    int v[10]; // Criação de um vetor de inteiros sem valores
    v[0] = 1;  // Atribuição do valor 38 a posição 0 do vetor
    printf("\nValor do vetor na posição zero: %d", v[0]);
    printf("\n\n");
    // Carrega cada posição do vetor V
    for (int i = 0; i <= 10; i++)
    {
        v[i] = i;
        printf("%d ", v[i]);
    }
    return 0;
}
