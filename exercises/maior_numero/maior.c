#include <stdio.h>

int main()
{
  int vet[5] = {1, 2, 3, 4, 5}, maior, i;
  for (i = 0; i < 5; i++)
  {
    maior = vet[i];
    if (vet[i] > maior)
    {
      maior = vet[i];
    }
  }
  printf("%d", maior);
  return 0;
}