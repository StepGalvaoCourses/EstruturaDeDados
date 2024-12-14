#include <stdio.h>

int main(){
    float notas[5];

    for (int i = 0; i<5; i=i+1){
        printf("Digita a nota:");
        scanf("%f",&notas[i]);
    }

    for (int i = 0; i<5; i++){
        printf("%f \n",notas[i]);
    }
    
}