#include "utils.h"
#include <stdio.h>

void LeIntervalo(int *m, int *n) { scanf("%d %d", m, n); };

int EhPrimo(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
};

void ObtemMaiorEMenorPrimo(int m, int n, int *menor, int *maior) {
  *menor = n;
  *maior = m;

  for (int i = m; i <= n; i++) {
    if (i < *menor && EhPrimo(i)) {
      *menor = i;
    }

    if (i > *maior && EhPrimo(i)) {
      *maior = i;
    }
  }
};