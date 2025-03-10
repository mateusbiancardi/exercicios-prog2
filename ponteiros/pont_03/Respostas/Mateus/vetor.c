#include "vetor.h"
#include <stdio.h>

void LeDadosParaVetor(int *vet, int tam) {
  for (int i = 0; i < tam; i++) {
    scanf("%d", &vet[i]);
  }
};

void ImprimeDadosDoVetor(int *n, int tam) {
  for (int i = 0; i < tam; i++) {
    printf("%d ", n[i]);
  }
};

void TrocaSeAcharMenor(int *vet, int tam, int *paraTrocar) {
  int menor = *paraTrocar;

  for (int i = 0; i < tam - 1; i++) {
    if (vet[i] < menor) {
      menor = vet[i];
    }
  }

  *paraTrocar = menor;
};

void OrdeneCrescente(int *vet, int tam) {
  for (int i = 0; i < tam - 1; i++) {
    for (int j = 0; j < tam - i - 1; j++) {
      if (vet[j] > vet[j + 1]) {
        int temp = vet[j];
        vet[j] = vet[j + 1];
        vet[j + 1] = temp;
      }
    }
  }
};