#include "tadgen.h"
#include <stdio.h>
#include <stdlib.h>

struct generic {
  void *data;
  int tam;
  Type tipo;
};

tGeneric *CriaGenerico(Type type, int numElem) {
  tGeneric *g = (tGeneric *)calloc(1, sizeof(tGeneric));

  g->tam = numElem;
  g->tipo = type;

  switch (type) {
  case INT:
    g->data = (int *)calloc(numElem, sizeof(int));
    break;
  case FLOAT:
    g->data = (float *)calloc(numElem, sizeof(float));
    break;
  }

  return g;
};

void DestroiGenerico(tGeneric *gen) {
  free(gen->data);
  free(gen);
};

void LeGenerico(tGeneric *gen) {
  printf("\n");
  printf("Digite o vetor:\n");
  switch (gen->tipo) {
  case INT:
    for (int i = 0; i < gen->tam; i++) {
      scanf("%d", (int *)gen->data + i);
    }
    break;
  case FLOAT:
    for (int i = 0; i < gen->tam; i++) {
      scanf("%f", (float *)gen->data + i);
    }
    break;
  }
};

void ImprimeGenerico(tGeneric *gen) {
  switch (gen->tipo) {
  case INT:
    for (int i = 0; i < gen->tam; i++) {
      printf("%d ", ((int *)gen->data)[i]);
    }
    break;
  case FLOAT:
    for (int i = 0; i < gen->tam; i++) {
      printf("%.2f ", ((float *)gen->data)[i]);
    }
    break;
  }
};