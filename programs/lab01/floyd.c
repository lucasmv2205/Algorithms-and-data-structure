#include <stdio.h>
#include <math.h>

int main(){
   int n, i, j, cont=1;

   printf("Digite um numero: \n");
   scanf("%d",&n);

   //linhas
   for(i = 1; i<=n; i++){
        //colunas
        for(j = 1; j<=i; j++){
            printf("%d\t", cont);
            cont++;
        }
        printf("\n");
   }



   return 0;
}
