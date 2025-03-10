#include "aluno.h"
#include "relatorio.h"
#include "vector.h"
#include <stdio.h>

int main() {
  int qntdAlunos;
  scanf("%d", &qntdAlunos);

  Vector *v = VectorConstruct();

  for (int i = 0; i < qntdAlunos; i++) {
    tAluno *novoAluno = CriaAluno();

    LeAluno(novoAluno);
    VectorPushBack(v, novoAluno);
  }

  ImprimeRelatorio(v);

  VectorDestroy(v, DestroiAluno);

  return 0;
}