#include <stdio.h>
#include <math.h>

int main(){
   float peso, imc, altura;

   printf("\nPeso(Kg): ");
   scanf("%f", &peso);

   printf("\nAltura(m): ");
   scanf("%f", &altura);

   imc = peso/(pow(altura,2));
   printf("\n imc: %.2f\n", imc);

   if(imc < 18.5){
    printf("magreza");
   }else if(imc>18.5 && imc < 24.9){
       printf("Saudavel");
   }else if(imc > 25.0 && imc < 29.9){
       printf("sobrepeso");
   }
   else if(imc > 30.0 && imc < 34.9){
       printf("Obesidade grau 1");
   }
   else if(imc > 35.0 && imc < 39.9){
       printf("obesidade grau 2(severa)");
   }else if(imc >= 40.0){
       printf("obesidade grau 3(morbida)");
   }



   return 0;
}
