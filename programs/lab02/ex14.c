#include <stdio.h>
#include <stdlib.h>

double *to_double(int *vet, int n);
void imprime_vet(double *n, int size);

int main()
{
  int *p, n;
  double *vet_d;
  printf("\nDigite o tamanho do vetor: ");
  scanf("%d", &n);
  p = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    printf("\nDigite o valor da posicao %d: ", i + 1);
    scanf("%d", &p[i]);
  }
  vet_d = to_double(p, n);
  imprime_vet(vet_d, n);

  free(p);
  free(vet_d);

  return 0;
}

void imprime_vet(double *n, int size)
{
  printf("\nVetor alocado: ");
  for (int i = 0; i < size; i++)
  {
    printf("%.3lf\t", n[i]);
  }
  printf("\n");
}

double *to_double(int *vet, int n)
{
  double *vet_double;
  vet_double = (double *)malloc(n * sizeof(double));
  for (int i = 0; i < n; i++)
  {
    *(vet_double + i) = (double)(*(vet + i));
  }

  return vet_double;
}