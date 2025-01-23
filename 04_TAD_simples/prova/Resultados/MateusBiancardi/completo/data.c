#include "data.h"
#include <stdio.h>

Data lerData() {
  Data d;
  scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);
  return d;
}

void imprimeData(Data d) { printf("%d/%d/%d\n", d.dia, d.mes, d.ano); }

int comparaData(Data d1, Data d2) {
  if (d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano) {
    return 1;
  }
  return 0;
}

int calcularDiffAnosData(Data inicio, Data fim) {
  int difAno = fim.ano - inicio.ano;

  // Se o mês da data inicial for maior que o mês da data final, reduzimos 1 ano
  if (inicio.mes > fim.mes) {
    difAno--;
  } else if (inicio.mes == fim.mes && inicio.dia > fim.dia) {
    // Se o mês for igual, mas o dia da data inicial for maior, reduzimos 1 ano
    difAno--;
  }

  return difAno;
}