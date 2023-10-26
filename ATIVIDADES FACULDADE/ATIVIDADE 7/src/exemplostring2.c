#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    char nome[100];
    scanf("%s", nome);           // Recebe do teclado o texto de no máximo 100 caracteres
    printf("%ld", strlen(nome)); // Apresenta o número de caracteres digitados
    return 0;
}