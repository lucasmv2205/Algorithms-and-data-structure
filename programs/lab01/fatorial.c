#include <stdio.h>

int fatorial(int number)
{
  int res;

  for (res = 1; number > 1; number--)
  {
    res = res * number;
  }

  return res;
}

int main()
{
  int fat, num;
  printf("Digite um numero:\n ");
  scanf("%d", &num);

  fat = fatorial(num);

  printf("\n%d\n", fat);

  return 0;
}
