#include <stdio.h>

int somar_vetor(int *v, int tam){
    int soma = 0;
    for(int i=0;i<tam;i++){
        soma += v[i];
    }
    return soma;
}

int main(){
    int numeros[5] = {11,12,14,13,15};
    int r = somar_vetor(numeros,5);
    printf("%d\n",r);
}