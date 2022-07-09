typedef struct no *Lista;

Lista cria_lista();

int lista_vazia(Lista lst);

int insere_ord(Lista *lst, int exp, int coef);

int remove_ord(Lista *lst, int exp);

int tamanho(Lista lst);

void imprime_lista(Lista lst);

void libera_lista(Lista *lst);