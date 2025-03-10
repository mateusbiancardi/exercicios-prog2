#include "tadgen.h"
#include <stdio.h>

int main() {
  int tam;
  Type tipo;

  printf("tad_gen_01\n");
  printf("Digite o tipo e numero de elementos:");

  scanf("%d %d", &tipo, &tam);

  tGeneric *g = CriaGenerico(tipo, tam);
  LeGenerico(g);
  ImprimeGenerico(g);
  DestroiGenerico(g);

  return 0;
}