#include <stdio.h>
#include <stdlib.h>
#include "listaBebidas.h"

int main()
{
  int op;
  Lista lst;

  do
  {
    do
    {
      printf("\n --- LISTAS BEBIDAS --- \n\n");
      printf(" Escolha uma opcao\n");
      printf(" 1. Criar lista\n");
      printf(" 2. Verificar lista vazia\n");
      printf(" 4. Inserir elemento\n");
      printf(" 5. Remover ultimo elemento\n");
      printf(" 6. Liberar lista\n");
      printf(" 8. Imprimir lista\n");
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
      printf("\n\n Criar lista");
      lst = cria_lista();
      break;

    case 2:
      printf("\n\n Ver se lista esta vazia");
      int flag = lista_vazia(lst);
      if (flag == 1)
      {
        printf("\nLista vazia");
      }
      if (flag == 0)
      {
        printf("\nLista nao vazia");
      }
      break;

    case 4:
      printf("\n\n Inserir elemento");
      char nome[50];
      int volume;
      float preco;
      printf("\n Qual nome do elemento que deseja inserir: ");
      fflush(stdin);
      gets(nome);
      printf("\n Qual volume do elemento: ");
      scanf("%d", &volume);
      printf("\n Qual preco do elemento: ");
      scanf("%f", &preco);
      int flag3 = insere_elemento(&lst, nome, volume, preco);
      if (flag3 == 1)
      {
        printf("\n Elemento inserido com sucesso");
      }
      if (flag3 == 0)
      {
        printf("\nFalha na insercao");
      }
      break;

    case 5:
      printf("\n\n Remover ultimo elemento ");
      int flag4 = remove_ultimo(&lst);
      if (flag4 == 1)
      {
        printf("\n Elemento removido com sucesso");
      }
      if (flag4 == 0)
      {
        printf("\nFalha na remocao");
      }
      break;

    case 6:
      printf("\n\n Liberar lista");
      libera_lista(&lst);
      break;

    case 8:
      printf("\n\n Imprimir lista");
      imprime_lista(lst);
      break;

    default:
      printf("\n\n Pressione qualquer tecla para FINALIZAR...");
    }
  } while (op != 9);

  return 0;
}