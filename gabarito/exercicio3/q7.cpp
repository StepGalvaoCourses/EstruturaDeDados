#include <stdio.h>

// Função que calcula a área do triângulo
double areaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

int main() {
    double base_triangulo, altura_triangulo, area;
    
    printf("Digite a base do triangulo: ");
    scanf("%lf", &base_triangulo);
    printf("Digite a altura do triangulo: ");
    scanf("%lf", &altura_triangulo);
    
    area = areaTriangulo(base_triangulo, altura_triangulo);
    
    printf("A area: %f\n", area);
    
    return 0;
}