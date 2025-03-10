#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
  char nome[100];
  char dtNasc[100];
  char curso[100];
  char perIng[100];
  int conclusao;
  float CRA;
};

Aluno **CriaVetorAlunos(int numeroAlunos) {
  Aluno **listaAlunos = (Aluno **)calloc(numeroAlunos, sizeof(Aluno *));

  return listaAlunos;
};

Aluno *CriaAluno(char *nome, char *dtNasc, char *cursoUfes,
                 char *periodoIngresso, int percConclusao, float CRA) {
  Aluno *a = (Aluno *)calloc(1, sizeof(Aluno));

  strcpy(a->nome, nome);
  strcpy(a->dtNasc, dtNasc);
  strcpy(a->perIng, periodoIngresso);
  strcpy(a->curso, cursoUfes);
  a->conclusao = percConclusao;
  a->CRA = CRA;

  return a;
};

void LeAlunos(Aluno **vetorAlunos, int numeroAlunos) {
  for (int i = 0; i < numeroAlunos; i++) {
    char nome[100], dtNasc[100], curso[100], perIng[100];
    int conclusao;
    float CRA;

    scanf("%[^\n]", nome);
    scanf("%[^\n]", dtNasc);
    scanf("%[^\n]", curso);
    scanf("%[^\n]", perIng);
    scanf("%d\n", &conclusao);
    scanf("%f\n", &CRA);

    Aluno *a = CriaAluno(nome, dtNasc, curso, perIng, conclusao, CRA);

    vetorAlunos[i] = a;
  }
};

void LiberaAlunos(Aluno **alunos, int numeroAlunos) {
  for (int i = 0; i < numeroAlunos; i++) {
    free(alunos[i]);
  }
  free(alunos);
};

void SalvaAlunosBinario(Aluno **alunos, char *fileName, int numeroAlunos) {
  FILE *arquivo;
  arquivo = fopen(fileName, "wb");
  fwrite(&numeroAlunos, sizeof(int), 1, arquivo);
  for (int i = 0; i < numeroAlunos; i++) {
    fwrite(alunos[i], sizeof(Aluno), 1, arquivo);
  }
  fclose(arquivo);
};

void CarregaAlunosBinario(Aluno **alunos, char *fileName) {
  FILE *arquivo;
  arquivo = fopen(fileName, "rb");
  int qntdElementos;
  fread(&qntdElementos, sizeof(int), 1, arquivo);
  for (int i = 0; i < qntdElementos; i++) {
    fread(alunos[i], sizeof(Aluno), 1, arquivo);
  }
  fclose(arquivo);
};

void ImprimeAlunos(Aluno **alunos, int numeroAlunos) {
  for (int i = 0; i < numeroAlunos; i++) {
    Aluno *a = alunos[i];
    printf("Aluno %d:", i);
    printf("Nome: %s\n", a->nome);
    printf("Data Nascimento: %s\n", a->dtNasc);
    printf("Curso: %s\n", a->curso);
    printf("Periodo Ingresso: %s\n", a->perIng);
    printf("%% Conclusao do Curso: %d\n", a->conclusao);
    printf("CRA: %.2f\n", a->CRA);
  }
};

// Aluno 0:
// Nome: Seraphina Luminara
// Data Nascimento: 12 de julho de 2995
// Curso: Engenharia Quantica
// Periodo Ingresso: 2023/1
// % Conclusao do Curso: 85
// CRA: 8.70
// Aluno 1:
// Nome: Draven Obsidianara
// Data Nascimento: 04 de setembro de 3008
// Curso: Astrobiologia Avancada
// Periodo Ingresso: 2023/2
// % Conclusao do Curso: 93
// CRA: 9.50
