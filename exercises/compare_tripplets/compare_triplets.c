#include <stdio.h>

int main()
{
  int i, a[3] = {5, 6, 7}, b[3] = {3, 6, 10};
  int res[2] = {0, 0};

  for (i = 0; i < 3; i++)
  {
    if (a[i] > b[i])
    {
      res[0]++;
    }
    if (a[i] < b[i])
    {
      res[1]++;
    }
  }
  for (i = 0; i < 2; i++)
  {
    printf("%d\t", res[i]);
  }

  return 0;
}