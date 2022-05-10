#include <stdio.h>
#include <math.h>

int main()
{
  float vet[5], media = 0, desvio = 0, soma = 0;

  for (int i = 0; i < 5; i++)
  {
    printf("\nDigite um numero: ");
    scanf("%f", &vet[i]);
    soma = soma + vet[i];
  }

  media = soma / 5;

  for (int i = 0; i < 5; i++)
  {
    desvio = desvio + pow((vet[i] - media), 2);
  }

  desvio = sqrt((1.0 / 4.0) * desvio);

  printf("A media e: %.1f\n O desvio padrao e: %.2f", media, desvio);

  return 0;
}