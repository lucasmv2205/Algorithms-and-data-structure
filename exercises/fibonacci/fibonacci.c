#include <stdio.h>

int main()
{
  int vet[20], i;

  for (i = 0; i < 20; i++)
  {
    if (i < 2)
    {
      vet[i] = 1;
    }
    else
    {
      vet[i] = vet[i - 1] + vet[i - 2];
    }
    printf("%d\t", vet[i]);
  }

  return 0;
}