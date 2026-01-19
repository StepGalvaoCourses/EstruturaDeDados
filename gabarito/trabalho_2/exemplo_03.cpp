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

    printf("Digite a matricula:");
    scanf("%d",&alunos[0].matricula );
    printf("Digite a nome:");
    scanf("%s",alunos[0].nome );
    printf("Digite a media:");
    scanf("%f",&alunos[0].media );

    printf("Nome: %s \n",alunos[0].nome);
    printf("Matricula: %d \n",alunos[0].matricula);
    printf("Media: %d \n",alunos[0].media);
}
