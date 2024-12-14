#include <stdio.h>
int main(){
    int frequencia[30];

    for(int i = 0; i<30; i=i+1){
        printf("Aula %d frequencia (0-ausente 1-presente):",(i+1));
        scanf("%d",&frequencia[i]);
    }

    int faltas = 0;
    for(int i=0; i<30; i++){
        if(frequencia[i] == 0){
            faltas = faltas +1;
        }
    }
    printf("Faltas = %d \n",faltas);
}