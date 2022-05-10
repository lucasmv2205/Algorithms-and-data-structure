#include <stdio.h>

struct ponto
{
  int x, y;
};

struct retangulo
{
  struct ponto inicio, fim;
};

int main()
{
  struct retangulo r;
  int base = 0, altura = 0, area = 0;

  printf("Digite o inicio da coordenada X \n");
  scanf("%d", &r.inicio.x);

  printf("Digite o inicio da coordenada Y \n");
  scanf("%d", &r.inicio.y);

  printf("Digite o fim da coordenada X \n");
  scanf("%d", &r.fim.x);

  printf("Digite o fim da coordenada Y \n");
  scanf("%d", &r.fim.y);

  base = r.fim.x - r.inicio.x;
  altura = r.fim.y - r.inicio.y;

  area = base * altura;

  printf("area do retangulo: %d\n", area);

  return 0;
}