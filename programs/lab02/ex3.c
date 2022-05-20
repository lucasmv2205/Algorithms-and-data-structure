#include <stdio.h>

int main(){
    double vet[] = {1,2,3,4,5,6,7,8,9,10};

    for(int i = 0; i < 10; i++){
        printf("%.3lg\t", *(vet+i));
    }

    return 0;
}
