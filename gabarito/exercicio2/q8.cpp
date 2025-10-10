#include <stdio.h>

int main() {
    int numero = -1;

    while (numero != 1) {
        printf("Digite o numero 1.\n");
        scanf("%d", &numero);
    } ;

    printf("Fim do programa\n");

    return 0;
}