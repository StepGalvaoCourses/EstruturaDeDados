#include <stdio.h>

int main(){
    int velocidade;
    double multa;
    printf("Digite a velocidade:");
    scanf("%d",&velocidade);

    if(velocidade >80){
        multa = (velocidade - 80) * 10.0;
        printf("Multa = %0.2lf", multa);
    }
}