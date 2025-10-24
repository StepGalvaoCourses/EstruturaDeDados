#include <stdio.h>


void exibir_em_real(double valor) {
    printf("R$ %.2lf\n", valor);
}

int main() {
    double preco;
    
    printf("Digite um valor: ");
    scanf("%lf", &preco);
    
    exibir_em_real(preco); 
}