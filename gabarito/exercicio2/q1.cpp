#include <stdio.h>

int main(){
    int velocidade;
    scanf("%d",&velocidade);

    if(velocidade<=80){
        printf("Verde \n");
    }
    else{
        printf("Vermelho \n");
    }
}