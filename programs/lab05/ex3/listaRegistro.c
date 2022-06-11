#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX 20
#include "listaRegistro.h"

struct registro
{
  char nome[20];
  int volume;
  float preco;
};
typedef struct registro Registro;

struct lista
{
  Registro Registro[MAX];
  // int arr[MAX];
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

int insere_elemento(Lista *lst, char *nome, int volume, float preco)
{
  if (lst == NULL || lista_cheia(lst) == 1)
  {
    return 0; // falha na insercao
  }
  lst->Registro[lst->fim].preco = preco;
  lst->Registro[lst->fim].volume = volume;
  strcpy(lst->Registro[lst->fim].nome, nome);
  lst->fim++;
  return 1; // sucesso na insercao
}

int remove_ultimo(Lista *lst)
{
  if (lst == NULL || lista_vazia(lst) == 1)
  {
    return 0; // falha na remocao
  }

  lst->fim--;
  return 1; // sucesso
}

void imprime_tabela(Lista *lst)
{
  if (lst == NULL)
  {
    printf("Lista nao existe");
  }
  else
  {
    for (int i = 0; i < lst->fim; i++)
    {
      printf("\n%s", lst->Registro[i].nome);
      printf("\n%.2f", lst->Registro[i].preco);
      printf("\n%d", lst->Registro[i].volume);
      printf("\n");
    }
  }
}

void libera_lista(Lista **lst)
{
  free(*lst);
  *lst = NULL;
}