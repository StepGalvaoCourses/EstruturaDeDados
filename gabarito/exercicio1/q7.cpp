#include <stdio.h>

int main() {
    double salario, imposto, salario_final;


    printf("Digite o salario: ");
    scanf("%lf", &salario);


    imposto = salario * 0.10;
    salario_final = salario - imposto;


    printf("\nSalario: %lf\n", salario);
    printf("Imposto: %lf\n", imposto);
    printf("Salario Final: %lf\n", salario_final);

    return 0;
}