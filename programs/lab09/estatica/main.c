// main.c
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
  int op;
  Pilha pil;
  int valor, flag4;

  do
  {
    do
    {
      printf("\n --- PILHA ESTATICAS SEQUENCIAIS --- \n\n");
      printf(" Escolha uma opcao\n");
      printf(" 1. Criar pilha\n");
      printf(" 2. Verificar pilha vazia\n");
      printf(" 3. Verificar pilha cheia\n");
      printf(" 4. Inserir elemento\n");
      printf(" 5. Remover elemento\n");
      printf(" 6. le topo\n");
      printf(" 9. SAIR\n");
      printf(" Opcao: ");
      scanf("%d", &op);
      if ((op < 1) || (op > 9))
      {

        printf("\n\n Opcao Invalida! Tente novamente...");
        system("CLS || clear");
      }
    } while ((op < 1) || (op > 9));

    switch (op)
    {
    case 1:
      printf("\n\n Criar pilha");
      pil = cria_pilha();
      break;

    case 2:
      printf("\n\n Ver se Pilha esta vazia");
      if (pilha_vazia(pil))
      {
        printf("\n Pilha vazia");
      }
      else
        printf("\nPilha nao vazia");

      break;

    case 3:
      printf("\n\n Ver se pilha esta cheia");
      int flag2 = pilha_cheia(pil);
      if (flag2 == 1)
      {
        printf("\nPilha cheia");
      }
      if (flag2 == 0)
      {
        printf("\nPilha nao cheia");
      }
      break;

    case 4:
      printf("\n\n Inserir elemento");
      int elem;
      printf("\n Qual elemento deseja inserir: ");
      scanf("%d", &elem);
      if (push(pil, elem))
      {
        printf("\n Elemento inserido com sucesso");
      }
      else
        printf("\nFalha na insercao");

      break;

    case 5:
      flag4 = pop(pil, &valor);
      if (flag4 == 1)
      {
        printf("\n Elemento removido: %d", valor);
      }
      else
        printf("\nFalha na remocao");

      break;

    case 6:
      printf("\n\n Le topo");
      int topo;
      int flag6 = le_topo(pil, &topo);
      if (flag6 == 1)
        printf("\n valor do topo %d", topo);
      else
        printf("\n erro ao ler topo");
      break;

    default:
      printf("\n\n Pressione qualquer tecla para FINALIZAR...");
    }
  } while (op != 9);

  return 0;
}