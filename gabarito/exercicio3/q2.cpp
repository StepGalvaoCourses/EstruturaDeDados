#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2, resultado;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    resultado = maior(num1, num2);
    
    printf("O maior numero: %d\n", resultado);
    
    return 0;
}