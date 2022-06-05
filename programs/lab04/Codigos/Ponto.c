#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Ponto.h"

struct Ponto
{
  float x, y;
};
typedef struct Ponto Ponto;

Ponto *gera_pto()
{
  Ponto *p;

  p = (Ponto *)malloc(sizeof(Ponto));

  return p;
}

int set_pto(float x, float y, Ponto *p)
{
  if (p == NULL)
  {
    return 0; // failed
  }
  p->x = x;
  p->y = y;

  return 1; // success
}

int get_pto(Ponto *p, float *X, float *Y)
{
  if (p == NULL)
  {
    return 0; // failed
  }

  *X = p->x;
  *Y = p->y;

  return 1; // success
}

void libera_pto(Ponto **p)
{
  free(*p);
  *p = NULL;
}

float distancia_pto(Ponto *p1, Ponto *p2)
{
  float distancia = 0;
  distancia = sqrt(pow((p2->x - p1->x), 2) + pow((p2->y - p1->y), 2));
  return distancia;
}