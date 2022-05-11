#include <stdio.h>

int main()
{
  int mat[6][6];
  int i = 0, j = 0;
  int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, soma6 = 0, soma7 = 0, soma8 = 0;
  int somaDiagonalP = 0;

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      mat[i][j] = 1;
      // printf("\nDigite o valor para matriz[%d][%d]: ", i + 1, j + 1);
      // scanf("%d", &mat[i][j]);
    }
  }
  printf("\n");

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      // imprimindo elementos acima da diagonal principal
      if (j > i)
      {
        soma1 = soma1 + mat[i][j];
      }
    }
  }

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      // imprimindo elementos acima da diagonal secundaria
      if (i + j < 6 - 1)
      {
        soma2 = soma2 + mat[i][j];
      }
    }
  }

  // penultimo
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (i < j && j < 3 && i < 3)
      {
        somaDiagonalP = somaDiagonalP + mat[i][j];
      }
      if (i + j < 6 - 1)
      {
        soma7 = soma7 + mat[i][j];
      }
    }
  }
  soma7 = soma7 - somaDiagonalP;

  // penultimo
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (i < j && j < 3 && i < 3)
      {
        somaDiagonalP = somaDiagonalP + mat[i][j];
      }
      if (i > j)
      {
        soma8 = soma8 + mat[i][j];
      }
    }
  }
  soma8 = soma8 - mat[5][0] - mat[4][1] - mat[3][2];

  printf("\n\n\n");
  printf("\n");

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\n%d", soma1);
  printf("\n%d", soma2);
  printf("\n%d", soma7);
  printf("\n%d", soma8);

  return 0;
}