#include <stdio.h>

void exibir_vetor(int *v, int tam){
    printf("[ ");
    for (int i = 0; i < tam; i++){
        printf("%d,",v[i]);
    }
    printf(" ]\n");
}

int main(){
    int numeros[] = {2,1,2,4,5,6,7,8,90,0,2,1};
    int idades[] = {13,14,15,16,17,18,19,20};
    exibir_vetor(numeros,12);
    exibir_vetor(idades,8);
}