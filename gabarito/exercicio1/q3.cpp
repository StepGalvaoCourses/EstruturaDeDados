#include <stdio.h>

int main() {
    float altura, largura, area, perimetro;

    
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    
    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);

    
    area = altura * largura;
    perimetro = 2 * altura + 2 * largura;

    
    printf("area = %f\n", area);
    printf("perimetro = %f\n", perimetro);

    return 0;
}