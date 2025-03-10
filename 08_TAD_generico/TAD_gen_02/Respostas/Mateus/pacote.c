#include "pacote.h"
#include "stdio.h"
#include "stdlib.h"

struct pacote {
  void *dado;
  void *soma;
  int tam;
  Type tipo;
};

tPacote *CriaPacote(Type type, int numElem) {
  tPacote *p = (tPacote *)calloc(1, sizeof(tPacote));

  p->tam = numElem;
  p->tipo = type;

  switch (type) {
  case INT:
    p->dado = (int *)calloc(numElem, sizeof(int));
    break;
  case CHAR:
    p->dado = (char *)calloc(numElem, sizeof(char));
    break;
  }

  return p;
};

void DestroiPacote(tPacote *pac) {
  free(pac->dado);
  free(pac);
};

void LePacote(tPacote *pac) {
  switch (pac->tipo) {
  case INT:
    for (int i = 0; i < pac->tam; i++) {
      scanf("%d", (int *)pac->dado + i);
    }
    break;
  case CHAR:
    for (int i = 0; i < pac->tam; i++) {
      scanf("%c", (char *)pac->dado + i);
    }
    break;
  }
};

/**
 * @brief Busca uma conta na agencia que possui um id específico
 *
 * @param pac - O vetor genérico que terá seu conteúdo impresso em tela
 */
void ImprimePacote(tPacote *pac) {
  switch (pac->tipo) {
  case INT:
    for (int i = 0; i < pac->tam; i++) {
      printf("%d ", ((int *)pac->dado)[i]);
    }
    break;
  case CHAR:
    for (int i = 0; i < pac->tam; i++) {
      printf("%c", ((char *)pac->dado)[i]);
    }
    break;
  }
};

/**
 * @brief Calcula a soma de verificacao de um pacote e a armazena internamente
 *
 * @param pac - O vetor genérico que terá sua soma de verificacao calculada
 */
void CalculaSomaVerificacaoPacote(tPacote *pac);
