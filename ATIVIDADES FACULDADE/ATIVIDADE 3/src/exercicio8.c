#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    printf("\nExercicio 8\n-------------\n");
    setlocale(LC_ALL, "pt-BR");
    int segundosev, horas, minutos, segundos, sobra;
    printf("Digite o tempo de duração do evento em segundos: ");
    scanf("%d", &segundosev);
    horas = segundosev / 3600;
    sobra = segundosev % 3600;
    minutos = sobra / 60;
    segundos = sobra % 60;
    printf("\nO tempo de duração é:\n %dh:%dm:%ds", horas, minutos, segundos);
}