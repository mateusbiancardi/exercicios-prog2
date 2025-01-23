#include "jogo.h"
#include <stdio.h>

tJogo CriaJogo()
{
  tJogo jogo;
  return jogo;
};

void ComecaJogo(tJogo jogo)
{
  do
  {
    jogo.tabuleiro = CriaTabuleiro();
    jogo.jogador1 = CriaJogador(ID_JOGADOR_1);
    jogo.jogador2 = CriaJogador(ID_JOGADOR_2);

    while (1)
    {
      jogo.tabuleiro = JogaJogador(jogo.jogador1, jogo.tabuleiro);
      if (VenceuJogador(jogo.jogador1, jogo.tabuleiro))
      {
        printf("Jogador 1 venceu!\n");
        break;
      }
      else if (AcabouJogo(jogo))
      {
        printf("Empate!\n");
        break;
      }
      jogo.tabuleiro = JogaJogador(jogo.jogador2, jogo.tabuleiro);
      if (VenceuJogador(jogo.jogador2, jogo.tabuleiro))
      {
        printf("Jogador 2 venceu!\n");
        break;
      }
      else if (AcabouJogo(jogo))
      {
        printf("Empate!\n");
        break;
      }
    }
  } while (ContinuaJogo());
};

int AcabouJogo(tJogo jogo)
{
  if (!TemPosicaoLivreTabuleiro(jogo.tabuleiro))
  {
    return 1;
  }
  return 0;
};

int ContinuaJogo()
{
  while (1)
  {
    char continua;
    scanf("%c", &continua);
    if (continua == 's')
    {
      return 1;
    }
    if (continua == 'n')
    {
      return 0;
    }
  }
};
