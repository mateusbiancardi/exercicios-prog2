#include <stdio.h>
#include "aluno.h"

int main()
{
  int n;
  scanf("%d", &n);

  tAluno aluno[n];
  tAluno aprovado[n];

  int aprovadosCont = 0;

  for (int i = 0; i < n; i++)
  {
    aluno[i] = LeAluno();

    if (VerificaAprovacao(aluno[i]))
    {
      aprovado[aprovadosCont] = aluno[i];
      aprovadosCont++;
    }
  }

  for (int i = 0; i < aprovadosCont - 1; i++)
  {
    for (int j = 0; j < aprovadosCont - i - 1; j++)
    {
      if (ComparaMatricula(aprovado[j], aprovado[j + 1]) == 1)
      {
        tAluno aux = aprovado[j];
        aprovado[j] = aprovado[j + 1];
        aprovado[j + 1] = aux;
      }
    }
  }

  for (int i = 0; i < aprovadosCont; i++)
  {
    ImprimeAluno(aprovado[i]);
  }

  return 0;
}