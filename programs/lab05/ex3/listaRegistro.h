// Nome: Ponto
// Dados: numeros reais
// Lista das operações: gera_pto, set_pto, get_pto, libera_pto, distancia_pto
typedef struct lista Lista;

// Entradas: nenhuma
// Pre-condicao: nenhuma
// Processo: criar um Ponto sem valores de coordenadas definidos e aloca espaco na memoria
// Saida: endereço de um Ponto criado
// Pos-condicao: nenhuma
Lista *inicializa_lista();

// Entradas: endereco de um Ponto e valores do tipo float das coordenadas x e y
// Pre-condicao: Ponto ter um endereco diferente de nulo
// Processo: atribuis as coordenadas x e y do Ponto as coordenadas passadas para funcao
// Saida: 1 caso sucesso no processo, 0 se falha
// Pos-condicao: Ponto com valores de coordenadas
int lista_vazia(Lista *lst);

// Entradas: endereco de um Ponto e valores do tipo float das coordenadas x e y
// Pre-condicao: Ponto ter um endereco diferente de nulo
// Processo: atribuir aos valores x e y enviados a funcao o valor das coordenadas x e y  do ponto que tambem foi enviado a funcao
// Saida: 1 caso sucesso no processo, 0 se falha
// Pos-condicao: os valores do tipo float das coordenadas x e y do ponto
int lista_cheia(Lista *lst);

// Entradas: endereco de memoria do endereco de memoria de um Ponto
// Pre-condicao: nenhuma
// Processo: limpar a memoria utilizada pelo Ponto e limpar seu endereco de memoria tambem
// Saida: nenhuma
// Pos-condicao: endereco do ponto liberado
int insere_elemento(Lista *lst, char *nome, int volume, float preco);

// Entradas: endereco de dois Pontos
// Pre-condicao: os Pontos terem enderecos diferentes de nulo
// Processo: calcular a distancia entre dois Pontos
// Saida: o valor da distancia entre os Pontos calculada
// Pos-condicao: nenhuma
int remove_ultimo(Lista *lst);

void libera_lista(Lista **lst);

void imprime_tabela(Lista *lst);