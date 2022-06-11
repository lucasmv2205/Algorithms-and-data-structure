#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#include "listaOrdenada.h"

struct lista
{
  int arr[MAX];
  int fim;
};
typedef struct lista Lista;

Lista *inicializa_lista()
{
  Lista *lst;
  lst = (Lista *)malloc(sizeof(Lista));

  if (lst != NULL)
  {
    lst->fim = 0; // lista vazia
  }
  return lst;
}

int lista_vazia(Lista *lst)
{
  if (lst->fim == 0)
  {
    return 1; // lista vazia
  }
  else
  {
    return 0; // lista nao vazia
  }
}

int lista_cheia(Lista *lst)
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

int insere_ord(Lista *lst, int elemento)
{
  if (lst == NULL || lista_cheia(lst) == 1)
  {
    return 0; // falha na insercao
  }

  // Trata lista vazia ou elemento >= ultimo da lista
  if (lista_vazia(lst) == 1 || elemento >= lst->arr[lst->fim - 1])
  {
    lst->arr[lst->fim] = elemento; // insere no final
  }
  else
  {
    int i, aux = 0;
    while (elemento >= lst->arr[aux]) // percorrimento
      aux++;
    for (i = lst->fim; i > aux; i--)
      lst->arr[i] = lst->arr[i - 1];
    lst->arr[aux] = elemento;
  }
  lst->fim++;
  return 1; // sucesso
}

int remove_ord(Lista *lst, int elemento)
{
  if (lst == NULL || lista_vazia(lst) == 1 || elemento < lst->arr[0] || elemento > lst->arr[lst->fim - 1])
  {
    return 0; // falha na remocao
  }
  int i, aux = 0;

  while (aux < lst->fim && lst->arr[aux] < elemento)
  {
    aux++;
    if (aux == lst->fim || lst->arr[aux] > elemento)
    {
      return 0; // falha
    }

    // Deslocamento a esquerda do sucessor até o final da lista
    for (i = aux + 1; i < lst->fim; i++)
    {
      lst->arr[i - 1] = lst->arr[i];
    }
    lst->fim--; // decremento do fim
    return 1;   // sucesso
  }
}

int obtem_valor_elemento(Lista *lst, int pos_elemento)
{
  if (lst == NULL && pos_elemento > MAX)
  {
    return 0; // falha
  }

  for (int i = 0; i < MAX; i++)
  {
    if (i == pos_elemento)
    {
      return lst->arr[i];
    }
  }
}

void imprime_lista(Lista *lst)
{
  if (lst == NULL)
  {
    printf("Lista nao existe");
  }
  else
  {
    for (int i = 0; i < lst->fim; i++)
    {
      printf("\n%d", lst->arr[i]);
    }
  }
}

void libera_lista(Lista **lst)
{
  free(*lst);
  *lst = NULL;
}