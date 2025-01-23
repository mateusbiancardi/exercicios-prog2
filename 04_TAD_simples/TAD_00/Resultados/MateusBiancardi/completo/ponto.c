#include "ponto.h"
#include <math.h>

Ponto pto_cria(float x, float y)
{
  Ponto p;
  p.x = x;
  p.y = y;
  return p;
}

float pto_acessa_x(Ponto p)
{
  return p.x;
};

float pto_acessa_y(Ponto p)
{
  return p.y;
};

Ponto pto_atribui_x(Ponto p, float x)
{
  p.x = x;
  return p;
};

Ponto pto_atribui_y(Ponto p, float y)
{
  p.y = y;
  return p;
};

float pto_distancia(Ponto p1, Ponto p2)
{
  float x1 = pto_acessa_x(p1);
  float y1 = pto_acessa_y(p1);
  float x2 = pto_acessa_x(p2);
  float y2 = pto_acessa_y(p2);

  float distancia = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
  return distancia;
};
