#include <stdio.h>

int main(){
    int velocidade;
    printf("Digite a velocidade:");
    scanf("%d",&velocidade);

    if(velocidade >80){
        printf("Vermelho");
    }else{
        printf("Verde");
    }
}