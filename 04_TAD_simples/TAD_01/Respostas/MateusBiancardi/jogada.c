#include <stdio.h>
#include "jogada.h"

/**
 * Lê uma jogada e retorna uma estrutura do tipo tJogada e define o valor da variavel sucesso.
 * Se a jogada foi lida com sucesso, ou seja, foi lido um valor para x e outro para y, sucesso = 1, caso contrário, sucesso = 0.
 * @return a jogada lida.
 */
tJogada LeJogada()
{
  tJogada j;
  j.sucesso = 0;
  int x, y;
  printf("Digite uma posicao (x e y): ") if (scanf("%d %d", &x, &y) == 2)
  {
    j.x = x;
    j.y = y;
    j.sucesso = 1;
  }
  return j;
};

int ObtemJogadaX(tJogada jogada)
{
  return jogada.x;
};

int ObtemJogadaY(tJogada jogada)
{
  return jogada.y;
};

int FoiJogadaBemSucedida(tJogada jogada)
{
  return jogada.sucesso;
};
