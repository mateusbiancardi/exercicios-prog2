#include "tabuleiro.h"
#include "jogador.h"
#include "jogo.h"

int main()
{
  tJogo jogo = CriaJogo();
  ComecaJogo(jogo);
  return 0;
}