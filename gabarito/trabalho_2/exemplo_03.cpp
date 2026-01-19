#include <stdio.h>
#include <string.h>

struct tipo_aluno{
    char nome[20];
    int matricula;
    float media;
};

typedef struct tipo_aluno Aluno;

int main(){
    Aluno alunos[3];

    alunos[0].matricula = 01;
    alunos[0].media = 8.9;
    strcpy(alunos[0].nome, "Jose");

    alunos[1].matricula = 10;
    alunos[1].media = 7.9;
    strcpy(alunos[1].nome, "Ana");

}
