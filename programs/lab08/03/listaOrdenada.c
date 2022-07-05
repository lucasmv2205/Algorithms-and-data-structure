
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include "listaOrdenada.h"

struct no{
    int info;
    struct no *prox;
    struct no *ant;
};

Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista lst){
    if(lst == NULL)
        return 1;
    else
        return 0;
}

int insere_ord(Lista *lst, int elem){
    Lista N = (Lista) malloc(sizeof(struct no));
    if(N == NULL){
        return 0;
    }
    N->info = elem;
    N->ant = NULL;
    N->prox = *lst;
    if(lista_vazia(*lst) == 0)
        (*lst)->ant = N;
    *lst = N;

    return 1;
}

int remove_ord(Lista *lst, int elem){
    if(lista_vazia(*lst))
        return 0;
    Lista aux = *lst;
    while(aux->prox != NULL && aux->info != elem)
        aux = aux->prox;
    if(aux->info != elem)
        return 0;
    if(aux->prox != NULL)
        aux->prox->ant = aux->ant;
    if(aux->ant != NULL)
        aux->ant->prox = aux->prox;
    if(aux == *lst)
        *lst = aux->prox;

    free(aux)

    return 1;
}

int remove_final(Lista *lst, int *elem){
    // trata lista vazia
    if(lista_vazia(*lst) == 1)
        return 0;
    Lista aux = (*lst)->prox; // faz aux apontar para o 1 no
    *elem = (*lst)->info; // retorna o valor do no a ser removido;
    if(*lst == (*lst)->prox) // trata lista com 1 unico no
        *lst = NULL;

    else{ // trata lista com mais de um elemento
        while(aux->prox != (*lst)) // percorrendo ate o ultimo elemento
            aux = aux->prox;
        aux->prox = (*lst)->prox; // penultimo elem aponta para primeiro elem
        *lst = aux;

    //free(aux);
    return 1;
    }
}

int obtem_valor_elemento(Lista lst, int pos, int *elem){

    return 1
}

void imprime_lista(Lista lst){
    Lista aux = lst->prox;
    Lista aux2 = aux->prox;

    printf("%d ", aux->info);
    while(aux != aux2){
        printf("%d ", aux2->info);
        aux2 = aux2->prox;
    }
}

