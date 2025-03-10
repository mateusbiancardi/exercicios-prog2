#include "aluno.h"
#include "vector.h"
#include <stdio.h>
#include <stdlib.h>

struct Aluno {
  char *nome;
  float nota;
  char genero;
};

tAluno *CriaAluno() {
  tAluno *a = (tAluno *)calloc(1, sizeof(tAluno));

  if (a == NULL) {
    exit(1);
  }

  a->nome = (char *)calloc(50, sizeof(char));
  a->nota = 0;
  a->genero = 'O';

  return a;
};

void DestroiAluno(data_type aluno) {
  tAluno *a = (tAluno *)aluno;

  free(a->nome);
  free(a);
};

void LeAluno(tAluno *aluno) {
  scanf("%[^;];%c;%f", aluno->nome, &aluno->genero, &aluno->nota);
}

char GetGeneroAluno(tAluno *aluno) { return aluno->genero; };

float GetNotaAluno(tAluno *aluno) { return aluno->nota; };
