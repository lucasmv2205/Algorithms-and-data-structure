#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "listaOrdenada.h"

int main()
{
  int op, res, exp, coef, tam, tam_lista;
  double med;
  Lista lst, lst2;

  do
  {
    do
    {
      printf(" --- LISTAS DINAMICAS ENCADEADAS --- \n\n");
      printf(" Escolha uma opcao\n");
      printf(" 1. Criar lista\n");
      printf(" 2. Verificar lista vazia\n");
      printf(" 3. Inserir elemento\n");
      printf(" 4. Excluir elemento\n");
      printf(" 5. Imprimir lista\n");
      printf(" 6. Obter tamanho da lista\n");
      printf(" 12. Liberar lista\n");
      printf(" 13. SAIR\n");
      printf(" Opcao: ");
      scanf("%d", &op);
      if ((op < 1) || (op > 13))
      {
        printf("\n\n Opcao Invalida! Tente novamente...");
      }
    } while ((op < 1) || (op > 13));

    switch (op)
    {
    case 1:
      lst = cria_lista();
      printf("\n\n Lista criada com sucesso");

      break;

    case 2:
      res = lista_vazia(lst);
      if (res == 1)
        printf("\n\n Lista vazia");
      else
        printf("\n\n Lista nao vazia");

      break;

    case 3:
      printf("\n\n Informe o coeficiente: ");
      scanf("%d", &coef);
      printf("\n\n Informe o expoente: ");
      scanf("%d", &exp);
      res = insere_ord(&lst, exp, coef);
      if (res == 1)
        printf("\n\n Elemento inserido com sucesso");
      else
        printf("\n\n Elemento nao inserido");

      break;

    case 4:
      printf("\n\n Informe o expoente a ser removido: ");
      scanf("%d", &exp);
      res = remove_ord(&lst, exp);
      if (res == 1)
        printf("\n\n Elemento removido com sucesso");
      else
        printf("\n\n Elemento nao removido");

      break;

    case 5:
      printf("\n\n LISTA\n");
      imprime_lista(lst);

      break;

    case 6:
      tam = tamanho(lst);
      printf("\n\n Tamanho da lista: %d", tam);

      break;

    case 7:

      break;

    case 8:

      break;

    case 9:

      break;

    case 10:

      break;

    case 11:

      break;

    case 12:
      libera_lista(&lst);

      break;

    default:
      printf("\n\n Pressione qualquer tecla para FINALIZAR...");
    }
  } while (op != 13);

  return 0;
}