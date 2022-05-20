#include <stdio.h>
#include <stdlib.h>

int *aloca_inteiro(int n);
void imprime_vet(int *n, int size);

int main()
{
  int *p, n;
  printf("\nDigite o tamanho do vetor: ");
  scanf("%d", &n);
  p = aloca_inteiro(n);
  imprime_vet(p, n);

  free(p);

  return 0;
}

void imprime_vet(int *n, int size)
{
  printf("\nVetor alocado: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d\t", n[i]);
  }
  printf("\n");
}

int *aloca_inteiro(int n)
{
  int *vet;
  vet = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    *(vet + i) = 0;
  }

  return vet;
}