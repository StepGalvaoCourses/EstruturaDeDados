#include <stdio.h>

int somar_prim_ult(int *v, int tam){
    return v[0]+v[tam-1];
}

int main(){
    int numeros[5] = {5,1,3,4,2};
    int soma = somar_prim_ult(numeros,5);
    printf("%d\n",soma);
}