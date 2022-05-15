#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>
#include <term.h>

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
  printf("\nContato encontrado:");
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

void imprimeAgendaNomeTelefoneEmail(Contact *c, int tam)
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

void imprimeAgenda(Contact *c, int tam)
{
  for (int i = 0; i < tam; i++)
  {
    mostraStruct(&c[i]);
  }
}

int main()
{
  Contact agenda[100];
  Contact teste;
  int opcao;
  char nomeBusca[40], mesBusca[30];
  int diaBusca;
  strcpy(agenda[0].nome, "Lucas");
  strcpy(agenda[0].email, "lmartins@gmail");
  strcpy(agenda[0].observacao, "obs do lucas");
  agenda[0].aniversario.dia = 22;
  agenda[0].aniversario.ano = 1999;
  strcpy(agenda[0].aniversario.mes, "maio");
  agenda[0].telefone.ddd = 62;
  agenda[0].telefone.numero = 24242;
  strcpy(agenda[0].endereco.rua, "joao pereira da silva");
  strcpy(agenda[0].endereco.bairro, "saraiva");
  strcpy(agenda[0].endereco.complemento, "complemento end");
  strcpy(agenda[0].endereco.cidade, "uberlandia");
  strcpy(agenda[0].endereco.estado, "minas gerais");
  strcpy(agenda[0].endereco.pais, "Brasil");
  agenda[0].endereco.numero = 163;
  agenda[0].endereco.cep = 308;

  strcpy(agenda[1].nome, "Lucas martins");
  strcpy(agenda[1].email, "lucas@gmail");
  strcpy(agenda[1].observacao, "obs do lucas martins");
  agenda[1].aniversario.dia = 22;
  agenda[1].aniversario.ano = 1999;
  strcpy(agenda[1].aniversario.mes, "junho");
  agenda[1].telefone.ddd = 62;
  agenda[1].telefone.numero = 24242;
  strcpy(agenda[1].endereco.rua, "joao pereira da silva");
  strcpy(agenda[1].endereco.bairro, "saraiva");
  strcpy(agenda[1].endereco.complemento, "complemento end");
  strcpy(agenda[1].endereco.cidade, "uberlandia");
  strcpy(agenda[1].endereco.estado, "minas gerais");
  strcpy(agenda[1].endereco.pais, "Brasil");
  agenda[1].endereco.numero = 163;
  agenda[1].endereco.cep = 3408;

  strcpy(agenda[2].nome, "Millena");
  strcpy(agenda[2].email, "millena@gmail");
  strcpy(agenda[2].observacao, "obs da millena");
  agenda[2].aniversario.dia = 12;
  agenda[2].aniversario.ano = 2000;
  strcpy(agenda[2].aniversario.mes, "maio");
  agenda[2].telefone.ddd = 62;
  agenda[2].telefone.numero = 24242;
  strcpy(agenda[2].endereco.rua, "joao pereira da silva");
  strcpy(agenda[2].endereco.bairro, "saraiva");
  strcpy(agenda[2].endereco.complemento, "complemento end");
  strcpy(agenda[2].endereco.cidade, "uberlandia");
  strcpy(agenda[2].endereco.estado, "minas gerais");
  strcpy(agenda[2].endereco.pais, "Brasil");
  agenda[2].endereco.numero = 163;
  agenda[2].endereco.cep = 3048;

  strcpy(agenda[3].nome, "Millena gena");
  strcpy(agenda[3].email, "millena@gmail");
  strcpy(agenda[3].observacao, "obs da millena");
  agenda[3].aniversario.dia = 22;
  agenda[3].aniversario.ano = 2000;
  strcpy(agenda[3].aniversario.mes, "maio");
  agenda[3].telefone.ddd = 62;
  agenda[3].telefone.numero = 24242;
  strcpy(agenda[3].endereco.rua, "joao pereira da silva");
  strcpy(agenda[3].endereco.bairro, "saraiva");
  strcpy(agenda[3].endereco.complemento, "complemento end");
  strcpy(agenda[3].endereco.cidade, "uberlandia");
  strcpy(agenda[3].endereco.estado, "minas gerais");
  strcpy(agenda[3].endereco.pais, "Brasil");
  agenda[3].endereco.numero = 163;
  agenda[3].endereco.cep = 3048;

  // searchByName(agenda, 4);
  // searchByBirthMonth(agenda, "maio", 4);
  // searchByBirthDayAndMonth(agenda, "maio", 22, 4);
  // imprimeAgendaNomeTelefoneEmail(agenda, 4);
  // imprimeAgenda(agenda, 4);

  do
  {
    printf("Escolha uma opcao:\n\n 1 - Buscar por primeiro nome.\n 2 - Buscar por mes de aniversario.");
    printf("\n 3 - Buscar por mes e dia de aniversario.\n 4 - Listar nome, email e telefone dos contatos.\n 5 - Listar todos contatos cadastrados na agenda.");
    printf("\n 6 - Inserir novo contato.\n 7 - Excluir contato.");
    printf("\n8 - Sair do programa.\n\nDigite: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
      searchByName(agenda, 4);
      break;
    case 2:

      searchByBirthMonth(agenda, 4);
      break;
    case 3:
      searchByBirthDayAndMonth(agenda, 4);
      break;
    case 4:
      printf("\nNome, E-mail e telefone dos contatos cadastrados:\n");
      imprimeAgendaNomeTelefoneEmail(agenda, 4);
      break;
    case 5:
      printf("\nContatos cadastrados");
      imprimeAgenda(agenda, 4);
      break;
    case 6:

      break;
    case 7:

      break;
    default:
      if (opcao != 8)
      {
        printf("\n\nOpcao invalida.");
        // getc();
      }
    }
  } while (opcao != 8);

  printf("\n");
  return 0;
}