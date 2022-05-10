#include <stdio.h>
#include <math.h>

int main(){
   int b1, b2, b3, b4, dec1, dec2, dec3, dec4, tot;

    printf("bit 1:\n");
    scanf("%d", &b1);

    printf("bit 2:\n");
    scanf("%d", &b2);

    printf("bit 3:\n");
    scanf("%d", &b3);

    printf("bit 4:\n");
    scanf("%d", &b4);

    tot = (pow(2, 3)*b1) + (pow(2,2)*b2) + (pow(2,1)*b3) + (pow(2,0)*b4);

    printf("O numero %d%d%d%d corresponde a: %d", b1,b2,b3,b4, tot);

    return 0;
}
