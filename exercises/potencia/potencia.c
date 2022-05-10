#include <stdio.h>

int potencia(int base, int expoente)
{
  int res = 1, i;

  for (i = 0; i < expoente; i++)
  {
    res = (res * base);
  }

  return res;
}

int main()
{
  int pot;

  pot = potencia(3, 4);

  printf("%d", pot);

  return 0;
}