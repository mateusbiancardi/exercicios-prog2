#include "data.h"
#include <stdio.h>
#include <stdlib.h>

struct data {
  int dia, mes, ano;
};

tData *LeData() {
  tData *d = (tData *)calloc(1, sizeof(tData));

  scanf("%d/%d/%d\n", &d->dia, &d->mes, &d->ano);

  return d;
};

tData *CriaData(int dia, int mes, int ano) {
  tData *d = (tData *)calloc(1, sizeof(tData));

  d->dia = dia;
  d->mes = mes;
  d->ano = ano;

  return d;
};

void LiberaData(tData *d) {
  if (d != NULL)
    free(d);
};

int CalculaIdadeData(tData *d, tData *atual) {
  int diff = atual->ano - d->ano;

  if (d->mes > atual->mes || (atual->mes == d->mes && d->dia > atual->dia)) {
    diff--;
  }

  return diff;
};

void ImprimeData(tData *d) {
  printf("%d/%d/%d\n", d->dia, d->mes, d->ano);
  // A
};