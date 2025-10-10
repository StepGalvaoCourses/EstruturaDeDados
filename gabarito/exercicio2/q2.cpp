#include <stdio.h>

int main(){
    int velocidade;
    double multa;
    printf("Digite a velocidade: ");
    scanf("%d",&velocidade);

    if(velocidade >80){
        multa = (velocidade-80) * 10;
        printf("Você foi multado\n");
        printf("Multa de %lf \n",multa);
    }
    printf("Fim do Programa\n");
    return 0;
}