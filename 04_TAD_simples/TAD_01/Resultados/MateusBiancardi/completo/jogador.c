#include "jogador.h"
#include <stdio.h>

tJogador CriaJogador(int idJogador)
{
  tJogador j;
  j.id = idJogador;
  return j;
};

tTabuleiro JogaJogador(tJogador jogador, tTabuleiro tabuleiro)
{
  tTabuleiro novoTabuleiro;
  int x, y;
  int loop = 1;
  do
  {
    ImprimeTabuleiro(tabuleiro);
    printf("Jogador %d\n", jogador.id);
    printf("Digite uma posicao (x e y): ");
    scanf("%d %d", &x, &y);
    loop = EstaLivrePosicaoTabuleiro(tabuleiro, x, y);
    loop = EhPosicaoValidaTabuleiro(x, y);
  } while (loop == 0);

  novoTabuleiro = MarcaPosicaoTabuleiro(tabuleiro, jogador.id, x, y);
  return novoTabuleiro;
};

int VenceuJogador(tJogador jogador, tTabuleiro tabuleiro)
{
  char letra = jogador.id == 1 ? 'X' : 'O';

  // Varre as colunas
  for (int i = 0; i < TAM_TABULEIRO; i++)
  {
    if (tabuleiro.posicoes[i][0] == letra && tabuleiro.posicoes[i][1] == letra && tabuleiro.posicoes[i][2] == letra)
    {
      return 1;
    }
  }

  // Varre as linhas
  for (int i = 0; i < TAM_TABULEIRO; i++)
  {
    if (tabuleiro.posicoes[0][i] == letra && tabuleiro.posicoes[1][i] == letra && tabuleiro.posicoes[2][i] == letra)
    {
      return 1;
    }
  }

  // Varre as diagonais
  if (tabuleiro.posicoes[0][0] == letra && tabuleiro.posicoes[1][1] == letra && tabuleiro.posicoes[2][2] == letra)
  {
    return 1;
  }
  if (tabuleiro.posicoes[0][2] == letra && tabuleiro.posicoes[1][1] == letra && tabuleiro.posicoes[2][0] == letra)
  {
    return 1;
  }

  return 0;
};
