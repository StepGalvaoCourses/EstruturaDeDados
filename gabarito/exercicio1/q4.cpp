#include <stdio.h>



int main() {
    float raio, area, comprimento;

    // Solicita e lê o raio do círculo
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    // Calcula a área e o comprimento
    area = 3.14 * raio * raio;
    comprimento = 2 * 3.14 * raio;

    // Exibe os resultados
    printf("\narea = %f\n", area);
    printf("comprimento = %f\n", comprimento);

    return 0;
}