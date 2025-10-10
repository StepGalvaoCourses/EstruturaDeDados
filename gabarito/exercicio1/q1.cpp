#include <stdio.h>

int main() {
    int idade;
    double salario;

    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    
    printf("Digite seu salario: ");
    scanf("%lf", &salario);

    // Exibe os valores lidos
    printf("Idade: %d\n", idade);
    printf("Salario: %lf\n", salario);

    return 0;
}