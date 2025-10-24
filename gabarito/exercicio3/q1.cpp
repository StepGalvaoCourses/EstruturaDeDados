#include <stdio.h>

int sucessor(int numero) {
    return numero + 1;
}

int main() {
    int num, suc;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    suc = sucessor(num);
    
    printf("O sucessor de %d eh %d\n", num, suc);
    
    return 0;
}