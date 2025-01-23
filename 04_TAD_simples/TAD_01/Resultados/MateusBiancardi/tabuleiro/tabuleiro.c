// #include "tabuleiro.h"
// #include <stdio.h>

// tTabuleiro CriaTabuleiro()
// {
//   tTabuleiro t;
//   for (int i = 0; i < TAM_TABULEIRO; i++)
//   {
//     for (int j = 0; j < TAM_TABULEIRO; j++)
//     {
//       t.posicoes[i][j] = '-';
//     }
//   }
//   return t;
// };

// tTabuleiro MarcaPosicaoTabuleiro(tTabuleiro tabuleiro, int peca, int x, int y)
// {
//   char letra = peca == 1 ? 'X' : 'O';
//   tabuleiro.posicoes[x][y] = letra;
//   return tabuleiro;
// };

// int TemPosicaoLivreTabuleiro(tTabuleiro tabuleiro)
// {
//   for (int i = 0; i < TAM_TABULEIRO; i++)
//   {
//     for (int j = 0; j < TAM_TABULEIRO; j++)
//     {
//       if (tabuleiro.posicoes[i][j] == '-')
//       {
//         return 1;
//       }
//     }
//   }
//   return 0;
// };

// int EstaMarcadaPosicaoPecaTabuleiro(tTabuleiro tabuleiro, int x, int y, int peca)
// {
//   if (tabuleiro.posicoes[x][y] == peca)
//     return 1;
//   return 0;
// };

// int EstaLivrePosicaoTabuleiro(tTabuleiro tabuleiro, int x, int y)
// {
//   if (tabuleiro.posicoes[x][y] == '-')
//     return 1;
//   return 0;
// };

// int EhPosicaoValidaTabuleiro(int x, int y)
// {
//   if (x >= 0 && x <= 2 && y >= 0 && y <= 2)
//     return 1;
//   return 0;
// };

// void ImprimeTabuleiro(tTabuleiro tabuleiro)
// {
//   for (int i = 0; i < TAM_TABULEIRO; i++)
//   {
//     for (int j = 0; j < TAM_TABULEIRO; j++)
//     {
//       printf("%c", tabuleiro.posicoes[i][j]);
//     }
//     printf("\n");
//   }
// };
