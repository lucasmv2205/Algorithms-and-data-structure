typedef struct fila *Fila;

Fila cria_fila();
int fila_vazia(Fila fil);
int insere_fim(Fila fil, int elem);
int remove_ini(Fila fil, int *elem);
int le_final(Fila fil, int *elem);
