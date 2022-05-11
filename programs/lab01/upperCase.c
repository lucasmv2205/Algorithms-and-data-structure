#include <stdio.h>

char toUpperCase(char letter)
{
  return letter - 32;
}

int main()
{
  char str[20];
  printf("Digite um nome:\n");
  scanf("%s", str);

  for (int i = 0; str[i] != '\0'; i++)
  {
    printf("%c", toUpperCase(str[i]));
  }

  return 0;
}