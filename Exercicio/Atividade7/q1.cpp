#include <stdio.h>

void exibir_primeiro_ultimo(int *v, int tam){
    printf("%d\n",v[0]);
    printf("%d\n",v[tam-1]);
}


int main(){
    int idades[] = {13, 22, 23, 24, 35, 15, 11};
    exibir_primeiro_ultimo(idades,7);
}