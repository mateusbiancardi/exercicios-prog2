#include "aluno.h"
#include <stdlib.h>
#include <string.h>

struct Aluno {
  char nome[100];
  char dataNascimento[11];
  char curso[50];
  int periodo;
  float coeficienteRendimento;
};

tAluno *CriarAluno(char *nome, char *dataNascimento, char *curso, int periodo,
                   float coeficienteRendimento) {
  tAluno *a = (tAluno *)calloc(1, sizeof(tAluno));

  strcpy(a->nome, nome);
  strcpy(a->dataNascimento, dataNascimento);
  strcpy(a->curso, curso);
  a->periodo = periodo;
  a->coeficienteRendimento = coeficienteRendimento;

  return a;
};

void DestruirAluno(tAluno *aluno) { free(aluno); };

tAluno *LeAluno(FILE *arquivo_binario) {
  tAluno *a = (tAluno *)calloc(1, sizeof(tAluno));
  // int qtd;
  // fread(&qtd, sizeof(int), 1, arquivo_binario);
  fread(a, sizeof(tAluno), 1, arquivo_binario);
  return a;
};

float GetCoeficienteRendimentoAluno(tAluno *aluno) {
  return aluno->coeficienteRendimento;
};
