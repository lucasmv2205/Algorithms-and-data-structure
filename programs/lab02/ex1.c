#include <stdio.h>

int main(){
    int a = 40;
    int *p;
    p = &a;
    printf("\nendereo de a: %d", &a);
    printf("\nendereco de a: %d", p);
    printf("\nvalor de a: %d", a);
    printf("\nvalor de a: %d", *p);
    printf("\nDigite um valor para a: ");
    scanf("%d", p);
    printf("\nNovo valor de a: %d", a);
    printf("\nNovo valor de a: %d", *p);
    return 0;
}
