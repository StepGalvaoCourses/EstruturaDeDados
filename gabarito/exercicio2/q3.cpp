#include <stdio.h>

int main() {
    double salario, imposto_renda, inss;


    printf("Digite o valor do seu salario: R$ ");
    scanf("%lf", &salario);


    if (salario > 2000.00) {
        imposto_renda = salario * 0.15; // 15%
        inss = salario * 0.10;          // 10%
    } else {
        imposto_renda = 0.0;            // 0%
        inss = salario * 0.07;          // 7%
    }


    printf("\nSalario: R$ %.2lf\n", salario);
    printf("Imposto de renda: R$ %.2lf\n", imposto_renda);
    printf("INSS: R$ %.2lf\n", inss);

    return 0;
}