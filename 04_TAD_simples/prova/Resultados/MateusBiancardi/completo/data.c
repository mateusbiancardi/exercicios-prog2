#include "data.h"
#include <stdio.h>

Data lerData() {
  Data d;
  scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);
  return d;
};

void imprimeData(Data d) { printf("%d/%d/%d\n", d.dia, d.mes, d.ano); };

// Função que compara se as duas datas são exatamente iguais
// Retorna 1 se verdadeiro e 0 caso contrário
int comparaData(Data d1, Data d2) {
  if (d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano) {
    return 1;
  }
  return 0;
};

// Função que calcula a diferença de anos entre duas datas da mesma
// forma que calculamos aniversários.
// Exemplo: 25/12/1990 e 10/12/2025 = 34 anos
// Retorna a diferença de anos entre as duas datas
int calcularDiffAnosData(Data inicio, Data fim) {
  int difAno = fim.ano - inicio.ano;

  if (inicio.mes == fim.mes) {
    if (inicio.dia <= fim.dia) {
      return difAno;
    } else {
      return difAno - 1;
    }
  } else if (inicio.mes > fim.mes) {
    return difAno;
  }
  return difAno - 1;
};