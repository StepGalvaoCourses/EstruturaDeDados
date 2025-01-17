#include <stdio.h>

int retornar_primeiro(int *v, int tam){
    return v[0];
}

int main(){
    int numeros[5] = {5,4,3,2,1};
    int p = retornar_primeiro(numeros,5);
    printf("%d \n",p);
}