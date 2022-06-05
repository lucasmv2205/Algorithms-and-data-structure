#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main()
{
  float x1, x2;
  float y1, y2;
  Ponto *p1, *p2;
  int flag1, flag2;
  float dist;
  float px1, py1, px2, py2;

  p1 = gera_pto();
  p2 = gera_pto();

  printf("\nDigite a coordenada x de um ponto:\n");
  scanf("%f", &x1);
  printf("\nDigite a coordenada y de um ponto:\n");
  scanf("%f", &y1);
  printf("\nDigite a coordenada x de um ponto:\n");
  scanf("%f", &x2);
  printf("\nDigite a coordenada y de um ponto:\n");
  scanf("%f", &y2);

  flag1 = set_pto(x1, y1, p1);
  printf("\nDeu boa ponto 1: %d", flag1);
  flag2 = set_pto(x2, y2, p2);
  printf("\nDeu boa ponto 2: %d", flag2);

  dist = distancia_pto(p1, p2);

  flag1 = get_pto(p1, &px1, &py1);
  flag2 = get_pto(p2, &px2, &py2);
  printf("\nPonto 1: (%.2f, %.2f)", px1, py1);
  printf("\nPonto 2: (%.2f, %.2f)", px2, py2);
  printf("\nDistancia entre os 2 pontos: %f", dist);

  libera_pto(&p1);
  libera_pto(&p2);

  return 0;
}