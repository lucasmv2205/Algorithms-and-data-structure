#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "metodos_ord.h"
#define TAM_1 10000
#define TAM_2 25000
#define TAM_3 50000
#define TAM_4 75000
#define TAM_5 100000

int main()
{
  Transacao transacoes_1[TAM_1];
  Transacao transacoes_1_merge_sort[TAM_1];
  Transacao transacoes_2[TAM_2];
  Transacao transacoes_3[TAM_3];
  Transacao transacoes_4[TAM_4];
  Transacao transacoes_5[TAM_5];
  srand(time(NULL));

  // Gera um cpf aleatório
  int *cpf_int;
  cpf_int = cpf_generator();

  // insercao aleatoria

  for (int i = 0; i < TAM_1; i++)
  {
    int num_transacao = rand() % 10000;
    double valor_transacao = (double)num_transacao / 100;

    int *cpf_int;
    char cpf_char[11];

    transacoes_1[i].numero_transacao = num_transacao;
    transacoes_1[i].valor_transacao = valor_transacao;

    transacoes_1_merge_sort[i].numero_transacao = num_transacao;
    transacoes_1_merge_sort[i].valor_transacao = valor_transacao;
  }

  for (int i = 0; i < TAM_2; i++)
  {
    int num_transacao = rand() % 10000;
    double valor_transacao = (double)num_transacao / 100;

    int *cpf_int;
    char cpf_char[11];

    transacoes_2[i].numero_transacao = num_transacao;
    transacoes_2[i].valor_transacao = valor_transacao;
  }

  for (int i = 0; i < TAM_3; i++)
  {
    int num_transacao = rand() % 10000;
    double valor_transacao = (double)num_transacao / 100;

    int *cpf_int;
    char cpf_char[11];

    transacoes_3[i].numero_transacao = num_transacao;
    transacoes_3[i].valor_transacao = valor_transacao;
  }

  for (int i = 0; i < TAM_4; i++)
  {
    int num_transacao = rand() % 10000;
    double valor_transacao = (double)num_transacao / 100;

    int *cpf_int;
    char cpf_char[11];

    transacoes_4[i].numero_transacao = num_transacao;
    transacoes_4[i].valor_transacao = valor_transacao;
  }

  for (int i = 0; i < TAM_5; i++)
  {
    int num_transacao = rand() % 10000;
    double valor_transacao = (double)num_transacao / 100;

    int *cpf_int;
    char cpf_char[11];

    transacoes_5[i].numero_transacao = num_transacao;
    transacoes_5[i].valor_transacao = valor_transacao;
  }

  // ordenacao

  clock_t tic5 = clock();
  mergesort_int(transacoes_1_merge_sort, 0, TAM_1 - 1);
  clock_t toc5 = clock();

  printf("merge_sort: %f seconds\n", (double)(toc5 - tic5) / CLOCKS_PER_SEC);

  return 0;
}
