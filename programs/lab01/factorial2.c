#include <stdio.h>

double fatorial(double number)
{
  double res;

  for (res = 1; number > 1; number--)
  {
    res = res * number;
  }

  return res;
}

int main()
{
  double fat, num;
  printf("Digite um numero:\n ");
  scanf("%lf", &num);

  fat = fatorial(num);

  printf("\n%.2lf\n", fat);

  return 0;
}
