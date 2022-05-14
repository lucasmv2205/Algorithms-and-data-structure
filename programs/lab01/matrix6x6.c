#include <stdio.h>

int main()
{
  int mat[6][6];
  int i = 0, j = 0;
  int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, soma6 = 0, soma7 = 0, soma8 = 0;
  int somaDiagonalP = 0;
  int somaAbaixoDiagPrinc = 0;
  int somaAbaixoDiagSec = 0;
  int somaAcimaDiagPrinc = 0;
  int somaTotal = 0;

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

  // 1
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      // elementos acima da diagonal principal
      if (j > i)
      {
        soma1 = soma1 + mat[i][j];
      }
    }
  }

  // 2
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      // elementos acima da diagonal secundaria
      if (i + j < 6 - 1)
      {
        soma2 = soma2 + mat[i][j];
      }
    }
  }

  // 3
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (j > i && j < 5 - i)
      {
        soma3 = soma3 + mat[i][j];
      }
    }
  }

  // 4
  for (i = 1; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (j < i && j < (5 - i))
      {
        soma4 = soma4 + mat[i][j];
      }
    }
  }

  // 5
  for (i = 1; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (j > i && j > (5 - i))
      {
        soma5 = soma5 + mat[i][j];
      }
      if (j < i && j < (5 - i))
      {
        soma5 = soma5 + mat[i][j];
      }
    }
  }

  // 6
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      if (j > i && j < (5 - i))
      {
        soma6 = soma6 + mat[i][j];
      }
      if (j < i && j > (5 - i))
      {
        soma6 = soma6 + mat[i][j];
      }
    }
  }

  // 7
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

  // 8
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

  printf("\nMatriz inserida\n");
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\nSoma 1: %d", soma1);
  printf("\nSoma 2: %d", soma2);
  printf("\nSoma 3: %d", soma3);
  printf("\nSoma 4: %d", soma4);
  printf("\nSoma 5: %d", soma5);
  printf("\nSoma 6: %d", soma6);
  printf("\nSoma 7: %d", soma7);
  printf("\nSoma 8: %d", soma8);

  return 0;
}