#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
  char *nome;
  int matricula;
  int n1, n2, n3;
};

tAluno *CriaAluno() {
  tAluno *a = (tAluno *)calloc(1, sizeof(tAluno));

  if (!a) {
    return NULL;
  }

  a->nome = NULL;
  a->matricula = -1;
  a->n1 = -1;
  a->n2 = -1;
  a->n3 = -1;

  return a;
};

void ApagaAluno(tAluno *aluno) {
  if (aluno != NULL) {
    free(aluno->nome);
    free(aluno);
  }
};

void LeAluno(tAluno *aluno) {
  char buffer[100];
  scanf(" %[^\n]", buffer);
  aluno->nome = strdup(buffer);
  scanf("%d", &aluno->matricula);
  scanf("%d %d %d", &aluno->n1, &aluno->n2, &aluno->n3);
};

int ComparaMatricula(tAluno *aluno1, tAluno *aluno2) {
  if (aluno1->matricula > aluno2->matricula) {
    return 1;
  } else if (aluno1->matricula < aluno2->matricula) {
    return -1;
  }
  return 0;
};

int CalculaMediaAluno(tAluno *aluno) {
  return (aluno->n1 + aluno->n2 + aluno->n3) / 3;
};

int VerificaAprovacao(tAluno *aluno) {
  if (CalculaMediaAluno(aluno) >= 7) {
    return 1;
  }

  return 0;
};

void ImprimeAluno(tAluno *aluno) { printf("%s\n", aluno->nome); };