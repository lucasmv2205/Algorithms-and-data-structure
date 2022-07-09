#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "listaOrdenada.h"

// lista sera ordenada pelo exp
struct elemento
{
  int coef;
  int exp;
};
typedef struct elemento Elemento;

struct no
{
  Elemento info;
  struct no *prox;
};

Lista cria_lista()
{
  return NULL;
}

int lista_vazia(Lista lst)
{
  if (lst == NULL)
    return 1;
  else
    return 0;
}

int insere_ord(Lista *lst, int exp, int coef)
{
  // aloca um novo no
  Lista N = (Lista)malloc(sizeof(struct no));
  if (N == NULL)
  {
    return 0; // Nó nao alocado
  }
  N->info.exp = exp;
  N->info.coef = coef;
  if (lista_vazia(*lst) == 1 || exp < (*lst)->info.exp)
  {
    N->prox = *lst;
    *lst = N;
    return 1;
  }
  Lista aux = *lst;
  while (aux->prox != NULL && aux->prox->info.exp <= exp)
  {
    aux = aux->prox;
  }
  if (aux->info.exp == N->info.exp)
  {
    aux->info.coef = aux->info.coef + N->info.coef;
    free(N);
    return 1;
  }
  N->prox = aux->prox;
  aux->prox = N;
  return 1;
}

int remove_ord(Lista *lst, int exp)
{
  if (lista_vazia(*lst) == 1 || exp < (*lst)->info.exp)
  {
    return 0; // falha
  }
  Lista aux = *lst;
  if (exp == (*lst)->info.exp)
  {
    *lst = aux->prox;
    free(aux);
    return 1;
  }

  while (aux->prox != NULL && aux->prox->info.exp < exp)
  {
    aux = aux->prox;
  }
  if (aux->prox == NULL || aux->prox->info.exp > exp)
  {
    return 0;
  }
  Lista aux2 = aux->prox;
  aux->prox = aux2->prox;
  free(aux2);
  return 1;
}

int tamanho(Lista lst)
{
  int tam = 0;
  for (lst; lst != NULL; lst = lst->prox)
    tam += 1;
  return tam;
}

void imprime_lista(Lista lst)
{
  printf("\n");
  for (lst; lst != NULL; lst = lst->prox)
  {
    printf("%d^%d", lst->info.coef, lst->info.exp);
    printf("\t");
  }
  printf("\n");
}

void libera_lista(Lista *lst)
{
  for (*lst; *lst != NULL; *lst = (*lst)->prox)
  {
    free(*lst);
  }
  *lst = NULL;
  printf("\nLISTA LIBERADA");
}