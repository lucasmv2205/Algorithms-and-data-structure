#include <stdio.h>
#include <stdlib.h>

struct ponto
{
  int x, y;
};
typedef struct ponto Ponto;

void inc_dir(Ponto *pto, char direcao)
{
  if (direcao == 'l')
  {
    (*pto).x = (*pto).x + 1;
  }
  if (direcao == 'o')
  {
    (*pto).x = (*pto).x - 1;
  }
  if (direcao == 'n')
  {
    (*pto).y = (*pto).y + 1;
  }
  if (direcao == 's')
  {
    (*pto).y = (*pto).y - 1;
  }
}

int main()
{
  int n = 1, i;
  char dir[10];
  Ponto *vet;

  vet = (Ponto *)malloc(n * sizeof(Ponto));

  printf("\nDigite 1 ponto: ");

  for (i = 0; i < n; i++)
  {
    printf("\nPonto %d", i + 1);
    printf("\nInforme coordenada x: ");
    scanf("%d", &vet[i].x);
    printf("Informe coordenada y: ");
    scanf("%d", &vet[i].y);
  }

  printf("Digite a direcao (n-norte / s-sul/ l-leste/ o-oeste): ");
  scanf("%s", &dir[0]);

  printf("\nPontos inseridos:\n");
  for (i = 0; i < n; i++)
  {
    printf("Ponto %d\n", i + 1);
    printf("coordenada x: %d\n", vet[i].x);
    printf("coordenada y: %d\n", vet[i].y);
    printf("\n");
  }

  // altera valor
  inc_dir(&vet[0], dir[0]);

  printf("\nPontos alterados:\n");
  for (i = 0; i < n; i++)
  {
    printf("Ponto %d\n", i + 1);
    printf("coordenada x: %d\n", vet[i].x);
    printf("coordenada y: %d\n", vet[i].y);
    printf("\n");
  }

  free(vet);

  return 0;
}
