
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "Fila.h"

int main()
{
    int op, res, elem;
    Fila f;

    do{
        do{
            printf("\n --- FILAS DINAMICA CIRCULAR --- ");
            printf("\n Escolha uma opcao");
            printf("\n 1. Criar fila");
            printf("\n 2. Verificar fila vazia");
            printf("\n 3. Inserir no final");
            printf("\n 4. Remover no inicio");
            printf("\n 5. Ler elemento no final");
            printf("\n 6. SAIR");
            printf("\n Opcao: ");
            scanf("%d", &op);
            if((op < 1) || (op > 6)) {

                printf("\nOpcao Invalida! Tente novamente...");
            }
        } while((op < 1) || (op > 6));

        switch(op)
        {
            case 1:
                f = cria_fila();
                printf("Fila criada com sucesso");
                break;

            case 2:
                res = fila_vazia(f);
                if(res == 1)
                    printf("Fila vazia");
                else
                    printf("Fila nao vazia");
                break;

            case 3:
                printf("Informe o elemento a ser inserido: ");
                scanf("%d", &elem);
                res = insere_fim(&f, elem);
                if(res == 1)
                    printf("Elemento enfileirado com sucesso");
                else
                    printf("Elemento nao enfileirado");

                break;

            case 4:
                res = remove_ini(&f, &elem);
                if(res == 1)
                    printf("Elemento %d removido com sucesso", elem);
                else
                    printf("Elemento nao removido");

                break;

            case 5:
                res = le_final(f, &elem);
                if(res == 1)
                    printf("Elemento no final: %d", elem);
                else
                    printf("Nao foi possivel realizar a leitura");

                break;


            default:
				printf("Pressione qualquer tecla para FINALIZAR...");
        }
    } while(op != 6);

    return 0;
}
