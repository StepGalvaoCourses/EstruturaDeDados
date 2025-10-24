#include <stdio.h>


void ehPar(int numero) {
    if (numero % 2 == 0) {
        printf("O numero %d eh PAR.\n", numero);
    } else {
        printf("O numero %d eh IMPAR.\n", numero);
    }
}

int main() {
    int num;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    ehPar(num); 

    return 0;
}