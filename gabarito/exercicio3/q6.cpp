#include <stdio.h>


float areaQuadrado(float lado) {
    return lado * lado;
}

int main() {
    float lado_quadrado, area;
    
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado_quadrado);
    
    area = areaQuadrado(lado_quadrado);
    
    printf("A area: %f\n", area);
    
    return 0;
}