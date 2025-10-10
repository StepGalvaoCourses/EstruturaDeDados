#include <stdio.h>

int main() {
    float distancia, velocidade, tempo;


    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Digite a velocidade do carro (km/h): ");
    scanf("%f", &velocidade);


    tempo = distancia / velocidade;


    printf("Tempo: %f hr\n", tempo);

    return 0;
}