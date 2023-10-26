#include "exercicio1.c"
#include "exercicio2.c"
#include "exercicio3.c"
#include "exercicio4.c"
#include "exercicio5.c"
#include <locale.h>

int main() {
  
  setlocale(LC_ALL, "pt-BR");
  exercicio1();
  exercicio2();
  exercicio3();
  exercicio4();
  exercicio5();
  
}