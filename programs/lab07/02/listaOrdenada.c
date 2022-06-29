// ListaNaoOrdenaca.c

#include <stdio.h>
#include <stdlib.h>
#include "listaOrdenada.h"

struct no
{
  int info;
  struct no *prox;
};
typedef struct no *Lista;

Lista cria_lista()
{
  Lista cab;
  cab = (Lista)malloc(sizeof(struct no));
  if (cab != NULL)
  {
    cab->prox = NULL;
    cab->info = 0;
  }
  return cab;
}

int lista_vazia(Lista lst)
{
  if (lst->prox == NULL)
  {
    return 1; // lista vazia
  }
  else
  {
    return 0;
  }
}
/*
int lista_cheia(Lista lst)
{
  if (lst->fim == MAX)
  {
    return 1; // lista cheia
  }
  else
  {
    return 0; // lista nao cheia
  }
}
*/
int insere_ord(Lista *lst, int elemento)
{
  Lista N = (Lista)malloc(sizeof(struct no));
  if (N == NULL)
  {
    return 0; // Falha: Nó nao alocado
  }
  N->info = elemento;
  if (lista_vazia(*lst) || elemento <= (*lst)->info)
  {
    N->prox = *lst;
    *lst = N;
    return 1;
  }
  Lista aux = *lst;
  while (aux->prox != NULL && aux->prox->info < elemento)
    aux = aux->prox;
  N->prox = aux->prox;
  aux->prox = N;
  (*lst)->info++;
  return 1;
}

int remove_ord(Lista *lst, int elemento)
{
  if (lista_vazia(*lst) == 1)
  {
    return 0; // falha
  }
  Lista aux = *lst;
  if (elemento == (*lst)->info)
  {
    *lst = aux->prox;
    free(aux);
    return 1;
  }
  while (aux->prox != NULL && aux->prox->info < elemento)
    aux = aux->prox;
  if (aux->prox == NULL || aux->prox->info > elemento)
    return 0;
  Lista aux2 = aux->prox;
  aux->prox = aux2->prox;
  free(aux2);
  (*lst)->info--;
  return 1;
}

int obtem_valor_elemento(Lista *lst, int pos_elemento)
{
  int cont = 0;
  *lst = (*lst)->prox;
  if (lista_vazia(*lst) == 1)
  {
    return 0; // falha
  }
  for (*lst; *lst != NULL; lst = (*lst)->prox)
  {
    if (cont == pos_elemento)
    {
      return (*lst)->info;
    }
    cont++;
  }
}

void imprime_lista(Lista *lst)
{
  if (lista_vazia(*lst) || (*lst) == NULL)
  {
    printf("\nLista vazia");
  }
  *lst = (*lst)->prox;
  printf("\n");
  for (*lst; *lst != NULL; *lst = (*lst)->prox)
  {
    printf("%d\t", (*lst)->info);
  }
}

void libera_lista(Lista **lst)
{
  free(*lst);
  *lst = NULL;
}