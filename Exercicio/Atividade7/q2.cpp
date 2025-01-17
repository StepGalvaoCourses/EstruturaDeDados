#include <stdio.h>

void somar_prim_ult(int *v,int tam){
    int soma = v[0] + v[tam-1];
    printf("%d\n", soma);
}

int main(){
    int numeros[] = {12,23,34,45,56,67,78,89,90,100};
    somar_prim_ult(numeros,10);

}