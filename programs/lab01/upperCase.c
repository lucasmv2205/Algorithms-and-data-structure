#include <stdio.h>

int main()
{
  char str[20];
  printf("Digite um nome:\n");
  scanf("%s", str);

  for (int i = 0; str[i] != '\0'; i++)
  {
    printf("%c", str[i] - 32);
  }

  return 0;
}