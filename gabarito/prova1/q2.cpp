#include <stdio.h>
int main() {
    double salario = 1000;
    double imposto = 0;

    printf("Digite o salario:");
    scanf("%lf", &imposto);
    imposto = salario * 0.10;
    printf("Imposto: %lf\n", imposto);
}
