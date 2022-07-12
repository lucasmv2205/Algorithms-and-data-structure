// main.c
#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
  int op;
  Pilha pil;
  int valor, flag4;
  int elem, topo;

  do
  {
    do
    {
      printf("\n --- PILHA ESTATICAS SEQUENCIAIS --- \n\n");
      printf(" Escolha uma opcao\n");
      printf(" 1. Criar pilha\n");
      printf(" 2. Verificar pilha vazia\n");
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
      pil = cria_pilha();
      printf("\n Pilha criada");
      break;

    case 2:
      if (pilha_vazia(pil))
      {
        printf("\n Pilha vazia");
      }
      else
        printf("\nPilha nao vazia");

      break;

    case 4:
      printf("\n Qual elemento deseja inserir: ");
      scanf("%d", &elem);
      if (push(&pil, elem))
      {
        printf("\n Elemento inserido com sucesso");
      }
      else
        printf("\nFalha na insercao");

      break;

    case 5:
      if (pop(&pil, &valor))
      {
        printf("\n Elemento removido: %d", valor);
      }
      else
        printf("\nFalha na remocao");

      break;

    case 6:
      if (le_topo(&pil, &topo))
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