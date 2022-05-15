#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
struct Endereco
{
  char rua[30], bairro[30], complemento[50], cidade[30], estado[30], pais[30];
  int numero, cep;
};

struct Telefone
{
  int numero, ddd;
};

struct Aniversario
{
  int dia, ano;
  char mes[20];
};

struct Contact
{
  char nome[50], email[30], observacao[50];
  struct Endereco endereco;
  struct Telefone telefone;
  struct Aniversario aniversario;
};
typedef struct Contact Contact;

char toUpperCase(char letter)
{
  if (letter >= 97 && letter <= 122)
  {
    return letter - 32;
  }
  else
  {
    return letter;
  }
}

void mostraString(char *string)
{
  for (int i = 0; string[i] != '\0'; i++)
  {
    printf("%c", string[i]);
  }
}

void mostraStruct(Contact *c)
{
  printf("\n");
  printf("\nNome:");
  mostraString(c->nome);
  printf("\nAniversario:");
  printf("\ndia: %d", c->aniversario.dia);
  printf("\nmes: ");
  mostraString(c->aniversario.mes);
  printf("\nano: ");
  printf("%d", c->aniversario.ano);
  printf("\nemail: ");
  mostraString(c->email);
  printf("\nObs: ");
  mostraString(c->observacao);
  printf("\n");
  printf("Telefone: (%d)%d", c->telefone.ddd, c->telefone.numero);
  printf("\nEndereco");
  printf("\nRua: ");
  mostraString(c->endereco.rua);
  printf("\nNumero: ");
  printf("%d", c->endereco.numero);
  printf("\nBairro: ");
  mostraString(c->endereco.bairro);
  printf("\nComplemento: ");
  mostraString(c->endereco.complemento);
  printf("\nCidade: ");
  mostraString(c->endereco.cidade);
  printf("\nEstado: ");
  mostraString(c->endereco.estado);
  printf("\nPais: ");
  mostraString(c->endereco.pais);
  printf("\nCep: ");
  printf("%d", c->endereco.cep);
  printf("\n\n");
}

void searchByName(Contact *c, int tam)
{
  char nomeBusca[40];
  printf("Digite um nome:\n");
  scanf("%s", nomeBusca);
  for (int i = 0; i < tam; i++)
  {
    int flag = 0;
    for (int j = 0; nomeBusca[j] != '\0'; j++)
    {
      if (c[i].nome[j] == ' ')
      {
        break;
      }
      if (toUpperCase(c[i].nome[j]) == toUpperCase(nomeBusca[j]))
      {
        flag = 1;
      }
      else
      {
        flag = 0;
      }
    }
    if (flag == 1)
    {
      mostraStruct(&c[i]);
      flag = 0;
    }
  }
}

void searchByBirthMonth(Contact *c, int tam)
{
  char mes[40];
  printf("Digite um mes:\n");
  scanf("%s", mes);
  for (int i = 0; i < tam; i++)
  {
    int flag = 0;
    for (int j = 0; mes[j] != '\0'; j++)
    {
      if (toUpperCase(c[i].aniversario.mes[j]) == toUpperCase(mes[j]))
      {
        flag = 1;
      }
      else
      {
        flag = 0;
      }
    }
    if (flag == 1)
    {
      mostraStruct(&c[i]);
      flag = 0;
    }
  }
}

void searchByBirthDayAndMonth(Contact *c, int tam)
{
  char mes[40];
  int dia;
  printf("\nDigite nome de um mes\n");
  scanf("%s", mes);
  printf("\nDigite nome de um dia\n");
  scanf("%d", &dia);
  for (int i = 0; i < tam; i++)
  {
    int flag = 0;
    for (int j = 0; mes[j] != '\0'; j++)
    {
      if (toUpperCase(c[i].aniversario.mes[j]) == toUpperCase(mes[j]))
      {
        flag = 1;
      }
      else
      {
        flag = 0;
      }
    }
    if (flag == 1 && c[i].aniversario.dia == dia)
    {
      mostraStruct(&c[i]);
      flag = 0;
    }
  }
}

void showNomeTelefoneEmail(Contact *c, int tam)
{
  for (int i = 0; i < tam; i++)
  {
    printf("\nNome:");
    mostraString(c[i].nome);
    printf("\nemail: ");
    mostraString(c[i].email);
    printf("\n");
    printf("Telefone: (%d)%d", c[i].telefone.ddd, c[i].telefone.numero);
    printf("\n");
  }
}

void showAllContacts(Contact *c, int tam)
{
  for (int i = 0; i < tam; i++)
  {
    mostraStruct(&c[i]);
  }
}

