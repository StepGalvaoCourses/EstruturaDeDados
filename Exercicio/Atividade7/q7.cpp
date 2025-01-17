#include <stdio.h>

int comparar_prim_ult(int *v, int tam){
    if(v[0]==v[tam-1]){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int numeros[5] = {1,2,4,5,3};
    int r = comparar_prim_ult(numeros,5);
    printf("%d\n",r);
}