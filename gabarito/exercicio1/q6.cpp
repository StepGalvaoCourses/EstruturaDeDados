#include <stdio.h>

int main() {
    double salario, imposto;


    printf("Digite o salario: ");
    scanf("%lf", &salario);

    // Calcula o imposto (10%)
    imposto = salario * 0.10;

    // Exibe os resultados
    printf("Salario: %lf\n", salario);
    printf("Imposto: %lf\n", imposto);

    return 0;
}