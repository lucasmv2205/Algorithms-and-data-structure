#include <stdio.h>

struct Endereco
{
  char rua[20], bairro[20], complemento[50], cidade[20], estado[20], pais[20];
  int numero, cep;
};

struct Telefone
{
  int numero, ddd;
};

struct Aniversario
{
  int dia, ano;
  char mes[10];
};

struct Contact
{
  char nome[30], email[30], observacao[50];
  struct Endereco endereco;
  struct Telefone telefone;
  struct Aniversario aniversario;
};

int main()
{
  struct Contact agenda[100];

  return 0;
}