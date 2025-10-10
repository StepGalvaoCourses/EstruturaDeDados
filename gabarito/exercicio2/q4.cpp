#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Nota 4: ");
    scanf("%f", &n4);
    // Calcula a média
    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("Média: %.1f\n", media);

    // Verifica e exibe a situação do aluno
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {    
        printf("Aluno em exame.\n");
    }

    return 0;
}