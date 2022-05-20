#include <stdio.h>
#include <stdlib.h>

struct ponto
{
    int x, y;
};
typedef struct ponto Ponto;

float calc_area(Ponto a, Ponto b)
{
    float base = b.x - a.x;
    float altura = b.y - a.y;
    float area = base * altura;
    return area;
}

int main()
{
    int n = 2, i;
    Ponto *vet;

    vet = (Ponto *)malloc(n * sizeof(Ponto));

    printf("\nDigite 2 pontos: ");

    for (i = 0; i < n; i++)
    {
        printf("\nPonto %d", i + 1);
        printf("\nInforme coordenada x: ");
        scanf("%d", &vet[i].x);
        printf("Informe coordenada y: ");
        scanf("%d", &vet[i].y);
    }

    printf("\nPontos inseridos:\n");
    for (i = 0; i < n; i++)
    {
        printf("Ponto %d\n", i + 1);
        printf("coordenada x: %d\n", vet[i].x);
        printf("coordenada y: %d\n", vet[i].y);
        printf("\n");
    }
    printf("area do retangulo formado pelos pontos (%d, %d), (%d, %d): %.2f\n", vet[0].x, vet[0].y, vet[1].x, vet[1].y, calc_area(vet[0], vet[1]));

    free(vet);
    return 0;
}
