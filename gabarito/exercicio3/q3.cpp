#include <stdio.h>

// As notas podem ser float ou double.
float media(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

int main() {
    float nota1, nota2, nota3, media_aluno;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media_aluno = media(nota1, nota2, nota3);
    
    printf("A media : %f\n", media_aluno);
    
    return 0;
}