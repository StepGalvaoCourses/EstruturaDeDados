#include <stdio.h>
#include <string.h>

struct tipo_aluno{
    char nome[20];
    int matricula;
    float media;
};

typedef struct tipo_aluno Aluno;

int main(){
    Aluno a1;
    
    printf("Digite o nome:");
    scanf("%s", a1.nome);
    printf("Digite a matricula:");
    scanf("%d",&a1.matricula);
    printf("Digite a média:");
    scanf("%f",&a1.media);

    printf("Nome: %s \n",a1.nome);
    printf("Matricula: %d\n", a1.matricula);
    printf("Media: %f\n", a1.media);
}