void alfabeticOrder(Contact vet_contact[], int n_contact)
{
  Contact aux;
  int i, j, y = 0;
  for (y = n_contact; y >= 0; y--)
    for (i = 0; i < n_contact - 1; i++)
      for (j = i + 1; j < n_contact; j++)
      {
        if (toUpperCase(vet_contact[i].nome[y]) > toUpperCase(vet_contact[j].nome[y]))
        {
          aux = vet_contact[i];
          vet_contact[i] = vet_contact[j];
          vet_contact[j] = aux;
        }
      }
}

void createContact(Contact vet_contato[], int indice)
{
  printf("\n\nNome: ");
  fflush(stdin);
  gets(vet_contato[indice].nome);
  printf("\nAniversario: ");
  printf("\nDia: ");
  scanf("%d", &vet_contato[indice].aniversario.dia);
  printf("\nMes: ");
  fflush(stdin);
  gets(vet_contato[indice].aniversario.mes);
  printf("\nAno: ");
  scanf("%d", &vet_contato[indice].aniversario.ano);
  printf("\nEmail: ");
  fflush(stdin);
  gets(vet_contato[indice].email);
  printf("\nObservacao: ");
  fflush(stdin);
  gets(vet_contato[indice].observacao);
  printf("\nDDD: ");
  scanf("%d", &vet_contato[indice].telefone.ddd);
  printf("\nNumero: ");
  scanf("%d", &vet_contato[indice].telefone.numero);
  printf("\nEndereco");
  printf("\nRua: ");
  fflush(stdin);
  gets(vet_contato[indice].endereco.rua);
  printf("\nNumero: ");
  scanf("%d", &vet_contato[indice].endereco.numero);
  printf("\nBairro: ");
  fflush(stdin);
  gets(vet_contato[indice].endereco.bairro);
  printf("\nComplemento: ");
  fflush(stdin);
  gets(vet_contato[indice].endereco.complemento);
  printf("\nCidade: ");
  fflush(stdin);
  gets(vet_contato[indice].endereco.cidade);
  printf("\nEstado: ");
  fflush(stdin);
  gets(vet_contato[indice].endereco.estado);
  printf("\nPais: ");
  fflush(stdin);
  gets(vet_contato[indice].endereco.pais);
  printf("\nCep: ");
  scanf("%d", &vet_contato[indice].endereco.cep);
  alfabeticOrder(vet_contato, indice);
}

int deleteContact(Contact vetor_contato[], int contador, char nome[])
{

  int aux = 0, indice_pessoa, op;
  for (int i = 0; i < contador; i++)
  {
    if (strcmp(nome, vetor_contato[i].nome) == 0)
    {
      aux = 1;
      indice_pessoa = i;
      printf("\nNome: ");
      mostraString(vetor_contato[i].nome);
      printf("\nE-mail: ");
      mostraString(vetor_contato[i].email);
      printf("\n");
    }
  }
  if (aux == 1)
  {
    printf("\n\nDeseja mesmo excluir o contado? 1 para SIM ou 2 para NAO: ");
    scanf("%d", &op);
    if (op == 1)
    {
      for (int i = indice_pessoa; i < contador; i++)
        vetor_contato[i] = vetor_contato[i + 1];
      return contador - 1;
    }
  }
  else
  {
    printf("\nPessoa não registrada.");
  }
  return contador;
}

int main()
{
  Contact agenda[100];
  Contact teste;
  int opcao, contador = 0;
  char nome_retirar[50];

  do
  {
    printf("\nEscolha uma opcao:\n\n 1 - Buscar por primeiro nome.\n 2 - Buscar por mes de aniversario.");
    printf("\n 3 - Buscar por mes e dia de aniversario.\n 4 - Listar nome, email e telefone dos contatos.\n 5 - Listar todos contatos cadastrados na agenda.");
    printf("\n 6 - Inserir novo contato.\n 7 - Excluir contato.");
    printf("\n8 - Sair do programa.\n\nDigite: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
      searchByName(agenda, contador);
      break;
    case 2:

      searchByBirthMonth(agenda, contador);
      break;
    case 3:
      searchByBirthDayAndMonth(agenda, contador);
      break;
    case 4:
      printf("\nNome, E-mail e telefone dos contatos cadastrados:\n");
      alfabeticOrder(agenda, contador);
      showNomeTelefoneEmail(agenda, contador);
      break;
    case 5:
      printf("\nContatos cadastrados");
      alfabeticOrder(agenda, contador);
      showAllContacts(agenda, contador);
      break;
    case 6:
      createContact(agenda, contador);
      contador++;
      break;
    case 7:
      printf("\n");
      printf("Informe o nome da pessoa a ser excluida: ");
      fflush(stdin);
      gets(nome_retirar);
      contador = deleteContact(agenda, contador, nome_retirar);
      break;
    default:
      if (opcao != 8)
      {
        printf("\n\nOpcao invalida.");
      }
    }
  } while (opcao != 8);

  printf("\n");
  return 0;
}