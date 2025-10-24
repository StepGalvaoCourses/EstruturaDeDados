#include <stdio.h>

// A média pode ser float ou double.
int situacao(double media) {
    if (media >= 6.0) {
        return 0; // Aprovado
    } else {
        return 1; // Reprovado
    }
}

int main() {
    double media_aluno;
    int status;
    
    printf("Digite a media do aluno: ");
    scanf("%lf", &media_aluno);
    
    status = situacao(media_aluno);
    
    if (status == 0) {
        printf("Situacao: Aprovado (retorno %d)\n", status);
    } else {
        printf("Situacao: Reprovado (retorno %d)\n", status);
    }
    
    return 0;
}