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
    
    a1.matricula = 01;
    a1.media = 9.1;
    strcpy(a1.nome, "José");

    printf("Nome: %s \n",a1.nome);
    printf("Matricula: %d\n", a1.matricula);
    printf("Media: %f\n", a1.media);
}