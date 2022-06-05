// Nome: Ponto
// Dados: numeros reais
// Lista das operações: gera_pto, set_pto, get_pto, libera_pto, distancia_pto

typedef struct Ponto Ponto;

// Entradas: nenhuma
// Pre-condicao: nenhuma
// Processo: criar um Ponto sem valores de coordenadas definidos e aloca espaco na memoria
// Saida: endereço de um Ponto criado
// Pos-condicao: nenhuma
Ponto *gera_pto();

// Entradas: endereco de um Ponto e valores do tipo float das coordenadas x e y
// Pre-condicao: Ponto ter um endereco diferente de nulo
// Processo: atribuis as coordenadas x e y do Ponto as coordenadas passadas para funcao
// Saida: 1 caso sucesso no processo, 0 se falha
// Pos-condicao: Ponto com valores de coordenadas
int set_pto(float x, float y, Ponto *p);

// Entradas: endereco de um Ponto e valores do tipo float das coordenadas x e y
// Pre-condicao: Ponto ter um endereco diferente de nulo
// Processo: atribuir aos valores x e y enviados a funcao o valor das coordenadas x e y  do ponto que tambem foi enviado a funcao
// Saida: 1 caso sucesso no processo, 0 se falha
// Pos-condicao: os valores do tipo float das coordenadas x e y do ponto
int get_pto(Ponto *p, float *X, float *Y);

// Entradas: endereco de memoria do endereco de memoria de um Ponto
// Pre-condicao: nenhuma
// Processo: limpar a memoria utilizada pelo Ponto e limpar seu endereco de memoria tambem
// Saida: nenhuma
// Pos-condicao: endereco do ponto liberado
void libera_pto(Ponto **p);

// Entradas: endereco de dois Pontos
// Pre-condicao: os Pontos terem enderecos diferentes de nulo
// Processo: calcular a distancia entre dois Pontos
// Saida: o valor da distancia entre os Pontos calculada
// Pos-condicao: nenhuma
float distancia_pto(Ponto *p1, Ponto *p2);