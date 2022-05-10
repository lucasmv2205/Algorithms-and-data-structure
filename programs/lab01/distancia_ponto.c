#include <stdio.h>
#include <math.h>

struct ponto
{
  int x, y;
};

struct reta
{
  struct ponto inicio, fim;
};

int main()
{
  struct reta r;
  float distancia = 0;

  r.inicio.x = 0;
  r.inicio.y = 0;

  printf("Digite o inicio da coordenada X \n");
  scanf("%d", &r.fim.x);

  printf("Digite o inicio da coordenada Y \n");
  scanf("%d", &r.fim.y);

  distancia = sqrt(pow(r.fim.x, 2) + pow(r.fim.y, 2));

  printf("\n%.2f", distancia);


  return 0;
}
