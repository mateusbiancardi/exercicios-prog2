
#include "aluno.h"
#include "vector.h"
#include <stdio.h>

/**
 * @brief Imprime o relatorio de uma coleção de alunos.
 * O relatorio deve possuir a media das notas, porcentagem de alunos aprovados e
 * porcentagem de cada gênero.
 *
 * @param alunos Ponteiro para o vetor de alunos.
 */
void ImprimeRelatorio(Vector *alunos) {
  float aprovados = 0, masculino = 0, feminino = 0, outro = 0, qntdAlunos = 0;
  float notaTotal = 0, media, pctAprovados, pctMasculino, pctFeminino, pctOutro;

  qntdAlunos = VectorSize(alunos);

  for (int i = 0; i < qntdAlunos; i++) {
    tAluno *a = (tAluno *)VectorGet(alunos, i);

    char genero = GetGeneroAluno(a);
    float nota = GetNotaAluno(a);

    notaTotal += nota;
    if (nota >= 6)
      aprovados++;
    if (genero == 'M')
      masculino++;
    else if (genero == 'F')
      feminino++;
    else if (genero == 'O')
      outro++;
  }

  media = notaTotal / qntdAlunos;
  pctAprovados = aprovados * 100 / qntdAlunos;
  pctMasculino = masculino * 100 / qntdAlunos;
  pctFeminino = feminino * 100 / qntdAlunos;
  pctOutro = outro * 100 / qntdAlunos;

  printf("Media das notas: %.2f\n", media);
  printf("Porcentagem de alunos aprovados: %.2f%%\n", pctAprovados);
  printf("Porcentagem de cada genero:\n");
  printf("Masculino: %.2f%%\n", pctMasculino);
  printf("Feminino: %.2f%%\n", pctFeminino);
  printf("Outro: %.2f%%\n", pctOutro);
};

// Media das notas: 7.05
// Porcentagem de alunos aprovados: 75.00%
// Porcentagem de cada genero:
// Masculino: 25.00%
// Feminino: 25.00%
// Outro: 50.00%
