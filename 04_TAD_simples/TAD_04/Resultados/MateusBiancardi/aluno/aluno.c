#include <stdio.h>
#include <string.h>
#include "aluno.h"

tAluno CriaAluno(char *nome, int matricula, int n1, int n2, int n3)
{
  tAluno a;

  strncpy(a.nome, nome, sizeof(a.nome) - 1);
  a.nome[sizeof(a.nome) - 1] = '\0';

  a.matricula = matricula;
  a.n1 = n1;
  a.n2 = n2;
  a.n3 = n3;
  return a;
}

tAluno LeAluno()
{
  tAluno a;

  scanf(" %[^\n]", a.nome);
  scanf("%d", &a.matricula);
  scanf("%d %d %d", &a.n1, &a.n2, &a.n3);

  return a;
}

int ComparaMatricula(tAluno aluno1, tAluno aluno2)
{
  if (aluno1.matricula == aluno2.matricula)
  {
    return 0;
  }
  else if (aluno1.matricula < aluno2.matricula)
  {
    return -1;
  }
  return 1;
};

int CalculaMediaAluno(tAluno aluno)
{
  return ((aluno.n1 + aluno.n2 + aluno.n3) / 3);
};

int VerificaAprovacao(tAluno aluno)
{
  int media = CalculaMediaAluno(aluno);
  if (media >= 7)
  {
    return 1;
  }
  return 0;
};

void ImprimeAluno(tAluno aluno)
{
  printf("%s\n", aluno.nome);
};