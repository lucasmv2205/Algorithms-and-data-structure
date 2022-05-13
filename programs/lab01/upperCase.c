#include <stdio.h>

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