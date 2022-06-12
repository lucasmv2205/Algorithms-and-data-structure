// Nome: ListaOrdenada
// Dados: numeros inteiros
// Lista das operações: inicializa_lista, lista_vazia, lista_cheia, insere_ord, remove_ord, obtem_valor_elemento, libera_lista, imprime_lista
typedef struct lista Lista;

// Entradas: nenhuma
// Pre-condicao: nenhuma
// Processo: criar uma Lista sem valores definidos e aloca espaco na memoria
// Saida: endereço de uma Lista criada
// Pos-condicao: nenhuma
Lista *inicializa_lista();

// Entradas: endereco de uma Lista
// Pre-condicao: nenhuma
// Processo: Verifica se existe algum elemento na lista ou se ela nao possui elementos
// Saida: 1 caso lista esteja vazia, 0 se nao houver elementos ou lista for nula
// Pos-condicao: nenhuma
int lista_vazia(Lista *lst);

// Entradas: endereco de uma Lista
// Pre-condicao: lista ser valida
// Processo: Verifica se a quantidade maxima, 20 elementos, foi atingida
// Saida: 1 caso lista esteja cheia, 0 se quantidade maxima nao foi atingida, ou seja, lista nao cheia
// Pos-condicao: nenhuma
int lista_cheia(Lista *lst);

// Entradas: endereco de uma lista e numero inteiro a ser inserido
// Pre-condicao: lista valida e nao estar cheia
// Processo: percorrer a lista ate encontrar posicao correta de insercao para garantir a ordenacao(proximo for o maior elemento). Inserir o elemento na posicao escolhida.
// Saida: 1 se sucesso ou 0 se falha
// Pos-condicao: lista de entrada com um elemento a mais
int insere_ord(Lista *lst, int elemento);

// Entradas: endereco de uma lista e o numero inteiro a ser removido
// Pre-condicao: lista ser valida e nao estar vazia
// Processo: percorrer a lista ate econtrar o elemento desejado ou um elemento maior. Se o elemento existe, remover ele da lista.
// Saida: 1 se sucesso ou 0 se falha
// Pos-condicao: lista de entrada com um elemento a menos
int remove_ord(Lista *lst, int elemento);

// Entradas: endereco da lista e elemento desejado
// Pre-condicao: lista ser valida e nao estar vazia
// Processo: percorrer a lista ate encontrar o elemento desejado. Se elemento existir, printar elemento.
// Saida: nenhuma
// Pos-condicao: nenhuma
int obtem_valor_elemento(Lista *lst, int pos_elemento);

// Entradas: endereco de memoria do endereco de memoria de uma Lista
// Pre-condicao: nenhuma
// Processo: limpar a memoria utilizada pela Lista e limpar seu endereco de memoria tambem
// Saida: nenhuma
// Pos-condicao: endereco da lista liberado
void libera_lista(Lista **lst);

// Entradas: endereco da lista
// Pre-condicao: lista ser valida e nao estar vazia
// Processo: percorrer a lista e printar cada elemento.
// Saida: nenhuma
// Pos-condicao: nenhuma
void imprime_lista(Lista *lst);