#include <stdio.h>


float calcularIMC(float massa, float altura) {
    return massa / (altura * altura);
}

int main() {
    float massa, altura, imc;
    
    printf("Digite a massa: ");
    scanf("%f", &massa);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    imc = calcularIMC(massa, altura);
    
    printf("O IMC eh: %f\n", imc);
    
    return 0;
}