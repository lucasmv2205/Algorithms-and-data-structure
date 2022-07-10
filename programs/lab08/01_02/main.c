#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "listaNaoOrdenada.h"

int main()
{
    int op, res, elem, tam, tam_lista, pos;
    double med;
    Lista lst, lst2;

    do
    {
        do
        {
            printf(" --- LISTAS DINAMICAS ENCADEADAS CIRCULAR --- \n\n");
            printf(" Escolha uma opcao\n");
            printf(" 1. Criar lista\n");
            printf(" 2. Verificar lista vazia\n");
            printf(" 3. Inserir elemento no final\n");
            printf(" 4. Inserir elemento no inicio\n");
            printf(" 5. Remover elemento no inicio\n");
            printf(" 6. Remover elemento no final\n");
            printf(" 7. Imprimir lista\n");
            printf(" 8. Obter valor de um elemento\n");
            printf(" 9. Liberar lista\n");
            printf(" 10. SAIR\n");
            printf(" Opcao: ");
            scanf("%d", &op);
            if ((op < 1) || (op > 13))
            {
                printf("\n\n Opcao Invalida! Tente novamente...");
            }
        } while ((op < 1) || (op > 10));

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
            printf("\n\n Informe o elemento a ser inserido: ");
            scanf("%d", &elem);
            res = insere_final(&lst, elem);
            if (res == 1)
                printf("\n\n Elemento inserido com sucesso");
            else
                printf("\n\n Elemento nao inserido");

            break;

        case 4:
            printf("\n\n Informe o elemento a ser inserido: ");
            scanf("%d", &elem);
            res = insere_inicio(&lst, elem);
            if (res == 1)
                printf("\n\n Elemento inserido com sucesso");
            else
                printf("\n\n Elemento nao inserido");

            break;

        case 5:
            res = remove_inicio(&lst, &elem);
            if (res == 1)
                printf("\n\n Elemento %d removido com sucesso", elem);
            else
                printf("\n\n Elemento nao removido");

            break;

        case 6:
            res = remove_final(&lst, &elem);
            if (res == 1)
                printf("\n\n Elemento %d removido com sucesso", elem);
            else
                printf("\n\n Elemento nao removido");

            break;

        case 7:
            printf("\n\n LISTA\n");
            imprime_lista(lst);

            break;

        case 8:
            printf("\n Informe a posicao do elemento: ");
            scanf("%d", &pos);
            res = obtem_valor_elem(lst, pos, &elem);
            if (res == 1)
                printf("\n\n O elemento na posicao %d eh: %d", pos, elem);
            else
                printf("\n\n Elemento nao encontrado");

            break;

        case 9:
            libera_lista(&lst);
            break;

        default:
            printf("\n\n Pressione qualquer tecla para FINALIZAR...");
        }
    } while (op != 10);

    return 0;
}