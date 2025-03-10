#include "lesao.h"
#include <stdio.h>
#include <stdlib.h>

struct lesao {
  char *id;
  char *diag;
  char *regiao;
  int malig;
};

tLesao *CriaLesao() {
  tLesao *l = (tLesao *)calloc(1, sizeof(tLesao));

  l->id = (char *)calloc(TAM_ID, sizeof(char));
  l->diag = (char *)calloc(TAM_DIAG, sizeof(char));
  l->regiao = (char *)calloc(TAM_REG, sizeof(char));
  l->malig = 0;

  return l;
};

void LeLesao(tLesao *l) {
  scanf("%[^\n]%*c", l->id);
  scanf("%[^\n]%*c", l->diag);
  scanf("%[^\n]%*c", l->regiao);
  scanf("%d\n", &l->malig);
};

void LiberaLesao(tLesao *l) {
  if (l != NULL) {
    free(l->id);
    free(l->diag);
    free(l->regiao);
    free(l);
  }
};

char *GetIdLesao(tLesao *l) { return l->id; };

int PrecisaCirurgiaLesao(tLesao *l) {
  if (l->malig > 50) {
    return 1;
  }
  return 0;
};