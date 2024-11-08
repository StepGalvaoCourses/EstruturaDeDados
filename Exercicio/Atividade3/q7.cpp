#include <stdio.h>

void tipoNumero(int numero){
    if(numero>0){
        printf("Numero positivo \n");
    }
    if(numero ==0){
        printf("Zero \n");
    }
    if(numero<0){
        printf("Numero negativo \n");
    }
}

int main(){
    int num;
    printf("Digite um numero:");
    scanf("%d",&num);
    tipoNumero(num);
}