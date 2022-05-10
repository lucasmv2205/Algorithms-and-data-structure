#include <stdio.h>

int main()
{
  int vet[5] = {1, 2, 3, 4, 5};
  int i, j;
  int rvet[5];

  for (i = 0, j = 5; i < 5; i++, j--)
  {
    rvet[i] = vet[j - 1];
  }
  for (i = 0; i < 5; i++)
  {
    printf("%d\n", rvet[i]);
  }

  return 0;
}