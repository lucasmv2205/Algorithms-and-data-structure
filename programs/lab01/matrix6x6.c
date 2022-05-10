#include <stdio.h>

int main()
{
  int mat[6][6];
  int i = 0, j = 0;
  int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, soma6 = 0, soma7 = 0, soma8 = 0;

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      printf("\nDigite o valor da linha %d e coluna %d: ", i + 1, j + 1);
      scanf("%d", &mat[i][j]);
    }
  }

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (j >= i)
      {
        soma1 = soma1 + mat[i][j];
      }
    }
  }

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }

  printf("%d", soma1);

  return 0;
}