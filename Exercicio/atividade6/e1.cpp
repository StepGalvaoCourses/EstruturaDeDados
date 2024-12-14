#include <stdio.h>


int main(){

    int numeros[] = {10, 5, 6, 4, 2, 1, 22, 49, 3, 43};

    for(int i = 0; i<10; i++){
        int valor = numeros[i];
        if(valor % 2 == 0 ){
            printf("%d \n", valor );
        }
    }
}