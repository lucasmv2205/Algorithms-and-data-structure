#include <stdio.h>

int main(){
    float j1, j2, j3, somaJ;
    float premio=0, p1, p2, p3;

    printf("Jogador 1:\n");
    scanf("%f", &j1);

    printf("Jogador 2:\n");
    scanf("%f", &j2);

    printf("Jogador 3:\n");
    scanf("%f", &j3);

    printf("Premio:\n");
    scanf("%f", &premio);

    somaJ = j1+j2+j3;

    p1 = (j1/somaJ)*premio;
    p2 = (j2/somaJ)*premio;
    p3 = (j3/somaJ)*premio;

    printf("Valor do jogador 1: %.2f \nValor do jogador 2: %.2f \nValor do jogador 3: %.2f \n", p1,p2,p3);

    return 0;
}
