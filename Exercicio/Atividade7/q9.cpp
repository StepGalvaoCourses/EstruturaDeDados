#include <stdio.h>

int somar_vetores(int *v1, int *v2, int tam){
    return v1[0]+v2[0];
}

int main(){
    int numeros[5] = {10,11,12,13,14};
    int idades[5] = {1,2,3,4,5};
    int soma = somar_vetores(numeros,idades,5);
    printf("%d \n", soma);
}